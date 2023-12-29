void setup() {
  Serial.begin(9600); 

}

void loop() {
  int pot1 = analogRead(A0);
  int pot2 = analogRead(A1);
  int pot3 = analogRead(A2);

  //Read data
  Serial.print("L: ");
  Serial.print(pot1);
  Serial.print("\t");
  Serial.print("P: ");
  Serial.print(pot2);
  Serial.print("\t");
  Serial.print("K: ");
  Serial.print(pot3-(1024/2));

  Serial.print("\t");

  //Changed data:
  Serial.print("L: ");
  Serial.print(map(pot1, 0, 1024, 0, 100));
  Serial.print("\t");
  Serial.print("P: ");
  Serial.print(map(pot2, 0, 1024, 0, 100));
  Serial.print("\t");
  Serial.print("K: ");
  Serial.println(map(pot3-(1024/2), -512, 511, 0, 100));
}
