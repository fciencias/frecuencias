#include <stdlib.h>
#include <stdio.h>

#define ALFABETO "abcdefghijklmnopqrstuvwxyz"
#define ALFABETOMAYUS "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define TAMANO 26

struct frecuencia {
  char letra;
  int repeticion;
};

/* Funcion que se encarga de leer un archivo
 * y lo pasa a un tipo File, si no lo puede abrir
 * manda un mensaje de que el mensaje no se abrio
 * correctamente, recibe el nombre del archivo. 
*/
FILE*
leer_archivo(char* nombre_archivo);

/* Recorre todo el texto contando las frecuencias.
*/
void
explora_texto(FILE* archivo, struct frecuencia arr[]);

/* Crea un arreglo tamano 26 con las frecuencias
 * inicializandola en 0.
*/
void
crea_arreglo_frecuencia(struct frecuencia arr[]);

//
void
aumentar(char caracter, struct frecuencia arr[]);

void
imprime_lista_de_frecuencias(struct frecuencia arr[]);

void
swap(struct frecuencia arr[], int posicionA, int posicionB);

void
selectionsort(struct frecuencia arr[]);
