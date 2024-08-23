\\Print prime numbers between 1 to n
#include<stdio.h>
int main()
{
    int num ,n ,i ,count;
    printf("***program for prime numbers 1 to n***\n");
    printf("Name Poonam,Class MCA1A, Roll 34\n");
    printf("Enter the range: ");
    scanf("%d",&n);
    printf("the prime number in between the range 1 to %d: ",n);
    for(num = 1;num<=n;num++){
    count = 0;
     for(i=2;i<=num/2;i++){
        if(num%i==0){
            count++;
            break;
        }
     }
     if(count==0 && num!= 1)
     printf("%d",num);
    

}
return 0;
}
