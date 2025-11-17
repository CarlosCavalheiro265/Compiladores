#include <stdio.h>

#include "soma.h"
#include "subtrai.h"

#include "multiplica.h"
#include "divisao.h"
#include "fatorial.h"
#include "potencia.h"


int main() {

    int a = 10, b = 3;

    printf("soma(%d, %d) = %d\n", a, b, soma(a, b));
    printf("subtrai(%d, %d) = %d\n", a, b, subtrai(a, b));
    
    printf("multiplica(%d, %d) = %d\n", a, b, multiplica(a, b));
    printf("divisao(%d, %d) = %d\n", a, b, divisao(a, b));
    printf("potencia(%d, %d) = %d\n", a, b, potencia(a, b));
    printf("fatorial(%d) = %d\n", b, fatorial(b));

    return 0;
}