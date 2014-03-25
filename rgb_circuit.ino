const int RED_PIN = 5;
const int GREEN_PIN = 6;
const int BLUE_PIN = 7;

void setup(){
  randomSeed(analogRead(0));
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop(){
  int analogValue = analogRead(1);
  for (int r = 0; r < 256; r+=255){
    for (int g = 0; g < 256; g+=255) {
      for (int b = 0; b < 256; b+=255) {
        if (!(r == 0 && g == 0 && b == 0)) {
          setRGB(r,g,b,analogValue);
        } 
      }
    }
  }
}

void setRGB(int r, int g, int b, int lightDelay) {
  analogWrite(RED_PIN, r);
  analogWrite(GREEN_PIN, g);
  analogWrite(BLUE_PIN, b);
  delay(lightDelay);
}
