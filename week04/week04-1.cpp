//week04-1.cpp
//LeetCode 2529. Maximum Count of Positive Integer and Negative Integer
class Solution {
public:
    int maximumCount(vector<int>& nums){
        int pos = 0,neg = 0;
        for (int i = 0; i < nums.size(); i++) {
            if( nums[i] > 0) pos++;//����+
            if( nums[i] < 0) neg++;//�t��+
        }
        if(pos > neg)return pos;//���Ƥ���j �e�X
        else return neg;//���M�N�t�Ƹ��j �e�X
    }
};
