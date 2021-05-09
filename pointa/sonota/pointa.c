#include<stdio.h>

int main(void){
    int num = 1; //int型変数
    int *p_num; //int型ポインタ変数
    p_num = &num; //ポインタ変数p_numに変数numアドレスを代入

    printf("int型の変数numの値:%d\n", num);
    printf("int型のポインタ変数p_num%p_n", p_num);
    
    return 0;
}

