///week17_4_zongzi_part4
///修改自 week17_3_zongzi_part3
PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png");
}
float []x = new float[100];
float []y = new float[100];
int N = 0;
void draw(){
  background(204);
  imageMode(CENTER);
  for(int i = 0; i < N; i++){
    if(x[i] > 0){
      image(zongzi, x[i], y[i], 100, 100);
      y[i]++;
      if(y[i] > 500){
        for(int k = i + 1; k < N; k++){
          x[k - 1] = x[k];
          y[k - 1] = y[k];
        }
        N--;
      }
    }
  }
  println(N);
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
