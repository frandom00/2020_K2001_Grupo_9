#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char num[40][40];
char tipo[13];

FILE * fIn;
FILE * fOut;

void GuardarCaracter(char);
int main()
{
    printf("Leyendo archivo: \n");
    //Abro archivos como lectura / escritura 
    fIn = fopen("NumerosALeer.txt","r+");
    fOut = fopen("Tipos.txt","w+");
    
    if(!fIn)
    {
        printf("Archivo no encontrado.");
    }
    else
    {
        printf("Archivo encontrado\n");
        char c ;
        
        bool Hex = false;
        bool Oct = false;
        bool Dec = false;
        bool inv = false;
        int e = 0;

        //leo caracteres en el archivo hasta el final del mismo
        while(fread(&c,sizeof(c),1,fIn) != 0) 
        {
            if(c != ',') //Si no es una coma (separacion entre palabras)
            {
                GuardarCaracter(c);
                if(e == 0)
                {
                    if(c == '0')//Es octal o hexa
                    {
                        e = 1;
                    }
                    else if((c - 48) > 0 && (c - 48) < 10)//Es decimal
                    {
                        e = 2;//primer caracter decimal
                        Dec = true;
                    }
                    else
                    { 
                        inv = true; //No es un tipo valido
                    }
                    
                }
                else if(e == 1) //veo si el segundo caracter es invalido, octal o hexa
                {
                    if(c == 'X' || c == 'x') //Si es hexa
                    {
                        Hex = true;
                        e = 2;
                    }
                    else if((c - 48) > 0 && (c - 48) < 7)//Si Es octal
                    {
                        Oct = true;
                        e = 2;
                    }
                    else
                    {
                        inv = true;
                    }
                    
                    
                }
                else if (e == 2) //Leo el resto de los caracteres
                {

                    if(Dec)
                    {
                        if(!((c - 48) > 0 && (c - 48) < 10)) //Si el numero no esta entre 1 y 9
                            inv = true;
                       
                    }   
                    else if(Hex) 
                    {   //Si el numero no esta en [0,9] [a,f] o [A,F]
                        if(!(((c-48) >= 0 && (c-48) <= 9) ||  (c>= 'a' && c<= 'f') ||  (c>= 'A' && c<= 'F'))) 
                            inv = true;
                    }   
                    else if(Oct)
                    {
                        //Si el numero no esta en [0,9]
                        if(!((c-48) >= 0 && (c-48) <= 7))
                            inv = true;
                    }    
                       
                }
            }
            else //Si es una coma (separacion de palabras)
            {
                if(!inv) //Si no se detecto un caracter invalido
                {
                    if(Dec)
                    {
                        printf(": Decimal");
                        fprintf(fOut,": Decimal");
                    }
                    else if(Hex)
                    {
                        printf(": Hexadecimal");
                        fprintf(fOut,": Hexadecimal");
                    }
                    else if(Oct)
                    {
                        printf(": Octal");
                        fprintf(fOut,": Octal");
                    }   
                    else 
                    {
                        printf(": Octal(Cero)");
                        fprintf(fOut,": Octal(Cero)");
                    } 
                }
                else //Si se detecto un caracter invalido
                {
                    inv = false;
                    fprintf(fOut,": Invalido");
                    printf(": Invalido");
                }
                
                e = 0;
                //ir a siguiente linea en el archivo
                Dec = false;
                Oct = false;
                Hex = false;
            
                printf("\n");
                fprintf(fOut,"\n");
            }
    
            
        }
        if(!inv) //Si no se detecto un caracter invalido
        {
            if(Dec)
            {
                printf(": Decimal");
                fprintf(fOut,": Decimal");
            }
            else if(Hex)
            {
                printf(": Hexadecimal");
                fprintf(fOut,": Hexadecimal");
            }
            else if(Oct)
            {
                printf(": Octal");
                fprintf(fOut,": Octal");
            }    
            else 
            {
                printf(": Octal(Cero)");
                fprintf(fOut,": Octal(Cero)");
            }
        }
        else //Si se detecto un caracter invalido
        {
            inv = false;
            fprintf(fOut,": Invalido");
            printf(": Invalido");
        }
        
        e = 0;
        //ir a siguiente linea en el archivo
        Dec = false;
        Oct = false;
        Hex = false;
    
        printf("\n");
        fclose(fIn);
        fclose(fOut);
    }

    return 0;
}

void GuardarCaracter(char c)
{
    printf("%c",c);
    fprintf(fOut,"%c",c);
}