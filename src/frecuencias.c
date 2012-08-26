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
  char may;
  int i;
  for (i = 0; i < TAMANO; i++) {
    aux = ALFABETO[i];
	may = ALFABETOMAYUS[i];
    if (aux == caracter || may == caracter) {
      arr[i].repeticion += 1;
      break;
    }
  }
}


void
imprime_lista_de_frecuencias(struct frecuencia arr[]) {
  int i;
  printf("Letra     Frecuencia\n");
  for (i = 0; i < TAMANO; i++) {
    /* printf("Letra: %c   Frecuencia: %d   |",
           arr[i].letra, arr[i].repeticion);
    printf("Letra: %c   Frecuencia: %d   |\n",
    arr[i+1].letra, arr[i+1].repeticion);
    printf("  %c           %d",
           arr[i].letra,
           arr[i].repeticion);
    printf("            %c           %d\n", 
           arr[i+1].letra, 
           arr[i].repeticion);*/
    printf("  %c          %d\n", arr[i].letra,arr[i].repeticion);
  }
}

//
void
swapFunction(struct frecuencia arr[], int posicionA, int posicionB) {
    struct frecuencia aux;
    aux = arr[posicionA];
    arr[posicionA].letra = arr[posicionB].letra;
    arr[posicionA].repeticion = arr[posicionB].repeticion;
    arr[posicionB].letra = aux.letra;
    arr[posicionB].repeticion = aux.repeticion;
}

void
selectionsort (struct frecuencia arr[]) {
  int d,c;
  int position;
  int swap;
  for (c=0; c < TAMANO-1; c++) {
    position = c;
    for (d = c+1; d< TAMANO; d++) {
      if (arr[d].repeticion > arr[position].repeticion) {
	position = d;
      }//end if
    }
    if (position != c) {
       swapFunction(arr, c, position);
      /*swap = arr[c].repeticion;
      arr[c].repeticion = arr[position].repeticion;
      arr[position].repeticion = swap;*/
    }
  }
}
