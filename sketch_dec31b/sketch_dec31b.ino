int LED_Pin = PB0; // Use Pin 9 for the LED. (Any PWM Pin will work for this.) 
int howBright;   // Intensity of the LED: [0 = Off], [255 = Brightly Lit] 
int switchPin = PB1;              // switch is connected to pin 6
int val;                        // variable for reading the pin status

void setup()
{ 
  pinMode(switchPin, INPUT);    // Set the switch pin as input
  pinMode(LED_Pin, OUTPUT); 
}

void loop() 
{ 
  val = digitalRead(switchPin);   // read input value and store it in val
  if (val == LOW) {               // check if the button is pressed
    analogWrite(LED_Pin, howBright);   // turn LED on
  {
  if (val == HIGH) {              // check if the button is not pressed
    digitalWrite(LED_Pin, LOW);    // turn LED off
  }
  
  howBright = random(128,255);     // Change brightness to something between 128 and 255 
  analogWrite(LED_Pin, howBright); // Illuminate the LED with the brightness picked 
  delay(random(50,150));           // Makes LED seem to flicker when on for a random time 
}}


