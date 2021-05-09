/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した自然数の約数を求める -
 */
#include <stdio.h>

int main()
{
    int i;

    int num;

    printf("自然数を入力してください。 = ");
    scanf("%d", &num);

    printf("「%d」の約数は ", num);
    for(i=1;i<=num; ++i){
        if(num % i == 0)
            printf("%d ",i);
    }
    printf("です。 \n");

    return 0;
}