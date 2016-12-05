void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  digitalWrite(A0,0);
  int Nilaisensor = analogRead(A0);
  
  float tegangan = Nilaisensor * (5.0 / 1023.0);
  Serial.print("NILAI TEGANGAN REFERENCE : ");
  Serial.println(tegangan);
  
  float Vr2=5.0 - tegangan;
  
  float i =Vr2/ 100.0;
  
  float r = tegangan/i;
  Serial.print("R2 : ");
  Serial.println(r);
   
}

void loop(){   
}
