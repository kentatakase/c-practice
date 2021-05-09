/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した2つの数値の掛け算と割り算 -
 */
#include <stdio.h>

int main(void)
{

    float x, y;

    /* 2つ整数を入力 */
    printf("1つ目の数値: x = ");
    scanf("%f", &x);
    printf("2つ目の数値: y = ");
    scanf("%f", &y);

    /* 掛け算の計算・出力 */
    printf("x * y = %.3f\n", x * y);

    /* 割り算の計算・出力 */
    printf("x / y = %.3f\n", x / y);

    return 0;
}
