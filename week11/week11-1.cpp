///week11-1.cpp
///�禡/��� function
#include <stdio.h>
///�e�� �w�q �禡
///�e�X�Ӫ��Oint���
///  �e�i�h���a,���b
int addnum(int a,int b)
{
    printf("�b�禡addnum()��,�o��Ѽ�a:%d b:%d\n", a, b);
    int ans = a+b;
    printf("��X���� %d �nreturn �X�ӳ�\n", a,b);
    return ans;///���X�����G�ǥX�h
}
int main()
{///�D�n���禡�B�D�{��
    printf("�bmain()�I�s�ϥ� addnum() \n");
    int ans = addnum(2,3);
    printf("�o�쵪��:%d\n",ans);

}
