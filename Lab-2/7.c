#include <stdio.h>


int max(int num1, int num2);
int min(int num1, int num2);



int main() 
{
    int num1, num2, maximum, minimum;
    
    printf("**Program for maximum and minimum between two numbers**\n");
    printf("Name-Poonam, Class-MCA1A, Roll-34\n");
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2);  
    minimum = min(num1, num2);  
    
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    
    return 0;
}



int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}


int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
