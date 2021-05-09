#include<stdio.h>

int main(void)
{
    char moji;
    
    printf("文字を入力しなさい");
    scanf("%c", &moji);

    if(moji >= 'A' && moji <= 'Z'){
        printf("英大文字です");
    }
    else if(moji >= 'a' && moji <= 'z'){
        printf("英小文字です");
    }
    else if(moji >= '1' && moji<= '9'){
        printf("数字です");
    }
    else{
        printf("英字でも数字でもありません");
    }

    return 0;

}