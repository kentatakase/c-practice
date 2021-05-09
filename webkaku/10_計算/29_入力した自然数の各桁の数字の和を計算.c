/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した自然数の各桁の数字の和を計算 -
 */
#include <stdio.h>

int main()
{
    int num;
    int dig;
    int sum = 0;

    printf("自然数を入力してください = ");
    scanf("%d", &num);

    while(num){
        dig = num %10;
        sum = sum + dig;
        num = num / 10;
    }

    printf("自然数の各桁の数字の和 = %d\n", sum);

    return 0;
}