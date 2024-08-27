#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main() {

    int num1, num2;
    int sum, difference, product, quotient;

    printf("**Program for add,subtract,multiply,divde two integers**\n");
    printf("Name-Poonam, Class-MCA1A, Roll-34\n");
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

   
    sum = add(num1, num2);
    difference = subtract(num1, num2);
    product = multiply(num1, num2);
    
    if (num2 != 0) {
        quotient = divide(num1, num2);
    } else {
        printf("Error: Division by zero!\n");
        return 1; 
    }

    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);

    return 0;
}


int add(int a, int b) {
    return a + b;
}


int subtract(int a, int b) {
    return a - b;
}


int multiply(int a, int b) {
    return a * b;
}


int divide(int a, int b) {
    return a / b;
}
