#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int columna (int caracterASCII)
{
    int columnaALaQueVoy;
    if (caracterASCII==48)
        columnaALaQueVoy=0;
    else if (caracterASCII>=49 && caracterASCII<=55)
        columnaALaQueVoy=1;
      else if (caracterASCII>=56 && caracterASCII<=57)
         columnaALaQueVoy=2;
          else if (caracterASCII==88 || caracterASCII==120)
          columnaALaQueVoy=3;
           else if ((caracterASCII>=65 && caracterASCII<=70)|| (caracterASCII>=97 && caracterASCII<=102))
           columnaALaQueVoy=4;
            else
                columnaALaQueVoy=5;
            return columnaALaQueVoy;
}

void escribirEnArchivo (int inicial, FILE *archivoAEscribir)
{
    if (inicial==0)
         fputs("No se leyo ningun numero,",archivoAEscribir);
    else if (inicial==1)
         fputs("Numero decimal,",archivoAEscribir);
    else if (inicial==2)
         fputs("palabra no reconocida,",archivoAEscribir);
    else if (inicial==3)
         fputs("palabra no reconocida,",archivoAEscribir);
    else if (inicial==4)
         fputs("Numero Hexadecimal,",archivoAEscribir);
    else if (inicial==5)
         fputs("Numero Octal,",archivoAEscribir);
    else if (inicial==6)
        fputs("palabra no reconocida,",archivoAEscribir);
    return;
}

int main(){

    FILE *archivoALeer;
    FILE *archivoAEscribir;
    int matrizDeEstado [7][6]=  {
    //   0   1-7  8-9  x-X  letrs error
        {2,   1,   1,   6,   6,   6},   //q0
        {1,   1,   1,   6,   6,   6},   //q1
        {5,   5,   6,   3,   6,   6},   //q2
        {4,   4,   4,   6,   4,   6},   //q3
        {4,   4,   4,   6,   4,   6},   //q4
        {5,   5,   6,   6,   6,   6},   //q5
        {6,   6,   6,   6,   6,   6},   //q6
    };;
    char caracterLeido;
    int caracterASCII,inicial=0,busqueda,columnaALaQueVoy;
     archivoALeer= fopen("DocALeer.txt","r+"); //abro el archivo
    archivoAEscribir= fopen("docAescribir.txt","wb");
    if (!archivoALeer) //me fijo si se pudo leer
    {
        printf("no se pudo abrir el archvio\n");
    }
    else
    {
        while (fread(&caracterLeido,sizeof(caracterLeido),1,archivoALeer))
        {
            if (caracterLeido!=',')
            {
                caracterASCII=caracterLeido;
                inicial= matrizDeEstado [inicial][columnaALaQueVoy=columna(caracterASCII)];
            }
            else if (caracterLeido==',')
                {
                escribirEnArchivo(inicial,archivoAEscribir);
                inicial=0;
                }
        }
    }
    fclose(archivoALeer);
    fclose(archivoAEscribir);

    return 0;
}
