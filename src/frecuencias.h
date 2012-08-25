#include <stdlib.h>
#include <stdio.h>

#define ALFABETO "abcdefghijklmnopqrstuvwxyz"
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
explora_texto(FILE* archivo);

/* Crea un arreglo tamano 26 con las frecuencias
 * inicializandola en 0.
*/
void
crea_arreglo_frecuencia(struct frecuencia arr[]);

int
buscar_caracter(char caracter);
