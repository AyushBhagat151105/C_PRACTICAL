#include<stdio.h>

void main(){
    int a,b,sum, *p1, *p2, *p3;
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    p3=&sum;
    printf("The sum id %d",*p3);
}