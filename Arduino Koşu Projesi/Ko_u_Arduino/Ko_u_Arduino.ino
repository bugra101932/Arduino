int Laser = 12;
int Detector = 13;
int Laser2 =11;
int Detector2 = 10;
unsigned long start=0;
unsigned long bitis=0;

 


void setup() {

  
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Laser, OUTPUT);
pinMode(Detector, INPUT);
pinMode(Laser2, OUTPUT);
pinMode(Detector2,INPUT);
}
void a(){
  
boolean val=digitalRead(Detector);
boolean val2=digitalRead(Detector2);
 
while(val2==0 && val==0){
val2=digitalRead(Detector2);
val=digitalRead(Detector);
  }


  }

  
void b(){
  
boolean val3=digitalRead(Detector);
boolean val4=digitalRead(Detector2);

  if(val3!=1 && val4!=0)
  {
    val4=digitalRead(Detector2);
    val3=digitalRead(Detector);
    b();
    }

  }
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Laser , HIGH);
digitalWrite(Laser2 , HIGH);


//delay(100);


start=millis();

a();
bitis=millis();

if(bitis>start){
  if(bitis-start>100){
    Serial.println(bitis-start);
    /*Serial.println("*");*/
    
  }


}
b();
/*if(bitis-start>100)*/
/*Serial.println(bitis-start);*/
  }


