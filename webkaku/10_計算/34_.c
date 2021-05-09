/*
 * C言語のサンプルプログラム - Webkaru
 * - 割合・百分率（％）の計算 -
 */
#include <stdio.h>

int main(void)
{

    float number, amount, rate, percent;

    /* くらべる数・もとの数を入力 */
    printf("くらべる数 = ");
    scanf("%f", &number);
    printf("もとの数 = ");
    scanf("%f", &amount);

    /* 割合を計算・出力 */
    rate = number / amount;
    printf("割合 = %.2f\n", rate);

    /* 百分率を計算・出力 */
    percent = rate * 100;
    printf("百分率 = %.2f ％\n", percent);

    return 0;
}
