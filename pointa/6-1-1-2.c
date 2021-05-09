#include<stdio.h>

int main(void)
{
    char ch;

    printf("文字を入力してください");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <='Z'){
        ch = ch + ('a' - 'A');
    }
    printf("ch = %c\n", ch);

    return 0;
}