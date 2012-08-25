#include <stdio.h>
#include <stdlib.h>
#include "frecuencias.h"

struct frecuencia arreglo_de_letras[TAMANO];

int main(int argc, char *argv[]) {
  
  printf("estos son los argumentos %s\n", argv[argc-1]);
  printf("%s\n", ALFABETO);
  printf("el car en la %d posicion es %c\n",0,ALFABETO[0]);

  crea_arreglo_frecuencia(arreglo_de_letras);
  int i;
  for (i = 0; i < TAMANO; i++) {
    printf("La estructura tiene: letra %c y rep %d\n",arreglo_de_letras[i].letra, arreglo_de_letras[i].repeticion);
  }

  return EXIT_SUCCESS;
}
