#include<stdio.h>

void main(){
    int n, *p;
    printf("Enter the No:");
    scanf("%d",&n);
    p=&n;
    printf("\n Address is: %u \n",p);
    printf("\n value is: %d\n",*p);
}