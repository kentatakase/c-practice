#include<stdio.h>

int main(void)
{
    char kamoku;
    int ten;

    printf("科目を入力してください");
    scanf("%c", &kamoku);
    printf("点数を入力してください");
    scanf("%d", &ten);

    if(kamoku == 'k'){
        if(ten >= 73 && ten <= 100){
            printf("国語の点数は平均点以上です");
        }
        else if(ten >= 0 && ten< 73){
            printf("国語の点数は平均未満です");
        }
        else{
            printf("点数の入力エラーです");
        }       
    }
    else if(kamoku == 's'){
        if (ten >= 61 && ten <= 100)
        {
            printf("数学の点数は平均点以上です");
        }
        else if (ten >= 0 && ten < 61)
        {
            printf("数学の点数は平均未満です");
        }
        else
        {
            printf("点数の入力エラーです");
        }
    }
    else{
        printf("科目の入力エラ＝です");
    }
    
    return 0;
}