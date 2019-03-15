char pin_rojo = 5;
char pin_naranja = 4;
char pin_azul = 3;
char pin_verde = 2;
int sensorPin = A0;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin_rojo, OUTPUT);
  pinMode(pin_naranja, OUTPUT);
  pinMode(pin_azul, OUTPUT);
  pinMode(pin_verde, OUTPUT);
  
}

void loop() {

  val = analogRead(sensorPin);
  

  if(val >= 0 && val < 400){
    digitalWrite(pin_verde, HIGH);
    digitalWrite(pin_naranja, LOW);
    digitalWrite(pin_rojo, LOW); 
    digitalWrite(pin_azul, LOW); 
  }else if(val >= 400 && val < 550){
    digitalWrite(pin_verde, HIGH);
    digitalWrite(pin_azul, HIGH);
    digitalWrite(pin_naranja, LOW);
    digitalWrite(pin_rojo, LOW); 
  }if(val >= 550 && val < 750){
    digitalWrite(pin_naranja, HIGH);
    digitalWrite(pin_verde, HIGH);
    digitalWrite(pin_azul, HIGH);
    digitalWrite(pin_rojo, LOW); 
  }else if (val > 750){
    digitalWrite(pin_rojo, HIGH);
    digitalWrite(pin_naranja, HIGH);
    digitalWrite(pin_verde, HIGH);
    digitalWrite(pin_azul, HIGH);
  }
  // put your main code here, to run repeatedly:
  /*digitalWrite(pin_rojo, HIGH);
  digitalWrite(pin_verde, LOW);// sets the digital pin 13 on
  digitalWrite(pin_azul, HIGH);
  digitalWrite(pin_naranja, LOW);// sets the digital pin 13 on
  delay(1000);                  // waits for a second
  digitalWrite(pin_rojo, LOW); 
  digitalWrite(pin_verde, HIGH);// sets the digital pin 13 off
  digitalWrite(pin_azul, LOW); 
  digitalWrite(pin_naranja, HIGH);*/
  delay(1000); 

}
