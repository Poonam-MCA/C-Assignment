\\Print given number is armstrong number or not
#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("***Program for armstrong no or not\n");
    printf("Name Poonam, Class MCA1A, Roll 34\n:");
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r= n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("armstrong number" );
    else
        printf("not armstrong number");
        return 0;
    
}
