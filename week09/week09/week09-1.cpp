///week09-1.cpp
///LeetCode 38. Count and Say �Ʀr�s��X�{,�N��RLE �u�s�X�v���u�Ʀr+�r���v���Φ�
class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";//��²�檺CASE,�p�G�O1�N�^��"1"
        string prev = countAndSay(n-1);//�禡�I�s�禡
        string ans = "";
        char prevC = prev[0];//�e�@�Ӧr��
        int prevN = 1;//�e�@�Ӧr���A�ֿn�X�{�X��
        for(int i=1; i<prev.length();i++){
            if(prevC == prev[i])prevN++;//�ۦP�A�N+1
            else{//�r�����ۦP��
                ans += string(to_string(prevN)) + prevC;//�X�{�X�� + ���Ӧr��(�e�X���e�ֿn���r��)
                prevC = prev[i];//�s���r��
                prevN = 1;//�q1�}�l(�s���r���A��1��)
            }
        }
        ans += string(to_string(prevN)) + prevC;//�̫�@���A�]�n�e�X�h
        return ans;
    }
};
