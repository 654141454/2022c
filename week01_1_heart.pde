//(x*x+y*y-1)
size(400, 400); //視窗大小
fill(255, 0, 0); //紅色
noStroke(); //不要用外框的stroke
//ellipse(200, 200, 100, 150);
for(int i=0;i<400;i++){
  for(int j=0;j<400;j++){
    float x = (j-200)/100.0;
    float y = -(i-200)/100.0; //y要改成負的
    if((x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1) - x*x*y*y*y < 0){
      ellipse( j, i, 2, 2);
    }
  }
}
  
