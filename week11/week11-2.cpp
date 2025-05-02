///week11-2.cpp
///為了解決 SOIT107_ADVANCE_009這題
///我們稍微複習「剝皮法」
#include<stdio.h>

int main()
{
    printf("請輸入1個數(ex. 183) ");
    int n;
    scanf("%d",&n);//讀入n
    int ans = 0;///想找到「最大的皮」
    while(n>0){
        if(n%10>ans)ans = n%10;//最大的皮,
        printf("剝皮 %d\n", n%10);
        n = n / 10;///剝完皮,n變小
    }
    printf("最大的皮是%d\n",ans);
}
