

#define in1 5 //L298n Motor Driver pins.
#define in2 6
#define in3 10
#define in4 11
#define LED1 A0
 #define LED2 A1
 #define LED3 A2
 #define LED4 A3

int command; 
int Speed = 255; 
int Speedsec;
int buttonState = 0;
int lastButtonState = 0;
int Turnradius = 0; 
int brakeTime = 45;
int brkonoff = 1; 



void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);  
}
void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();
    Stop();
    switch (command) {
      case 'L':
        forward();
        break;
      case 'R':
        back();
        break;
      case 'F':
        left();
        break;
      case 'B':
        right();
        break;
      case 'G':
        forwardleft();
        break;
      case 'I':
        forwardright();
        break;
      case 'H':
        backleft();
        break;
      case 'J':
        backright();
        break;
      case 'W':
        lightson();
        break;
      case 'w':
        lightsoff();
      
       break;
      case '0':
        Speed = 100;
        break;
      case '1':
        Speed = 140;
        break;
      case '2':
        Speed = 153;
        break;
      case '3':
        Speed = 165;
        break;
      case '4':
        Speed = 178;
        break;
      case '5':
        Speed = 191;
        break;
      case '6':
        Speed = 204;
        break;
      case '7':
        Speed = 216;
        break;
      case '8':
        Speed = 229;
        break;
      case '9':
        Speed = 242;
        break;
      case 'q':
        Speed = 255;
        break;
    }
    Speedsec = Turnradius;
    if (brkonoff == 1) {
      brakeOn();
    } else {
      brakeOff();
    }
  }
}

void forward() {
  analogWrite(in1, Speed);
  analogWrite(in3, Speed);
  digitalWrite(LED1, HIGH);
   digitalWrite(LED3, HIGH);
}

void back() {
  analogWrite(in2, Speed);
  analogWrite(in4, Speed);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED4, HIGH);
 
  
}

void left() {
  analogWrite(in3, Speed);
  analogWrite(in2, Speed);
 digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);

}

void right() {
  analogWrite(in4, Speed);
  analogWrite(in1, Speed);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
 
 
}
void forwardleft() {
  analogWrite(in3, Speed);
  analogWrite(in2, Speedsec);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
  
}
void forwardright() {
  analogWrite(in3, Speedsec);
  analogWrite(in2, Speed);
   digitalWrite(LED2, HIGH);
   digitalWrite(LED4, HIGH);
  
}
void backright()
 {
  analogWrite(in3, Speed);
  analogWrite(in4, Speedsec);
  
}
void backleft() {
  analogWrite(in2, Speedsec);
  analogWrite(in4, Speed);
 
}

void Stop() {
  analogWrite(in1, 0);
  analogWrite(in2, 0);
  analogWrite(in3, 0);
  analogWrite(in4, 0);
   digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  
}
void lightson(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
   digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
}
void lightsoff(){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
}

void brakeOn() {
  
  buttonState = command;
 
  if (buttonState != lastButtonState) {
   
    if (buttonState == 'S') {
      if (lastButtonState != buttonState) {
        digitalWrite(in1, HIGH);
        digitalWrite(in2, HIGH);
        digitalWrite(in3, HIGH);
        digitalWrite(in4, HIGH);
        delay(brakeTime);
        Stop();
      }
    }
   
    lastButtonState = buttonState;
  }
}
void brakeOff() {

}
