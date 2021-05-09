/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した数値が完全数かどうかを判定 -
 */
#include <stdio.h>

int main(void)
{
    int i, amari;
    int num;
    int sum = 0;

    printf("自然数を入力してください = ");
    scanf("%d", &num);

    for(i=1; i<num; ++i){
        if( (num % i) == 0)
        sum += i;
    }

    if(num == sum)
        printf("%d は完全数です！\n", num);
    else
        printf("%d は完全数ではありません！\n", num);
    return 0;

}