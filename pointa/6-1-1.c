#include<stdio.h>

int main(void)
{
    int a, b;
    printf("整数値を二つ入力");
    scanf("%d", &a);
    scanf("%d", &b);
    
    if(a > 10){
        printf("aは10より大きい\n");
    }
    else{
        printf("aは10以下\n");
    }

    if(a == b){
        printf("a とbは等しい\n");
    }
    
    if(b >= 10){
        printf("b は10以上\n");
        a = 0;
        b = 0;
    }
    else{
        printf("bは10より小さい\n");
        a = a + 1;
        b = b + 1;
    }

    printf("a = %d  b = %d\n", a, b);

    return 0;
}