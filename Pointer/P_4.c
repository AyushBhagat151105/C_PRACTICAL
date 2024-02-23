#include<stdio.h>

void main(){
    int a,b,*p1,*p2,*p3;
    printf("A:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    p1=&a;
    p2=&b;
    printf("The address of: \n A:%u\n B: %u\n",p1,p2);
    p3=p1;
    p1=p2;
    p2=p3;
    printf("\n the Changed value is \nA:%u\nB:%u\n",*p1,*p2);
}