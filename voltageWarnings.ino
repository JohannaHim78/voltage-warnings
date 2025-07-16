//reading voltage w/ potentiometer 
int vPin = A5; 
int vOut; 
float vReal; 

//LEDs 
int green = 6; 
int yellow = 5; 
int red = 3; 

//delay
int dt = 1000; 

//aesthetics 
String volts = " V"; 

void setup() {
  //set baud rate
  Serial.begin(9600);

  //set up LED pins 
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  //display voltage 
  vOut = analogRead(vPin);
  vReal = (5./1023.) * vOut; 
  Serial.print(vReal);
  Serial.println(volts);

  //warnings 
  if(vReal <= 2){
    digitalWrite(green, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);

    delay(dt);
  }

  if(2 <= vReal && vReal <= 4){
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);

    delay(dt);
  }

  if(4 <= vReal && vReal <= 5){
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);

    delay(dt);
  }

}
