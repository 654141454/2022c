size(400,400);
fill(255, 0, 0);

noStroke();//不要有黑線
for(int i=0; i<300; i++){
  for(int j=0; j<300; j++){
    float x = (j-150)/20.0;
    float y = -(i-150)/20.0;
    float xxyy = (x*x+y*y-1);
    if( xxyy * xxyy * xxyy - x*x*y*y*y < 0){
      ellipse( j-50, i-100, 5,5);
      //位置在這裡修改
    }
  }
}
