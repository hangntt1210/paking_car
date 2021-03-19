

int speed=500;
int speed2=300;
//----------------------------------------------
int dc1a = 15;
int dc1b = 16;
int dc2a = 2;
int dc2b = 0;
void stop() {
    Serial.println("DUNG");
    digitalWrite(dc1a, LOW);
    digitalWrite(dc1b, LOW);
    digitalWrite(dc2a, LOW);
    digitalWrite(dc2b, LOW);
}
void go_straight(int time_s){
  Serial.println("DUNG");
    analogWrite(dc1a,speed);
    analogWrite(dc2a,speed);
    digitalWrite(dc1b, LOW);
    digitalWrite(dc2b, LOW);
    delay(time_s);
}
void turn_left(int time_s){
  Serial.println("Trai");
    analogWrite(dc1a,speed);
    analogWrite(dc2a,LOW);
    digitalWrite(dc1b, LOW);
    digitalWrite(dc2b, LOW);
    delay(time_s);
}
void turn_right(int time_s){
  Serial.println("Phai");
    analogWrite(dc1a,speed);
    analogWrite(dc2a,speed2);
    digitalWrite(dc1b, LOW);
    digitalWrite(dc2b, LOW);
    delay(500);
}
void go_back(int time_s){
  Serial.println("Lui");
    digitalWrite(dc1a, LOW);
    digitalWrite(dc2a, LOW);
    analogWrite(dc1b,speed);
    analogWrite(dc2b,speed);
    delay(time_s);
}
 
void setup(){
    Serial.begin(115200);
    pinMode(dc1a, OUTPUT);
    pinMode(dc1b, OUTPUT);
    pinMode(dc2a, OUTPUT);
    pinMode(dc2b, OUTPUT);
     
    stop();
    delay(2000);
    go_straight(3000);
    turn_left(600);
    go_back(1500);
    stop();
}


void loop()
{
    
}
