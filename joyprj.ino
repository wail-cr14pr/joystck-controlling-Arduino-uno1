void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);
  pinMode(3,OUTPUT); //(1,0)
  
  pinMode(4,OUTPUT); //(0,1)
  
  pinMode(5,OUTPUT); //(-1,0)
  
  pinMode(6,OUTPUT); //(0,-1)
  
}
int x;
int y;
void loop()
{
  Serial.println(digitalRead(2));
  x=analogRead(A0);
  y=analogRead(A1);
  /*Serial.println("Value of x :");
  Serial.print(analogRead(A0));
  Serial.print("\n");
  
  Serial.println("Value of y :");
  Serial.println(analogRead(A1));
  Serial.print("\n");
  Serial.println("switch :");
  Serial.println(digitalRead(2));
  Serial.print("\n");*/
  //x=509 504-514
  //y=521 516-526
  if(digitalRead(2)==0)
  {
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(6,HIGH);
  }else{
  if(x>=504 && x<=514)
  {
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
  }else{
    if(x<504)
    {
      digitalWrite(5,HIGH);
      digitalWrite(3,LOW);  
    }else if(x>514)
    {
      digitalWrite(5,LOW);
      digitalWrite(3,HIGH);  
    }
  }
  if(y>=516 && y<=526)
  {
    
    digitalWrite(4,LOW);
    digitalWrite(6,LOW);
  }else{
    if(y<516)
    {
      digitalWrite(6,HIGH);
      digitalWrite(4,LOW);  
    }else if(y>526)
    {
      digitalWrite(6,LOW);
      digitalWrite(4,HIGH);  
    }
  }
  }
}
