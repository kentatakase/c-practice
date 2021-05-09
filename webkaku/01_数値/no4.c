/*
 * C言語のサンプルプログラム - Webkaru
 * - アルファベットの連続（A to Z）と数字（0 to 9）の連番を出力 -
 */

#include<stdio.h>

int main()
{
    char moji;

    for(moji = 'A'; moji <='Z'; ++moji)
        printf("%c", moji);

    printf("\n");

    for (moji = 'a'; moji <= 'z'; ++moji)
        printf("%c", moji);

    printf("\n");

    for(moji ='0'; moji<='9'; ++moji)
        printf("%c", moji);

    printf("\n");

    return 0;
}