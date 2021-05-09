#include<stdio.h>

int main(void)
{
    int wa = 0;
    for(int i = 0;i<=100;++i){
        wa = wa + i;
        }
    printf("総和 = %d\n", wa);

    printf("a[]=");

    int a[5];
    
    for(int i=0;i<5;i++){
        a[i] = i * 2;
        printf("%d ", a[i]);
    }

    int i = 100;
    int amari;

    for(i=100;i>=1;--i){
        amari = 100 % i;
        if(amari == 0){
            printf("１００は%dで割り切れる\n", i);
        }
    }

    return 0;



    
}