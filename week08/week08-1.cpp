///week08-1.cpp 泡泡排序法 Bubble Sort
#include <stdio.h>
int main()
{
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    for(int k=0;k<9;k++){///對大的9個數字都找到，就完成
        for(int i=0;i<9;i++){
            if(a[i]>a[i+1]){///10個仁，兩兩相比9次
                int temp=a[i];///大小不對，就交換
                a[i]=a[i+1];///老師上課用兩杯水交換
                a[i+1]=temp;///有押韻
            }
        }
        for(int i=0;i<10;i++)printf("%d ",a[i]);
        printf("\n");
    }
}
