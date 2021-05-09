/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した2つの数値を交換 -
 */
#include <stdio.h>

int main(void)
{
    int a, b, tmp;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    tmp = b;
    b = a;
    a = tmp;

    printf("==== After ====\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}