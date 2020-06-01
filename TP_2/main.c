
#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
   char valor;
   struct nodo * siguiente;
}nodo_lista;

nodo_lista *iniciar (nodo_lista *pila) //inicio la lista vacia
{
     pila=NULL;
     return;
}

nodo_lista *inicializar(nodo_lista *pila)
{
    nodo_lista *nuevo_nodo;
    nuevo_nodo = (nodo_lista *) malloc(sizeof (nodo_lista));
    nuevo_nodo->valor = '$';
    nuevo_nodo->siguiente= NULL;
    pila= nuevo_nodo;
    return pila;
}

nodo_lista *push(nodo_lista *pila, char cima_pila) {
   nodo_lista *aux,*nuevo_nodo;
   nuevo_nodo = (nodo_lista *) malloc(sizeof (nodo_lista));
   nuevo_nodo->valor = cima_pila;
   nuevo_nodo->siguiente=NULL;
   if (pila==NULL)
    pila=nuevo_nodo;
    else
    {
        aux=pila;
        while (aux->siguiente!=NULL)
            aux=aux->siguiente;
        aux->siguiente= nuevo_nodo;
    }
   return pila;
}

nodo_lista  *borrarUltimoPila (nodo_lista *pila) //BORRA EL ULTIMO VALOR DE LA PILA YA QUE LO TOMO CON EL POP
{
    nodo_lista *aux;
    aux=pila;
    if (aux->siguiente==NULL){
        free(aux);
        pila=NULL;
        }
    else {
    while ((aux->siguiente)->siguiente!=NULL)
        aux=aux->siguiente;
    free(aux->siguiente);
    aux->siguiente=NULL;}
    return pila;
}

char pop(nodo_lista **pila) { //TOMA EL ULTIMO VALOR DE LA PILA
   nodo_lista *aux;
   char cima_pila;
   aux= *pila;
   if(!aux) return 0;
   while (aux->siguiente!=NULL)
       aux=aux->siguiente;
   cima_pila= aux->valor; //TOMA EL VALOR DE LA CIMA DE LA PILA
   *pila=borrarUltimoPila (*pila); //BORRA EL ULTIMO NODO
   return cima_pila;
}

int aQueColumnaVoy (char cCaracter){

    int columna;
        if (cCaracter == '0')
            columna = 0;
        else if (cCaracter >= '1' &&  cCaracter <= '9')
            columna = 1;
        else if (cCaracter == '+' || cCaracter == '-' || cCaracter == '*' || cCaracter == '/')
            columna = 2;
        else if (cCaracter == '(')
            columna = 3;
        else if (cCaracter == ')')
            columna = 4;
        else
            columna = 5;
    return columna;
}


nodo_lista * pilasuper (char caracter, nodo_lista *pila,char *cima_pila){

    char cima_pila_aux;
    if (caracter == '0')
    {
        cima_pila_aux= pop (&pila);
        pila=push (pila,cima_pila_aux);
        *cima_pila=cima_pila_aux;
    }
    else if (caracter >= '1' &&  caracter <= '9')
    {
        cima_pila_aux= pop (&pila);
        pila=push (pila,cima_pila_aux);
        *cima_pila=cima_pila_aux;
    }
    else if (caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/')
    {
        cima_pila_aux= pop (&pila);
        pila=push (pila,cima_pila_aux);
        *cima_pila=cima_pila_aux;

    }
    else if (caracter == '(')
    {
        cima_pila_aux= pop (&pila);
        pila=push (pila,cima_pila_aux);
        pila=push (pila,'R');
        *cima_pila='R';

    }
    else if (caracter == ')')
    {
        cima_pila_aux= pop (&pila);
        *cima_pila=cima_pila_aux;
    }
    else
    {
        return 0;
    }
    return pila;
}


int main()
{
   int matriz_de_estado [2][4][6];
// CIMA_PILA = 0 SI LA CIMA DE LA PILA = $
// E= ESTADO // C= CARACTER (C=0 ES EL CARACT. 0; C=1 ES [1-9]; C=2 ES { + , - , * , / } ; C=3 ES "(" ; C=4 ES ")" ; C=5 ES ERROR
//                       $  E  C
        matriz_de_estado[0][0][0] =3;   // (q0 , $)
        matriz_de_estado[0][0][1] =1;   // (q0 , $)
        matriz_de_estado[0][0][2] =3;   // (q0 , $)
        matriz_de_estado[0][0][3] =0;   // (q0 , $)
        matriz_de_estado[0][0][4] =3;   // (q0 , $)
        matriz_de_estado[0][0][5] =3;   // (q0 , $)
        matriz_de_estado[0][1][0] =1;   // (q1 , $)
        matriz_de_estado[0][1][1] =1;   // (q1 , $)
        matriz_de_estado[0][1][2] =0;   // (q1 , $)
        matriz_de_estado[0][1][3] =3;   // (q1 , $)
        matriz_de_estado[0][1][4] =3;   // (q1 , $)
        matriz_de_estado[0][1][5] =3;   // (q1 , $)
        matriz_de_estado[0][2][0] =3;   // (q2, $)
        matriz_de_estado[0][2][1] =3;   // (q2, $)
        matriz_de_estado[0][2][2] =0;   // (q2, $)
        matriz_de_estado[0][2][3] =3;   // (q2, $)
        matriz_de_estado[0][2][4] =3;   // (q2, $)
        matriz_de_estado[0][2][5] =3;   // (q2, $)
        matriz_de_estado[0][3][0] =3;   // ERROR
        matriz_de_estado[0][3][1] =3;   // ERROR
        matriz_de_estado[0][3][2] =3;   // ERROR
        matriz_de_estado[0][3][3] =3;   // ERROR
        matriz_de_estado[0][3][4] =3;   // ERROR
        matriz_de_estado[0][3][5] =3;   // ERROR
// CIMA_PILA = 0 SI LA CIMA DE LA PILA = R
//                       R  E  C
        matriz_de_estado[1][0][0] =3;   // (q0 , R)
        matriz_de_estado[1][0][1] =1;   // (q0 , R)
        matriz_de_estado[1][0][2] =3;   // (q0 , R)
        matriz_de_estado[1][0][3] =0;   // (q0 , R)
        matriz_de_estado[1][0][4] =3;   // (q0 , R)
        matriz_de_estado[1][0][5] =3;   // (q0 , R)
        matriz_de_estado[1][1][0] =1;   // (q1, R)
        matriz_de_estado[1][1][1] =1;   // (q1, R)
        matriz_de_estado[1][1][2] =0;   // (q1, R)
        matriz_de_estado[1][1][3] =3;   // (q1, R)
        matriz_de_estado[1][1][4] =2;   // (q1, R)
        matriz_de_estado[1][1][5] =3;   // (q1, R)
        matriz_de_estado[1][2][0] =3;   // (q2, R)
        matriz_de_estado[1][2][1] =3;   // (q2, R)
        matriz_de_estado[1][2][2] =0;   // (q2, R)
        matriz_de_estado[1][2][3] =3;   // (q2, R)
        matriz_de_estado[1][2][4] =2;   // (q2, R)
        matriz_de_estado[1][2][5] =3;   // (q2, R)
        matriz_de_estado[1][3][0] =3;   // ERROR
        matriz_de_estado[1][3][1] =3;   // ERROR
        matriz_de_estado[1][3][2] =3;   // ERROR
        matriz_de_estado[1][3][3] =3;   // ERROR
        matriz_de_estado[1][3][4] =3;   // ERROR
        matriz_de_estado[1][3][5] =3;   // ERROR

  nodo_lista *pila=iniciar (pila);
  int contador=0,posicion_lista=0,columna=0,estado = 0,pesos;
  char expresion [100],caracter,cima_pila= '\0';
  printf ("Ingrese una expresion \n");
  scanf("%s",&expresion);
  pila= inicializar (pila); // agrego el $ inicial a la lista
  while (expresion[contador]!='\0')
          contador++;

  while (posicion_lista<contador)
  {
      caracter= expresion [posicion_lista];
      columna= aQueColumnaVoy (caracter);
      if (estado != 3 && columna != 5 )  // SI NO HAY ERROR (POR AHORA)
    {
        pila=pilasuper (caracter, pila, &cima_pila);
        if (cima_pila == 'R'){
            pesos = 1;
        } else {
            pesos = 0;
        }
        estado = matriz_de_estado[pesos][estado][columna];
        if (estado==3){
            printf("\n");
            printf ("error en caracter :%c \n", caracter); return 0;}
        else
        printf ("%c", caracter);
    }
      posicion_lista++;
  }
   printf("\n");
  if (estado==3 || columna ==5)
    printf("error en el ultimo caracter \n");
  else if (expresion [contador-1]== '+' || expresion [contador-1] == '-' || expresion [contador-1] == '*' || expresion [contador-1] == '/')
    printf("no se conoce el segundo valor de la suma/resta/multiplicacion o division \n");
    else
    {
        cima_pila= pop(&pila);
        if (cima_pila=='R')
            printf("no se cerro un parentesis \n");
        else if (cima_pila=='$')
            printf("no hubo error \n");
        else
            printf("error desconocido \n");
    }

    return 0;
}

