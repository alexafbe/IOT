#define led1 D1
#define led2 D2
#define led3 D3
#define led4 D4
#define led5 D5
#define led6 D6
#define led7 D7
#define led8 D8

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  Serial.begin(9600);
}

void off() {
  digitalWrite( led1, LOW );
  digitalWrite( led2, LOW );
  digitalWrite( led3, LOW );
  digitalWrite( led4, LOW );
  digitalWrite( led5, LOW );
  digitalWrite( led6, LOW );
  digitalWrite( led7, LOW );
  digitalWrite( led8, LOW );
}

void loop() {  
  off();
  digitalWrite(led1, HIGH);
  delay(120);
  
  off();
  digitalWrite(led2, HIGH);
  delay(120);
  
  off();
  digitalWrite(led3, HIGH);
  delay(120);
  
  off();
  digitalWrite(led4, HIGH);
  delay(120);
  
  off();
  digitalWrite(led5, HIGH);
  delay(120);

  off();
  digitalWrite(led6, HIGH);
  delay(120);

  off();
  digitalWrite(led7, HIGH);
  delay(120);

  off();
  digitalWrite(led8, HIGH);
  delay(120);

  off();
  delay(180);
}
