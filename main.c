#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

struct
{
 int id;
 char nombre[21];
 int infectados;
 int recuperados;
 int muertos;
}typedef ePais

void actualizarRecuperados(ePais* lista, int identificacion, int tam);
void ordenarCaracteres (char* caracteres, int tam);
void invertirCadena(char* cadena[]);

int main()
{
    ePais paises [TAM]={{1, "Argentina", 20, 30, 2},{2, "peru", 30,25,6}};
    actualizarRecuperados(paises, 2, TAM);
    char caracteress[TAM] = {'a', 'g', 'd'};
    ordenarCaracteres(caracteress, TAM);
    char cadenaa [20] = {"hola"};
    invertirCadena(cadenaa);

    return 0;
}

/*

1. Dada una estructura ePais cuyos campos son id(int),
nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
Desarrollar una función llamada actualizarRecuperados que reciba el país y
los recuperados del dia
y que acumule estos a los que ya tiene el país. La función no devuelve nada. *
*/

void actualizarRecuperados(ePais* lista, int identificacion, int tam)
{
    int recuperadosDia;
    printf("Ingrese el id del pais que desea actualizar: \n");
    scanf("%d",&identificacion);
    for(int i = 0; i < tam; i ++)
    {
        if(lista[i].id == identificacion)
        {
            printf("Ingrese los recuperados del dia: \n");
            scanf("%d", &recuperadosDia);

            lista[i].recuperados = lista[i].recuperados + recuperadosDia;
        }else
        {
            printf("No se encontro el id solicitado. \n");
        }
    }
}


/*
2. Crear una función que se llame invertirCadena que reciba una
cadena de caracteres como parámetro y su responsabilidad es invertir
los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU *
*/

void invertirCadena(char* cadena[])
{
    int longitud = strlen(cadena);
    char auxCadena;
    for (int i = 0, d = longitud - 1; i < (longitud / 2);izquierda++, derecha--)
    {
        auxCadena = cadena[i];
        cadena[i] = cadena[d];
        cadena[d] = temporal;
    }

}


/*
3. Crear una función que se llame ordenarCaracteres que reciba
una cadena de caracteres como parámetro y su responsabilidad es ordenarlos
caracteres de manera ascendente
dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort" *
*/

void ordenarCaracteres (char* caracteres, int tam)
{
    char auxCaracter;

    for(int i = 0; i<tam; i++)
    {
       for(int j=i+1; j<tam; j++)
       {
           if(caracteres[i]<caracteres[j])
           {
               auxCaracter = caracteres[i];
               caracteres[i] = caracteres[j];
               caracteres[j] = auxCaracter;
           }
       }
    }

}
