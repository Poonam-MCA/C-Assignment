\\Print sum and average of three numbers
#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float avg;
    printf("program for sum avg three mo:\n");
    printf("***Name Poonam, class MCA1A, Roll 34***\n");
    printf("Enter the three no:\n");
    scanf("%d%d%d",&a, &b, &c);
    sum = a + b + c;
    avg=(a + b + c )/3;
    printf("sum is %d",sum);
    printf("avg is %f", avg);
    return 0;

    
}
