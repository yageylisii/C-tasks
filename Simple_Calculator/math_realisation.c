#include "math_func.h"
#include <stdio.h>

//operation logic

double sum(double a, double b){ return a + b; }
double diff(double a, double b){ return a - b; }
double mult(double a, double b){ return a * b; }
double divide(double a, double b) { return a / b; }

// logic of output

void smart_out (double a, double b, char operator) {
    if (operator == '+') {
        printf("%.6g + %.6g = %.6g\n", a, b, sum(a,b));
    } else if (operator == '-') {
        printf("%.6g + %.6g = %.6g\n", a, b, diff(a,b));
    } else if (operator == '*') {
        printf("%.6g + %.6g = %.6g\n", a, b, mult(a,b));
    } else if (operator == '/') {
        if (b == 0){
           printf("Error: Division by Zero\n");
        } else {
            printf("%.6g + %.6g = %.6g\n", a, b, divide(a,b));
        }    
        
    } else {
        printf("What is it?\n");
    }
}