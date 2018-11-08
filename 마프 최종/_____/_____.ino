int R1 = 1;
int G1 = 2;
int C1 = 3;
int R2 = 5;
int G2 = 6;
int B2 = 7;
int R3 = 9;
int G3 = 10;
int B3 = 11;
int R4 = 22;
int G4 = 24;
int B4 = 26; 
int R5 = 35;
int G5 = 37;
int B5 = 39;
int R6 = 44;
int G6 = 46;
int B6 = 47;
//
int Button1 = 15;
int Button2 = 16;
int Button3 = 17;

//
int control;
//
void setup() {
  pinMode(R1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(R5, OUTPUT);
  pinMode(G5, OUTPUT);
  pinMode(B5, OUTPUT);
  pinMode(R6, OUTPUT);
  pinMode(G6, OUTPUT);
  pinMode(B6, OUTPUT);
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);

}

void loop() {
 int state1 = digitalRead(Button1);
 int state2 = digitalRead(Button2);
 int state3 = digitalRead(Button3);
 
 if( state2 == 0 ){ // 버튼 누르면
 control++; 
  if(control > 5)
    control = 0;
  delay(400);
}

 else if(state1==0){
  analogWrite(R1,255);
  analogWrite(G1,255);
  analogWrite(C1,255);
  analogWrite(R2,255);
  analogWrite(G2,255);
  analogWrite(B2,255);
  analogWrite(R3,255);
  analogWrite(G3,255);
  analogWrite(B3,255);
  analogWrite(R4,255);
  analogWrite(G4,255);
  analogWrite(B4,255);
  analogWrite(R5,255);
  analogWrite(G5,255);
  analogWrite(B5,255);
  analogWrite(R6,255);
  analogWrite(G6,255);
  analogWrite(B6,255);
 }

  //state1
else if(state3==0){
  delay(500);
  digitalWrite(R1,HIGH);
  digitalWrite(G1,HIGH);
  digitalWrite(C1,HIGH);
  digitalWrite(R2,HIGH);
  digitalWrite(G2,HIGH);
  digitalWrite(B2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(G3,HIGH);
  digitalWrite(B3,HIGH);
  digitalWrite(R4,HIGH);
  digitalWrite(G4,HIGH);
  digitalWrite(B4,HIGH);
  digitalWrite(R5,HIGH);
  digitalWrite(G5,HIGH);
  digitalWrite(B5,HIGH);
  digitalWrite(R6,HIGH);
  digitalWrite(G6,HIGH);
  digitalWrite(B6,HIGH);
  delay(500);
  digitalWrite(R1,LOW);
  digitalWrite(G1,LOW);
  digitalWrite(C1,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(G2,LOW);
  digitalWrite(B2,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(G3,LOW);
  digitalWrite(B3,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(G4,LOW);
  digitalWrite(B4,LOW);
  digitalWrite(R5,LOW);
  digitalWrite(G5,LOW);
  digitalWrite(B5,LOW);
  digitalWrite(R6,LOW);
  digitalWrite(G6,LOW);
  digitalWrite(B6,LOW);
 }//state3
  else
  {
  analogWrite(R1,0);
  analogWrite(G1,0);
  analogWrite(C1,0);
  analogWrite(R2,0);
  analogWrite(G2,0);
  analogWrite(B2,0);
  analogWrite(R3,0);
  analogWrite(G3,0);
  analogWrite(B3,0);
  analogWrite(R4,0);
  analogWrite(G4,0);
  analogWrite(B4,0);
  analogWrite(R5,0);
  analogWrite(G5,0);
  analogWrite(B5,0);
  analogWrite(R6,0);
  analogWrite(G6,0);
  analogWrite(B6,0);
  }
  
 if(control == 0 )
  {
  analogWrite(R1,0);
  analogWrite(G1,0);
  analogWrite(C1,0);
  analogWrite(R2,0);
  analogWrite(G2,0);
  analogWrite(B2,0);
  analogWrite(R3,0);
  analogWrite(G3,0);
  analogWrite(B3,0);
  analogWrite(R4,0);
  analogWrite(G4,0);
  analogWrite(B4,0);
  analogWrite(R5,0);
  analogWrite(G5,0);
  analogWrite(B5,0);
  analogWrite(R6,0);
  analogWrite(G6,0);
  analogWrite(B6,0);
  }
  
else if(control == 1){ //빨
  analogWrite(R1,255);
  analogWrite(G1,0);
  analogWrite(C1,0);
   analogWrite(R2,255);
  analogWrite(G2,0);
  analogWrite(B2,0);
   analogWrite(R3,255);
  analogWrite(G3,0);
  analogWrite(B3,0);
   analogWrite(R4,255);
  analogWrite(G4,0);
  analogWrite(B4,0);
  analogWrite(R5,255);
  analogWrite(G5,0);
  analogWrite(B5,0);
  analogWrite(R6,255);
  analogWrite(G6,0);
  analogWrite(B6,0);
  //delay(00);
  }

  else if(control == 2) {  //노
  analogWrite(R1,255);
  analogWrite(G1,255);
  analogWrite(C1,0);
  analogWrite(R2,255);
  analogWrite(G2,255);
  analogWrite(B2,0);
  analogWrite(R3,255);
  analogWrite(G3,255);
  analogWrite(B3,0);
  analogWrite(R4,255);
  analogWrite(G4,255);
  analogWrite(B4,0);
  analogWrite(R5,255);
  analogWrite(G5,255);
  analogWrite(B5,0);
  analogWrite(R6,255);
  analogWrite(G6,255);
  analogWrite(B6,0);
  
  //delay(00);
  }
   else if(control == 3){ //초
  analogWrite(R1,0);
  analogWrite(G1,255);
  analogWrite(C1,0);
  analogWrite(R2,0);
  analogWrite(G2,255);
  analogWrite(B2,0);
  analogWrite(R3,0);
  analogWrite(G3,255);
  analogWrite(B3,0);
  analogWrite(R4,0);
  analogWrite(G4,255);
  analogWrite(B4,0);
  analogWrite(R5,0);
  analogWrite(G5,255);
  analogWrite(B5,0);
  analogWrite(R6,0);
  analogWrite(G6,255);
  analogWrite(B6,0);
  //delay(00);
  }
  else if(control == 4){  //파
  analogWrite(R1,0);
  analogWrite(G1,0);
  analogWrite(C1,255);
  analogWrite(R2,0);
  analogWrite(G2,0);
  analogWrite(B2,255);
  analogWrite(R3,0);
  analogWrite(G3,0);
  analogWrite(B3,255);
  analogWrite(R4,0);
  analogWrite(G4,0);
  analogWrite(B4,255);
  analogWrite(R5,0);
  analogWrite(G5,0);
  analogWrite(B5,255);
  analogWrite(R6,0);
  analogWrite(G6,0);
  analogWrite(B6,255);
  //delay(1280);
    
  }
  
  else if(control == 5)
  {
  analogWrite(R1,148);  //보
  analogWrite(G1,0);
  analogWrite(C1,211);
  analogWrite(R2,148);
  analogWrite(G2,0);
  analogWrite(B2,211);
  analogWrite(R3,148);
  analogWrite(G3,0);
  analogWrite(B3,211);
  analogWrite(R4,148);
  analogWrite(G4,0);
  analogWrite(B4,211);
  analogWrite(R5,148);
  analogWrite(G5,0);
  analogWrite(B5,211);
  analogWrite(R6,148);
  analogWrite(G6,0);
  analogWrite(B6,211);
  //delay(1280);

   
  }

  
  
  
 }


