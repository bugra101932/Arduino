 const int trig=3;
 const int echo=2;
int Laser = 12;
int Detector = 13;

int mesafe=0;
int sure =0 ;
int son = 0;

void setup() {
          pinMode(trig,OUTPUT);
          pinMode(echo,INPUT);
          pinMode(Laser, OUTPUT);
          pinMode(Detector, INPUT);
          Serial.begin(9600);
  // put your setup code here, to run once:

}

void a(int d){
  
  if(d!=0)
  Serial.println(String(d));
  }
void loop() {
  digitalWrite(Laser , HIGH);
  boolean val=digitalRead(Detector);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  
  sure=pulseIn(echo,HIGH);
  mesafe= (sure/2) / 28.5; 

  /*Serial.println(String(mesafe)); */
  if(mesafe>son)
  {

 
  if(mesafe<40 && mesafe>10) {
  son=mesafe;}
  a(son);
  if(val==1)
  {
    delay(5000);
    son=0;
    }
  /*if(son>70)
  Serial.end();*/
  }
  
 
  // put your main code here, to run repeatedly:

}
