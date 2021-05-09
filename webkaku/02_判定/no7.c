/*
 * C言語のサンプルプログラム - Webkaru
 * - if文 - 
 * - 入力した2つの整数が同じかどうかを判定 -
 */

#include <stdio.h>

int main(void)
{

    int a, b;

    printf("一つ目の整数を入力してください；a = ");
    scanf("%d", &a);
    printf("2つ目の整数を入力してください；b = ");
    scanf("%d", &b);

    if(a == b)
    printf("同じ\n");
    else
    printf("違う\n");
    return 0;
}