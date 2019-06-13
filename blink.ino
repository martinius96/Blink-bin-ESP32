void setup() {
  pinMode(23, OUTPUT); //nastavenie vyvodu na vystup
}

void loop() {
  digitalWrite(23, HIGH); //privedenie 3.3V na vyvod
  delay(1000);  //pozdrz program o () milisekund
  digitalWrite(23, LOW); //privedenie 0V na vyvod
  delay(1000); //pozdrz program o () milisekund
}
