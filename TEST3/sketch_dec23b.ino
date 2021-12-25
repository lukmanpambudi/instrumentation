float vcahaya,suhu,beban,cahaya,vsuhu,vbeban;
int led2 = 2;
int led3 = 3;
int led4 = 4;
void setup()
{
  Serial.begin(9600);
  pinMode(led3,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop()
{
  
  cahaya = analogRead(A0);
  suhu =analogRead(A1);
  beban = analogRead(A2);
  vcahaya = cahaya * (5.0 / 1023.0);
  vsuhu = suhu * (5.0 / 1023.0);
  vbeban = beban * (5.0 / 1023.0);
    Serial.print("Nilai V StringG: ");
  Serial.println(vbeban);
  delay(250);
  if(vcahaya<=2.50 && vbeban<2.42 && vsuhu<0.29){
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
  }
  else if(vcahaya<=2.50 && vbeban<2.42 && vsuhu>=0.29){
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
  }
  else if(vcahaya<=2.50 && vbeban>=2.42 && vsuhu>=0.29){
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,HIGH);
  }
  else if(vcahaya>2.50 && vbeban<2.42 && vsuhu<0.29){
   digitalWrite(led2,HIGH);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
  }
  else if(vcahaya>2.50 && vbeban>=2.42 && vsuhu<0.34){
   digitalWrite(led2,HIGH);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
  }
  else if(vcahaya>2.50 && vbeban>=2.42 && vsuhu>=0.29){
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,HIGH);
  }
  else{
   digitalWrite(led2,LOW);
   digitalWrite(led3,LOW);
   digitalWrite(led4,LOW);
  }
}
