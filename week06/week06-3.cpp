//week06-3.cpp
//leetcode 1780. Check if Number is a Sum of Powers of Three
//�D�جݦ����A���{����²��A�u�nwhile(�j��)if(�P�_)�N�n�F
class Solution {
public:
        bool checkPowersOfThree(int n) {
        while(n>0){//�u�nn�٦��Ʀr,�N���,�鱼3������//n%3 �K�ѤU??��1�ܦn�A��0�ܦn�A����2�N���n
        if(n%3==2)return false;
        n = n / 3;// �鱼3������
        }
        return true;
    }
};
