#include <stdlib.h>
#include <stdio.h>

#define ALFABETO "abcdefghijklmnopqrstuvwxyz"
#define TAMANO 26

struct frecuencia {
  char letra;
  int repeticion;
};

/* Arreglo con las frecuencias del alfabeto.
*/
//struct frecuencia arreglo_letras[];

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
explora_texto(FILE* archivo);

/*
*/
void
crea_arreglo_frecuencia(struct frecuencia arr[]);
