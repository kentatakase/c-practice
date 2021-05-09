/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した2つの自然数の間の素数を表示 -
 */
#include <stdio.h>

int main()
{
    int i, j;

    int num1, num2;

    int flag;

    printf("2つの自然数を入力してください。\n");
    printf("1つの自然数（小さい方） = ");
    scanf("%d", &num1);
    printf("1つの自然数（大きい方） = ");
    scanf("%d", &num2);

    printf("\n◆ %d から %d までの素数 ◆\n", num1, num2);

    for(i = num1;i<=num2;++i){
        flag = 0;
        for(j = 2;j<i;++j){
            if(i%j==0){
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i != 1)
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}