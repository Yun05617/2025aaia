PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png");
}
float x,y;
void draw(){
  background(204);//204灰色
  imageMode(CENTER);
  image(zongzi, x, y, 100, 100);
}
