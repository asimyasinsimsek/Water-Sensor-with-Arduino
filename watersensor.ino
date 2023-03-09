int buzzerPin = 7;
int led1Pin = 8;
int led2Pin = 9;
int led3Pin = 10;
int led4Pin = 11;
int led5Pin = 12;
int mi = 331;

int siviseviyePin = A0;
int siviseviyesi;

void setup()
{
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);
  pinMode(siviseviyePin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  siviseviyesi = analogRead(siviseviyePin);
  Serial.print("Sıvı Seviyesi: ");
  Serial.println(siviseviyesi);

  if(siviseviyesi == 0)
  {
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, LOW);
    digitalWrite(led3Pin, LOW);
    digitalWrite(led4Pin, LOW);
    digitalWrite(led5Pin, LOW);
    noTone(buzzerPin);
  }
  if(siviseviyesi > 0 and siviseviyesi <= 100)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, LOW);
    digitalWrite(led3Pin, LOW);
    digitalWrite(led4Pin, LOW);
    digitalWrite(led5Pin, LOW);
    noTone(buzzerPin);
  }
  if(siviseviyesi > 100 and siviseviyesi <= 200)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, LOW);
    digitalWrite(led4Pin, LOW);
    digitalWrite(led5Pin, LOW);
    noTone(buzzerPin);
  }
  if(siviseviyesi > 200 and siviseviyesi <= 300)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, HIGH);
    digitalWrite(led4Pin, LOW);
    digitalWrite(led5Pin, LOW);
    noTone(buzzerPin);
  }
 if(siviseviyesi > 300 and siviseviyesi <= 400)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, HIGH);
    digitalWrite(led4Pin, HIGH);
    digitalWrite(led5Pin, LOW);
    noTone(buzzerPin);
  }
  if(siviseviyesi > 500)
  {
    digitalWrite(led1Pin, HIGH);
    digitalWrite(led2Pin, HIGH);
    digitalWrite(led3Pin, HIGH);
    digitalWrite(led4Pin, HIGH);
    digitalWrite(led5Pin, HIGH);
    tone(buzzerPin, mi);    
  }

  delay(100);
}
