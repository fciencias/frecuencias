#include <stdio.h>
#include <stdlib.h>
#include "frecuencias.h"


FILE*
leer_archivo(char* nombre_archivo) {
  FILE* file;
  file = fopen(nombre_archivo, "r");
  return file;
}

void
explorar_texto(FILE* file) {
  char caracter = getc(file);
  while(caracter != EOF) {
    printf("hoal");
  }
}

void
crea_arreglo_frecuencia(struct frecuencia arr[]) {
  int i;
  char c;
  struct frecuencia aux;
  for(i = 0; i < TAMANO; i++) {
    c = ALFABETO[i];
    aux.letra = c;
    printf("%c\n",c);
    aux.repeticion = 0;
    arr[i] = aux;
  }
}
