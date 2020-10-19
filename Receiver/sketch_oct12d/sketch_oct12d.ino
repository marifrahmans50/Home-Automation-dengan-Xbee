int DataCheck = 0;
void setup() 
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
   
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  Serial.print("Simulasi Home Automation dgn XBee:");
  Serial.println();
  Serial.println();
  Serial.println();
  Serial.println();
   
}
void loop() 
{
  if(Serial.available())
  {
    char data = Serial.read();
    Serial.print(data);
    Serial.print("      ======== >      ");
    
    if(data == '1'){DataCheck = 1; digitalWrite(6, HIGH); Serial.println("light on");}
    if(data == '2'){DataCheck = 1; digitalWrite(5, HIGH); Serial.println("fan on");}
    if(data == '3'){DataCheck = 1; digitalWrite(4, HIGH); Serial.println("night lamp on");} 
    if(data == '4'){DataCheck = 1; digitalWrite(6, LOW); Serial.println("light off");}
    if(data == '5'){DataCheck = 1; digitalWrite(5, LOW); Serial.println("fan off");}
    if(data == '6'){DataCheck = 1; digitalWrite(4, LOW); Serial.println("night lamp off");}
    if(data == '7'){DataCheck = 1; digitalWrite(6, HIGH); digitalWrite(5, HIGH); digitalWrite(4, HIGH); Serial.println("all on");}
    if(data == '8'){DataCheck = 1; digitalWrite(6, LOW); digitalWrite(5, LOW); digitalWrite(4, LOW); Serial.println("all off");}
    if(DataCheck == 0){Serial.println("Perintah Salah. Silakan ulangi !!! ");}
    Serial.println();
    DataCheck = 0;
  }
}
