/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した整数が正か負かを判定 -
 */

#include <stdio.h>

int main(void)
{
    int number;

    printf("整数を入力 = ");
    scanf("%d", &number);

    if (number > 0)
    printf("%d は正です。\n", number);

    else if(number == 0)
    printf("%d は正・負どちらでもありません。\n", number);

    else
    printf("%dは負です。　\n", number);

    return 0;
}