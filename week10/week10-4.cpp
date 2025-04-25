//week10-4.cpp
///LeetCode 1399. Count Largest Group
class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};
        int largest = 0;
        for (int i = 1; i <= n; i++) {//1..n摸癹伴
            int now = i;//瞷璶ブ计
            int total = 0;
            while (now > 0) {
                total += now % 10;//ブ now % 10 р–计,toatl柑
                now = now / 10;//ブ,now跑
            }
            a[total]++;//癹伴,璶参璸total瞷Ω计
            if (a[total] > largest) {
                largest = a[total];
            }
        }
        int ans = 0;
        for (int i = 0; i < 100; i++) {
            if (a[i] == largest) {//狦a[i]琌程计ê竤,碞竤
                ans++;
            }
        }
        return ans;
    }
};
