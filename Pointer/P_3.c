#include<stdio.h>

void main(){
    int n1,n2;
    int *p1,*p2;
    printf("Enter the First Number:");
    scanf("%d",&n1);
    scanf("Enter the secound Number:");
    scanf("%d",&n2);
    p1=&n1;
    p2=&n2;
    if(*p1>*p2){
        printf("P1 is larger");
    }else{
        printf("p2 is larger");
    }
}