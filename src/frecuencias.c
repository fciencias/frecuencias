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
    aux.repeticion = 0;
    arr[i] = aux;
  }
}

int
buscar_carcater(char caracter) {
  char aux;
  int i;
  for (i = 0; i < TAMANO; i++) {
    aux = ALFABETO[i];
    if (aux == caracter) {
      return i;
    }
  }
}
