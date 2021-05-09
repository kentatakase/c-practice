#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/**/
void main(void)
{
    int i,j,val[10];
    char str[32],*ch;

    /*キーボードから入力する*/
    fgets(str,sizeof(str),stdin);

    /*キーボードから入力した変数str”,”で区切り、その先頭の単語をアドレス値”ch”に代入する*/
    ch = strtok(str,",\n");

    /*
    iが１０になるまでforループを回す。forループの流れは下記の通り
    chに変数が格納されているか確認する。入っている場合のみ、chの文字列を数値に変換し、数列valのi番目に代入する
    strの次の文字列をchに代入する
    */
    for (i = 0; i < 10; i++)
        {
            /*chに数値が入っていない場合、ループを終了する*/
            if (ch == NULL)
            {
                break;
            }
            /*chに値がある場合、chの文字列を数値に変換し、数列valのi番目に代入する*/
            else
            {
                val[i] = atoi(ch);
            }
            /*chに格納されている”str”の、次の値をchに代入する*/
            ch = strtok(NULL, ",\n");
        }

        /*数列valの値を一つずつ表示する*/
    for (j = 0; j < i; j++)
        printf("%d\n", val[j]);

    return;
    }