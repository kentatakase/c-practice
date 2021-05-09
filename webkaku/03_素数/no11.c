/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した数値（自然数）が素数かどうかを判定 -
 */
#include <stdio.h>

int main()
{
    int i;

    int number;

    int flag = 0;

    printf("自然数 = ");
    scanf("%d", &number);

    for(i = 2;i<number;++i){
        if (number % i == 0){
            flag = 1;
            break;
        }
    }

    if (flag==0)
    printf("%dは素数です\n", number);
    else
        printf("%dは素数ではありません\n", number);
    return 0;
}