/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した5教科の最高点と最低点を表示 -
 */
#include <stdio.h>

int main(void)
{

    int i;
    int a[5];
    int max, min;

    /* 点数の入力 */
    printf("国語 = ");
    scanf("%d", &a[0]);
    printf("数学 = ");
    scanf("%d", &a[1]);
    printf("英語 = ");
    scanf("%d", &a[2]);
    printf("理科 = ");
    scanf("%d", &a[3]);
    printf("社会 = ");
    scanf("%d", &a[4]);

    max = min = a[0];
    for(i=1;i<5;++i){
        if(max < a[i])
            max = a[i];
        if(min > a[i])
            min = a[i];
    }

    printf("最高点 = %d\n", max);
    printf("最低点 = %d\n", min);

    return 0;
}

