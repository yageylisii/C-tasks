#include <stdio.h>
#include "math_func.h"

int main () {
    double a,b;
    char operator;
    
    scanf("%lf %c %lf", &a, &operator, &b);

    if (operator == '+') {
        smart_out(a,b, operator);
    } else if (operator == '-') {
        smart_out(a,b, operator);
    } else if (operator == '*') {
        smart_out(a,b, operator);
    } else if (operator == '/') {
        if (b == 0) {
            error_input("Division by zero");
        } else {smart_out(a,b, operator);}
        
    
    } else {
        error_input("What is it?");
    }
    

    //return 0;

}