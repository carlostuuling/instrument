bool blink = false;
void setup(){
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  if(Serial.available())
{
  char data = Serial.read();
  Serial.println(data);
  switch(data) {
    case 'A':
      digitalWrite(13,HIGH);
      delay(1000);
      digitalWrite(13,LOW);
      delay(1000);
      break;
    case 'S':
      digitalWrite(12,HIGH);
      delay(1000);
      digitalWrite(12,LOW);
      delay(1000);
      break;
    case 'D':
      digitalWrite(11,HIGH);
      delay(1000);
      digitalWrite(11,LOW);
      delay(1000);
      break;
    case 'F':
      digitalWrite(10,HIGH);
      delay(1000);
      digitalWrite(10,LOW);
      delay(1000);
      break;
    case 'G':
      digitalWrite(9,HIGH);
      delay(1000);
      digitalWrite(9,LOW);
      delay(1000);
      break;
    case 'H':
      digitalWrite(8,HIGH);
      delay(1000);
      digitalWrite(8,LOW);
      delay(1000);
      break;      
    case 'J':
      digitalWrite(7,HIGH);
      delay(1000);
      digitalWrite(7,LOW);
      delay(1000);
      break;   
  }

}}
  


