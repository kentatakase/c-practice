/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力した文字列の文字数を表示（出力） -
 */
#include <stdio.h>

int main()
{
    int i;

    char moji[100];

    printf("文字列を入力してください = ");
    scanf("%s", moji);

    for(i=0; moji[i]!='\0'; ++i);

    printf("入力した文字は「%d」です。 \n",i);

    return 0;
}