#include "math_func.h"
#include <stdio.h>

//logic of operations

double sum (double a, double b) {
    return a + b;
}

double diff (double a, double b) {
    return a - b;
}

double mult (double a, double b) {
    return a * b;
}

double div (double a, double b) {
    return a / b;
}

// logic of output

void smart_out (double a, double b, char operator) {
    if (operator == '+') {
        printf("%lf + %lf = %.2f\n", a, b, sum(a,b));
    } else if (operator == '-') {
        printf("%lf - %lf == %.2f\n", a, b, diff(a,b));
    } else if (operator == '*') {
        printf("%lf * %lf = %.2f\n", a, b, mult(a,b));
    } else if (operator == '/') {
        printf("%lf / %lf = %.2f\n", a, b, div(a,b));
    }
}

void error_input (char ReasonError[]) {
    printf("Error input (%s)\n", ReasonError);
}