#include <stdlib.h>
#include <stdio.h>

#define ALFABETO abcdefghijklmnopqrstuvwxyz

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

/* Funcion que busca un caracter y suma 1
 * automaticamente a la frecuencia del caracter.
*/
void
aumentar(char letra, struct frecuencia **arr);
