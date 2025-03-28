///week06_4b
//從week06_4a延伸過來，利用 for(int k=i;k<N-1;k++)回收飼料
void setup(){
    size(600,400);
}
float[] x = new float[100];
float[] y = new float[100];
int N = 0;
void draw(){
  background( #c0ffee ); //咖啡青色 0 不是o
  for(int i=0; i< N;i++){
    ellipse(x[i],y[i],8,8);
    y[i] +=2;
    if(y[i]>400){///飼料掉到外面看不到
      for(int k=i;k<N-1; k++){//要回收
        x[k] = x[k+1];//右邊搬到左邊
        y[k] = y[k+1];
     }
     N--;//回收1顆飼料
    }
    println(N);//把N在小黑印出來
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
