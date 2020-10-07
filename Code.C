void setup() {
  for (int i = 1; i <= 9; i++)
    pinMode(i, OUTPUT);
  for (int i = 10; i <=12; i++)
    analogWrite(i, 255);
}
void loop() {
  int del = 100;

  //flashes LED's from top to bottom
  for (int i = 0; i <= 3; i++)
  {
    for (int i = 0; i <= 10; i++)
      analogWrite(i, 255);
    for (int i = 11; i <= 13; i++)
    {
      digitalWrite(i, LOW);
      delay(del);
    }
    for (int i = 11; i <= 13; i++)
    {
      analogWrite(i, 255);
      delay(del);
    }
  }
  //flashes LED's in a downwards spiral
  for (int i = 0; i <= 10; i++)
    digitalWrite(i, LOW);
  for (int i = 0; i < 3; i++)
  {
    flash(del, 0, 0, i);
    flash(del, 1, 0, i);
    flash(del, 2, 0, i);
    flash(del, 2, 1, i);
    flash(del, 2, 2, i);
    flash(del, 1, 2, i);
    flash(del, 0, 2, i);
    flash(del, 0, 1, i);
  }
  //flashes LED's in one random column from top to bottom
  
  for (int i = 0; i <= 9; i++)
  {
    int x = random(3);
    int y = random(3);
    
    for (int i = 0; i <= 2; i++)
    {
      flash(del+50, x, y, i);
    }
    delay(del);
  }
 
  //randomly flashes LED's
  for (int i = 0; i <= 30; i++)
  {
    int x = random(3);
    delay(50);
    int y = random(3);
    delay(50);
    int z = random(3);
    delay(50);
    flash(90, x, y, z);
  }
  
  //flashes LED's from one corner outwards
  for (int i = 0; i <= 3; i++)
  {
    flash(2*del, 0, 0, 0);
    for (int i = 2*(del/7); i >= 0; i--)
    {
      flash(1, 0, 1, 0);
      flash(1, 1, 1, 0);
      flash(1, 1, 0, 0);
      flash(1, 0, 0, 1);
      flash(1, 0, 1, 1);
      flash(1, 1, 1, 1);
      flash(1, 1, 0, 1);
    }
    for (int i = 2*(del/19); i >= 0; i--)
    {
      flash(1, 0, 2, 0);
      flash(1, 1, 2, 0);
      flash(1, 2, 2, 0);
      flash(1, 2, 1, 0);
      flash(1, 2, 0, 0);
      flash(1, 0, 2, 1);
      flash(1, 1, 2, 1);
      flash(1, 2, 2, 1);
      flash(1, 2, 1, 1);
      flash(1, 2, 0, 1);
      flash(1, 0, 0, 2);
      flash(1, 0, 1, 2);
      flash(1, 0, 2, 2);
      flash(1, 1, 0, 2);
      flash(1, 1, 1, 2);
      flash(1, 1, 2, 2);
      flash(1, 2, 0, 2);
      flash(1, 2, 1, 2);
      flash(1, 2, 2, 2);
    }
  }
}
void onOff(boolean state, int x, int y, int z) {  //turns on or off led at (x, y, z)
  if (state)
  {
    digitalWrite(z+11, LOW);
    analogWrite((3*x)+y+2, 255);
  }
  else
  {
    analogWrite(z+11, 255);
    digitalWrite((3*x)+y+2, LOW);
  }
}
void flash(int msec, int x, int y, int z) {  //flashes led at (x, y, z) on and off for msec
  onOff(true, x, y, z);                      //milliseconds
  delay(msec);
  onOff(false, x, y, z);
}
