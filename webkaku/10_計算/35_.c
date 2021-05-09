/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した5教科の合計点と平均点を計算 -
 */
#include <stdio.h>

int main(void)
{

    int a, b, c, d, e, sum;
    float ave;

    /* 点数の入力 */
    printf("国語 = ");
    scanf("%d", &a);
    printf("数学 = ");
    scanf("%d", &b);
    printf("英語 = ");
    scanf("%d", &c);
    printf("理科 = ");
    scanf("%d", &d);
    printf("社会 = ");
    scanf("%d", &e);

    /* 合計点の計算と表示 */
    sum = a + b + c + d + e;
    printf("合計点 = %d\n", sum);

    /* 平均点の計算と表示 */
    ave = sum / 5.0;
    printf("平均点 = %.1f\n", ave);

    return 0;
}
