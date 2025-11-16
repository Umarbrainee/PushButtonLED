int led; //introduce a variable for the led
int button; //introduce the variable for the button
void setup() {
  led = 11; // define the variable with the led pin
  button = 2; // define the varible with the button pin
  pinMode(led, OUTPUT); // led pin is given as output
  pinMode(button, INPUT); // button pin is given as input
}

void loop() {
     if(digitalRead(button) == HIGH){// if the button is turned on 
    digitalWrite(led, HIGH); // led will turn on
  }
  else{ // else if the button is off turn the led off
   digitalWrite(led, LOW);  
  }
  }

