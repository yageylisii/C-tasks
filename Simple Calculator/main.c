#include <stdio.h>
#include "math_func.h"

int main () {
    
    double a,b;
    char operator;
    
    scanf("%lf %c %lf", &a, &operator, &b);

    smart_out(a, b, operator);
    

    return 0;

}