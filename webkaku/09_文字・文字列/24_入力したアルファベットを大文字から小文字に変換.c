
/*
 * C言語のサンプルプログラム - Webkaru
 * - 入力したアルファベットを大文字から小文字に変換 -
 */
#include <stdio.h>
#include <string.h>

int main(void){
    int i;

    char str[100];

    printf("文字列（英数字）を入力 = ");
    scanf("%s", str);

    for(i=0;i<=strlen(str);i++){
        if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
    }

    printf("変換した文字列 = %s\n", str);

    return 0;
}