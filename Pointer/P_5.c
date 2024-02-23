#include<stdio.h>

void main(){
    int n,rem,rev=0,*pn,*pr;
    printf("Enter the Number:");
    scanf("%d",&n);
    pn=&n;
    pr=&rev;
    while (*pn>0)
    {
        rem=(*pn)%10;
        *pr=(*pr*10)+rem;
        *pn=(*pn)/10;
    }
    printf("\n Reverse is :%d",*pr);
    
}