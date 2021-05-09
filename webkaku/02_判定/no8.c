/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した数値が回文数かどうかを判定 -
 */

#include<stdio.h>

int main()
{
    int num;

    int reverse = 0;
    int remaind;
    int tmp;

    printf("整数を入力してください ＝ ");
    scanf("%d", &num);

    tmp = num;
    while (tmp != 0){
        remaind = tmp % 10;
        reverse = reverse * 10 + remaind;
        tmp /= 10;
    }

    if (reverse == num)
        printf("「%d」は回文数です。\n", num);
    else
        printf("「%d」は回文数ではありません。\n", num);

    return 0;
}