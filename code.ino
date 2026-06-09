char data;

int red = 4;
int green = 3;
int blue = 2;

void setup() {
  Serial.begin(9600);  

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {

  if (Serial.available()) {
    data = Serial.read();

    if (data == 'R') {
      digitalWrite(red, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
    }

    else if (data == 'G') {
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH);
      digitalWrite(blue, LOW);
    }

    else if (data == 'B') {
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, HIGH);
    }

    else if (data == 'F') {
      digitalWrite(red, LOW);
      digitalWrite(green, LOW);
      digitalWrite(blue, LOW);
    }

    
  }
}
