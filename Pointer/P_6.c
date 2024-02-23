#include<stdio.h>

void main(){
    int n[3],i;
    int *p[3];
    for(i=0;i<3;i++){
        printf("\n Enter any Number:");
        scanf("%d",&n[i]);
        p[i]=&n[i];
    }
    for (i = 0; i < 3; i++)
    {
        printf("Value %d\n",*p[i]);
        printf("Address %u\n",p[i]);
    }
    
}