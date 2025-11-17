#include "fatorial.h"

int fatorial(int n) {
    if (n < 0) {
        return 0;
    }
    int fat = 1;

    for (int i = n; i > 1; i--) {
        fat = fat*i;
    }

    return fat;
}