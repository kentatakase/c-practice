/*
 * C言語のサンプルプログラム - Webkaru
 * - 3つの数値から一番大きい数値を探す -
 */
#include <stdio.h>

int main(void)
{

    float a, b, c;

    printf("異なる３つの数値を入力してください。\n");

    printf("1つ目の数値: a = ");
    scanf("%f", &a);
    printf("2つ目の数値: b = ");
    scanf("%f", &b);
    printf("3つ目の数値: c = ");
    scanf("%f", &c);

    if(a>b && a>c)
        printf("一番大きい数値：a = %.2f\n", a);
    if (b > a && b > c)
        printf("一番大きい数値：b = %.2f\n", b);
    if (c > a && c > b)
        printf("一番大きい数値：c = %.2f\n", c);

    return 0;
}