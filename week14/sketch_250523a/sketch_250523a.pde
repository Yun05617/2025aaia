///week14_5_sound
//安裝sound後,開始寫程式
import processing.sound.*;// Java 使用sound 外掛
SoundFile music, sword, monkey, intro;//宣告一個變數 music
void setup(){
  size(640, 360); //要把音樂檔放進去
  sword = new SoundFile(this, "sword slash.mp3");
  music = new SoundFile(this, "In Game Music.mp3");
  intro = new SoundFile(this, "Intro Song_Final.mp3");
  monkey = new SoundFile(this, "Monkey 1.mp3");
  music.play();//play播放
}
void mousePressed(){//按下mouse
  if(mouseButton==LEFT)sword.play();//按下左鍵(揮劍)
  else monkey.play();//按下另外一個鍵(變猴子叫)
}
void draw(){
  //裡面是空白
}
  
