#include<stdio.h>
int check(int a){
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
int main(){
    int a=3;
    check(a);
}
