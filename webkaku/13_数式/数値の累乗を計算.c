/*
 * C言語のサンプルプログラム - Webkaru
 * - 数値の累乗を計算 -
 */
#include <stdio.h>

int main(void)
{
    int base;

    int exponent, i;

    int answer = 1;

    printf("底 = ");
    scanf("%d", &base);    

    printf("指数 = ");
    scanf("%d", &exponent);
    i = exponent;

    while(i!=0){
        answer = answer * base;
        --i;
    }

    printf("%d の %d 乗 = %d\n", base, exponent, answer);

    return 0;

}