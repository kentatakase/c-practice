/*
 * C言語のサンプルプログラム - Webkaru
 * - 九九の計算 -
 */
#include <stdio.h>

int main(void){
    int i, j;

    for(i=1;i<10;++i){
        for(j=1;j<10;++j){
            if(j==1)
              printf("%dの段:", i);
            if(j==9)
              printf("%3d\n", i*j);
            else
              printf("%3d", i*j);
        }
    }
    return 0;
}