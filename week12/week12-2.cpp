///week12-2.cpp
///Fibonacci �ƦC �O�ƻ�?
/// 1 1 2 3 5 8 13 21 34 �аݤU�@���O����?
///�e�ⶵ�ۥ[
#include <stdio.h>
int main()
{///�}�C���ŧi,�k�䦳������,�S�g��,����0
    int a[30] = {0, 1};///�̭��񵪮�
    printf("1 ");///���L�X�Ĥ@��
    for(int i=2; i<30; i++){
        a[i] = a[i-1] + a[i-2];
        printf("%d ", a[i]);
    }
}
