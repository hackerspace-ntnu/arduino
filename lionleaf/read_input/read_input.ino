
const int inputPin = 0;


void setup(){
  
  Serial.begin(9600);
}


void loop()
{
  int input = analogRead(inputPin);

  Serial.print("voltage: ");
  Serial.println(input);
   
  delay(500); 
}
