// the setup function runs once when you press reset or power the board
#define rosu 11
#define galben 12
#define verde 13

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(verde, OUTPUT); // verde
  pinMode(rosu, OUTPUT); // rosu
  pinMode(galben, OUTPUT); // galben
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(verde, HIGH);
  digitalWrite(galben, LOW);
  digitalWrite(rosu, LOW);
  delay(3000);

  digitalWrite(galben, HIGH);
  digitalWrite(verde, LOW);
  delay(1500);
  
  digitalWrite(verde, LOW);
  digitalWrite(galben, LOW);
  digitalWrite(rosu, HIGH);
  delay(2000);
}
