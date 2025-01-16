#include <stdio.h>
#include <stdlib.h>
struct company
{
    char name[20],address[50];
    int phone,noOfEmployee;
};

int main(){
   
    struct company C1;
    printf("enter the details of the company");
    scanf("%s%s%d%d",C1.name,C1.address,&C1.phone,&C1.noOfEmployee);
    printf("Details of the company");
    printf("company name=%s \n company address=%s \n company phone=%d \n company noOfEmployee=%d ",C1.name,C1.address,C1.phone,C1.noOfEmployee);
}
