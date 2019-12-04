int led =5;
int ldr = A1;
int max = 925;//dark
int min = 625; // ligth 
int threshold = (max + min ) /2;


void setup() {
// put your setup code here, to run once:
pinMode (led, OUTPUT);
pinMode (ldr, INPUT);
Serial.begin (9600);

}


void loop() {
  int val  = analogRead (ldr);
  Serial.println (val);
  delay(500);
 if (val < threshold)
  digitalWrite(led, HIGH);
  
  else
  digitalWrite(led,LOW);
  // put your main code here, to run repeatedly:

}
