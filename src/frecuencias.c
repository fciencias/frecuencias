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
explorar_texto(FILE* file, struct frecuencia arr[]) {
  char caracter = getc(file);
  while(caracter != EOF) {
    aumentar(caracter, arr);
    caracter = getc(file);
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

void
aumentar(char caracter, struct frecuencia arr[]) {
  char aux;
  int i;
  for (i = 0; i < TAMANO; i++) {
    aux = ALFABETO[i];
    if (aux == caracter) {
      arr[i].repeticion += 1;
      break;
    }
  }
}


void
imprime_lista_de_frecuencias(struct frecuencia arr[]) {
  int i;
  printf("Letra     Frecuencia     Letra     Frecuencia\n");
  for (i = 0; i < TAMANO; i += 2) {
    /* printf("Letra: %c   Frecuencia: %d   |",
           arr[i].letra, arr[i].repeticion);
    printf("Letra: %c   Frecuencia: %d   |\n",
    arr[i+1].letra, arr[i+1].repeticion);*/
    printf("  %c           %d",
           arr[i].letra,
           arr[i].repeticion);
    printf("            %c           %d\n", 
           arr[i+1].letra, 
           arr[i].repeticion);
  }
}


void
sort (struct frecuencia arr[]) {
  
}
