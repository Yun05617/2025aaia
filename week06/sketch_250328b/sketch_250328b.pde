///week06_4a_array_x_y_int_N_for_mousePressed
//
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
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
