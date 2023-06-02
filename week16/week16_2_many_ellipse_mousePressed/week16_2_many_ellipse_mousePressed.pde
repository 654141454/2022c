//有互動
void setup(){ //設定,一開始只做1次
  size(400, 400);
  fill(255, 0, 0);
  ellipse(200,200, 100,100);
}
void draw(){ //畫圖,每秒60次

}
void mousePressed(){//
  ellipse(mouseX, mouseY, 100, 100);
}
