#include <stdio.h>
#include "conjunto.h"


int main(){
        CONJUNTO c, d, e;
        c= conjunto_vacio();
        d= conjunto_vacio();
        e= conjunto_vacio();
        print_conjunto(c);
        print_conjunto(d);
        print_conjunto(e);
        printf("El conjunto c está vacío %d\n", es_vacio(c));
        c= agregar (c,2);
        c= agregar (c,3);
        c= agregar (c,19);
        c= agregar (c,11);
        c= agregar (c,15);

        d= agregar (d, 12);
        d= agregar (d, 22);
        d= agregar (d, 32);
        d= agregar (d, 2);

        e= union_ (c,d);
        print_conjunto(e);
        return 0;
}
