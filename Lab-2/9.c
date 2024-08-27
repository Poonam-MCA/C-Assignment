#include<stdio.h>
#include <math.h>
int prime(int n){
    int i,sum=0,pri=0;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            pri=1;
            break;
        }
        else{
            pri=0;
            break;
        }
    }
    return(pri==0);
    
}
int armstrong(int n) 
{
    int lastDigit, sum, originalNum, digits;
    sum = 0;
    
    originalNum = n;

    /* Find total digits in num */
    digits = (int) log10(n) + 1;

    /*
     * Calculate sum of power of digits
     */
    while(n > 0)
    {
       
        lastDigit = n % 10;

       
        sum = sum + round(pow(lastDigit, digits));

       
        n = n / 10;
    }
    
    return (originalNum == sum);
}
int perfect(int n) 
{
    int i, sum, temp;
    sum = 0;
    temp = n;
    
    for(i=1; i<temp; i++)  
    {  
        /* If i is a divisor of num */  
        if(temp%i == 0)  
        {  
            sum += i;  
        }  
    }
    
    return (n == sum);
}

int main(){
    int n=11;
    if(prime(n)){
        printf("It is a prime\n");
    }
    else{
        printf("It is not a prime number\n ");
    }
    if(armstrong(n)){
        printf("It is a armstrong number\n");
    }
    else{
        printf("It is not a armstrong number\n ");
    }
    
     
    

    if(perfect(n))
    {
        printf("Perfect number.\n");
    }
    else
    {
        printf("is not Perfect number.\n");
    }
    
    return 0;
    
    
    
    
    
    
    
    
}
