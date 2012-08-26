#include <stdio.h>
#include <stdlib.h>
#include "frecuencias.h"

struct frecuencia arreglo_de_letras[TAMANO];

int main(int argc, char *argv[]) {
  
  FILE* archivo = leer_archivo(argv[1]);
  if (archivo == NULL) {
    printf("Hubo un problema al abrir el archivo");
    printf(" %s\n", argv[argc-1]);
    return 1;
  } else {
    printf("se accedio al documento %s\n", argv[1]);
  }
  crea_arreglo_frecuencia(arreglo_de_letras);
  explorar_texto(archivo, arreglo_de_letras);
  selectionsort(arreglo_de_letras);
  imprime_lista_de_frecuencias(arreglo_de_letras);

  return EXIT_SUCCESS;
}
