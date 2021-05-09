/*
 * C言語のサンプルプログラム - Webkaru
 * - 1から1000までの素数を表示 -
 */
#include <stdio.h>

int main()
{
    int i, j;

    int flag;

    for(i=2;i<=1000;++i){
        flag = 0;
        for(j=2;j<i;++j){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag==0)
        printf("%d ", i);
    }
    
    return 0;
}

