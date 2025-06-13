///week17_2_zongzi_part2
///修改自 week_17_1_zongzi_part1
PImage zongzi;
void setup(){
  size(500,500);
  zongzi = loadImage("zongzi.png");
}
float x,y;
void draw(){
  background(204);//204灰色
  imageMode(CENTER);
  if(x>0){
    image(zongzi, X, Y, 100, 100);
    y++;
  }
}
void mousePressed(){
  x = mouseX;
  y = mouseY;
}
