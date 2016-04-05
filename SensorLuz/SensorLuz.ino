int led = 6;
int luz = 5;
int estado = 0;
int luminosidade = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(luz, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estado = analogRead(luz);
  Serial.println(estado);
  /*luminosidade = map(luz, 0, 1023, 0, 255);
  Serial.println("Valor lido do LDR: ");
  Serial.println(luz);
  Serial.println(" = luminosidade: ");
  Serial.println(luminosidade);
  analogWrite(luz, luminosidade); */
  
  if(estado>900){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
//  digitalWrite(led, HIGH);
//  delay(1000);
//  digitalWrite(led, LOW);
//  delay(1000);
}
