#include <stdio.h>

enum Example { ALPHA, BETA, GAMMA = 5, DELTA, EPSILON = 10, ZETA };

int main() {
    printf("ALPHA = %d\n", ALPHA);     
    printf("BETA = %d\n", BETA);       
    printf("GAMMA = %d\n", GAMMA);     
    printf("DELTA = %d\n", DELTA);     
    printf("EPSILON = %d\n", EPSILON); 
    printf("ZETA = %d\n", ZETA);       

    return 0;
}

