#include <stdio.h>  
void swap(int , int);
int main() 
{  
    int a = 10;  
    int b = 20; 
    printf("**Program for swap two numbers passing arguments to a function\n**");
    printf("Name-Poonam, Class-MCA1A,Roll-34\n") ; 
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); 
    printf("After swapping values in main a = %d, b = %d\n",a,b); 
}  
void swap (int a, int b)  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",a,b); 
}  
