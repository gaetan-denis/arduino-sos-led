// SOS Morse Code LED - Arduino
// ---------------------------
// UNIT = 100ms : 1 unit = 1 dot
// dot() = 1 unit ON + 1 unit OFF
// dash() = 3 units ON + 1 unit OFF
// Pause between letters = 3 units total
// Pause between words = 7 units total

#define REDLED 2
#define UNIT 100

void dot()
{
  digitalWrite(REDLED, HIGH);
  delay(UNIT);
  digitalWrite(REDLED, LOW);
  delay(UNIT);
}

void dash()
{
  digitalWrite(REDLED, HIGH);
  delay(UNIT*3);
  digitalWrite(REDLED, LOW);
  delay(UNIT);
}
// Send the SOS Morse code sequence: S-O-S
void sendSOS()
{
// S → . . . 
  for (int i = 0; i < 3; ++i) dot();
  delay(UNIT*2);
   
  // O → – – –
  for (int i = 0; i < 3; ++i) dash();
  delay(UNIT*2);
  
  // S → . . .
  for (int i = 0; i < 3; ++i) dot();
  delay(UNIT*6);
}


void setup()
{
  pinMode(REDLED, OUTPUT);
}

void loop()
{
  sendSOS();
}
