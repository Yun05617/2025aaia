///week12-2.cpp
///Fibonacci 數列 是甚麼?
/// 1 1 2 3 5 8 13 21 34 請問下一項是什麼?
///前兩項相加
#include <stdio.h>
int main()
{///陣列的宣告,右邊有它的值,沒寫的,都放0
    int a[30] = {0, 1};///裡面放答案
    printf("1 ");///先印出第一項
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i]);
    }
}
