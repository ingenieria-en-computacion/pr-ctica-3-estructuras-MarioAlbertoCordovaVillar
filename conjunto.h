#ifndef __CONJUNTO_H__
#define ifindef__CONJUNTO_H__
#define TAM 1000
#include <stdbool.h>

typedef int DATO;

typedef struct Conjunto{
    DATO datos[TAM];
    short car;
} CONJUNTO; //de una vez se pone el tipo y su alias

CONJUNTO conjunto_vacio();
CONJUNTO agregar (CONJUNTO, DATO);
bool pertenece (CONJUNTO, DATO);
CONJUNTO quitar (CONJUNTO, DATO);
bool es_vacio (CONJUNTO);
int cardinal(CONJUNTO);
CONJUNTO union_(CONJUNTO c, CONJUNTO d);
void print_conjunto(CONJUNTO);
#endif
