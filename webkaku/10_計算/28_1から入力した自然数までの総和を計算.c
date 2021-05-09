
/*
 * C言語のサンプルプログラム - Webkaru
 * - 1から入力した自然数の総和を計算 
 */
#include <stdio.h>

int main(void)
{
    int i;
    int num=0;
    int sum = 0;

    while(num==0){
        printf("自然数を入力してください = ");
        scanf("%d", &num);
        if (num < 1){
        printf("自然数は０より多い正の整数です。 \n");
        printf("1,2,3, ...みたいな数です。 \n");
        printf("もう一度、数を入力しましょう。 \n\n");
        num = 0;
        }
    }

    for(i=1;i<=num;++i){
            sum = sum + i;
    }

    printf("総和 = %d\n", sum);
    

    return 0;

}