#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   printf("Hello world!\n");
    FILE *archivoALeer;
    FILE *archivoAEscribir;
    char caracterLeido;
    int caracterASCII,contador=0,comparador=0,entroADecimal=0,entroAOctal=0,entroAHexa=0;
    archivoALeer= fopen("DocALeer.txt","r+"); //abro el archivo
    archivoAEscribir= fopen("docAescribir.txt","wb");
    if (!archivoALeer) //me fijo si se pudo leer
    {
        printf("no se pudo abrir el archvio\n");
    }
    else
    {
        while (fread(&caracterLeido,sizeof(caracterLeido),1,archivoALeer)) // mientras pueda leer el archivo...
               {

                       caracterASCII=caracterLeido;
                        if (caracterASCII>=49 && caracterASCII<=57) //me fijo si es decimal con numeros entre 1 y 9 en ascii
                        {
                            comparador=comparador+1;contador=contador+1;
                            entroADecimal=1;
                            while (fread(&caracterLeido,sizeof(caracterLeido),1,archivoALeer)&& caracterLeido!=',')
                            {
                                caracterASCII=caracterLeido;
                                comparador=comparador+1;
                                if (caracterASCII>=48 && caracterASCII<=57)
                                    contador=contador+1;

                            }
                        } //salgo del if para los decimales cuando tengo una coma o se termina el archivo
                        else if (caracterASCII==48) //nada mas entro aca si no entre a decimal
                        {
                            if (fread(&caracterLeido,sizeof(caracterLeido),1,archivoALeer)&& caracterLeido!=',')
                            {
                                caracterASCII=caracterLeido;
                                if (caracterASCII>=48 && caracterASCII<=55) //si entra aca voy a estar hablando de un posible numero octal
                                {
                                    comparador=comparador+1;contador=contador+1;
                                    entroAOctal=1;
                                    while (fread(&caracterLeido,sizeof(caracterLeido),1,archivoALeer)&& caracterLeido!=',')
                                        {
                                            caracterASCII=caracterLeido;
                                            comparador=comparador+1;
                                            if (caracterASCII>=48 && caracterASCII<=55)
                                                contador=contador+1;

                                        }
                                }
                                else if (caracterASCII==88 || caracterASCII==120)
                                {
                                     comparador=comparador+1;contador=contador+1;
                                     entroAHexa=1;
                                     while (fread(&caracterLeido,sizeof(caracterLeido),1,archivoALeer)&& caracterLeido!=',')
                                        {
                                            caracterASCII=caracterLeido;
                                            comparador=comparador+1;
                                            if ((caracterASCII>=48 && caracterASCII<=57)|| (caracterASCII>=65 && caracterASCII<=70)|| (caracterASCII>=97 && caracterASCII<=102))
                                                contador=contador+1;

                                        }
                                }
                              }

                            }
                            if (contador==comparador && contador>=1)
                            {
                                if (entroADecimal==1)
                                    fputs("Numero decimal,",archivoAEscribir);
                                    else if (entroAOctal==1)
                                    fputs("Numero octal,",archivoAEscribir);
                                        else if (entroAHexa==1)
                                        fputs("Numero hexa,",archivoAEscribir);
                            }
                            else
                                 {
                                fputs("Palabra no reconocida,",archivoAEscribir);
                                if (caracterLeido!=',')
                                     {
                                    while (fread(&caracterLeido,sizeof(caracterLeido),1,archivoALeer)&& caracterLeido!=',')
                                    {

                                    }
                                    }
                                 }
                                contador=0;
                                comparador=0;
                                entroADecimal=0;
                                entroAHexa=0;
                                entroAOctal=0;

                   }
               }
               fclose(archivoALeer);
               fclose(archivoAEscribir);
}


