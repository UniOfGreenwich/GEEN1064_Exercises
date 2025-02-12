int positionOne = 2;
int positionTwo = 3;
int positionThree = 4;
int positionFour = 5;

int switchOne = 13;
int switchTwo = 12;
int switchThree = 9;
int switchFour = 8;

int one;
int two;
int three;
int four;

void setup()
{
  pinMode(positionOne, OUTPUT);
  pinMode(positionTwo, OUTPUT);
  pinMode(positionThree, OUTPUT);
  pinMode(positionFour, OUTPUT);
  
  pinMode(switchOne, INPUT);
  pinMode(switchTwo, INPUT);
  pinMode(switchThree, INPUT);
  pinMode(switchFour, INPUT);
}

void loop()
{
  one = digitalRead(switchOne);
  two = digitalRead(switchTwo);
  three = digitalRead(switchThree);
  four = digitalRead(switchFour);

  if((one == false && two == false) && (three == false && four == false))
  {
    digitalWrite(positionOne, LOW);
    digitalWrite(positionTwo, LOW);
    digitalWrite(positionThree, LOW);
    digitalWrite(positionFour, LOW);
  }

  else if((one == true && two == false) && (three == false && four == false))
  {
    digitalWrite(positionOne, HIGH);
    digitalWrite(positionTwo, LOW);
    digitalWrite(positionThree, LOW);
    digitalWrite(positionFour, LOW);
  }
  else if(one == false && two == true && three == false && four == false)
  {
    digitalWrite(positionOne, LOW);
    digitalWrite(positionTwo, HIGH);
    digitalWrite(positionThree, LOW);
    digitalWrite(positionFour, LOW);
  }
  else if(one == true && two == true && three == false && four == false)
  {
    digitalWrite(positionOne, HIGH);
    digitalWrite(positionTwo, HIGH);
    digitalWrite(positionThree, LOW);
    digitalWrite(positionFour, LOW);
  }
}
