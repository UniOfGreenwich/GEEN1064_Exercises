#define en 10
#define in1 9
#define in2 8
#define temp A0

int pwmOutput = 12;
float tempValue;
float temperature;
float rads = 0.0;
float degrees = 0.0;
bool movedRight = false;
bool movedLeft = false;

void setup()
{
  Serial.begin(9600);
  pinMode(en, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop()
{
  tempValue = analogRead(temp);
  temperature = ((tempValue*(5.0/1024.0))-0.5)/0.01;

  if( temperature <= 30.0 && movedRight == false)
  {
    motorInstructions();
    debugger();

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    delay(1000);
    digitalWrite(in2, LOW);
    movedRight = true;
    movedLeft = false;
  }
  else if ( temperature >= 40.0 && movedLeft == false)
  {
    motorInstructions();
    debugger();

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    delay(1000);
    digitalWrite(in1, LOW);
    movedLeft = true;
    movedRight = false;
  }
}

void motorInstructions()
{
  rads = 53.0 * (2*3.1415926/60.0);
  degrees = rads * 57.2958;
  analogWrite(en, pwmOutput);
}

void debugger()
{
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("  | RAD/s: ");
  Serial.print(rads);
  Serial.print("   | Degree/s: ");
  Serial.println(degrees);
}
