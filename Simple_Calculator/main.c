#include <stdio.h>
#include "math_func.h"

int main () {
    
    double a = 0, b = 0;
    char operator = 0;

    printf("Enter...\n");

    int check = scanf("%lf %c %lf", &a, &operator, &b);
    if (check != 3) {
        printf("Invalid Input\n");
        return -1;
    }
    smart_out(a, b, operator);

    return 0;

}