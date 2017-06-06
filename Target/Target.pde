int displayWidth = 800;
int displayHeight = 800;
int n=7;
int r=10;
color bgcolor= (255); 

void setup() {
size(displayWidth, displayHeight);
background(bgcolor);
}
  
void draw(){
  if (mousePressed){
  drawTarget(mouseX, mouseY);
  }
}
void drawTarget(int a, int b){
  for (int i=n; i>=0; i--)
  {
   if (i%2==0){
   fill(255);
   }
   else{
   fill(0);
   }
   rectMode (CENTER);
   rect (a, b, 15*i, 15*i, r);
  }
}