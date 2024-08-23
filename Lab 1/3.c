\\Print sum of individual digits of a given positive number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0;
    printf("enter a +ve integer"); // enter a integer value
    scanf("%d",&n);
    while(n>0)  // checks the condition
    {
        sum=sum+n%10;   // sum + remainder value
        n=n/10;

    }
    printf("sum of individual digits of a positive integer is %d",sum);  // prints the sum of individual digits
}
