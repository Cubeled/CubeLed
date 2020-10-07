void setup()
{                
pinMode ( 2, OUTPUT);
pinMode ( 3, OUTPUT);
pinMode ( 4, OUTPUT);
pinMode ( 5, OUTPUT);
pinMode ( 6, OUTPUT);
pinMode ( 7, OUTPUT);
pinMode ( 8, OUTPUT);
pinMode ( 9, OUTPUT);
pinMode ( 10, OUTPUT);
pinMode ( 11, OUTPUT);
pinMode ( 12, OUTPUT);
pinMode ( 13, OUTPUT);
}

 
void loop() 
{ 
  digitalWrite(13,LOW); //transistor 3er étage
  digitalWrite(11,HIGH); //transistor 1er étage
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);
  digitalWrite(5,HIGH);
  delay(200);

  digitalWrite(11,LOW); //transistor 1er étage
  digitalWrite(12,HIGH); //transistor 2er étage
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);
  digitalWrite(5,HIGH);
  delay(200);

  digitalWrite(12,LOW); //transistor 2er étage
  digitalWrite(13,HIGH); //transistor 3er étage
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(2,HIGH);
  delay(200);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  delay(200);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(200);
  digitalWrite(4,LOW);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  digitalWrite(10,HIGH);
  delay(200);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(200);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(8,LOW);
  digitalWrite(5,HIGH);
  delay(200);
}
