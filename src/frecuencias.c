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
