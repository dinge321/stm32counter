int i;
int j;
void setup() {
  // put your setup code here, to run once:
  for(i=0; i<13; i++){
    pinMode(i, OUTPUT);
  }
}
void onled(int i){
  if (i==1){
     digitalWrite(2, HIGH);
     digitalWrite(9, HIGH);
  }
  else if (i==2){
     digitalWrite(8, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(2, HIGH);
     digitalWrite(3, HIGH);
  }
  else if (i==3){
     digitalWrite(8, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(5, HIGH);  
     digitalWrite(3, HIGH); 
  }
  else if (i==4){
     digitalWrite(9, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(5, HIGH);
  }
  else if (i==5){
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
  }
  else if (i==6){
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(2, HIGH);
  }
  else if (i==7){
     digitalWrite(8, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(12, HIGH);
  }
  else if (i==8){
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(2, HIGH);
     digitalWrite(12, HIGH);
  }
  else if (i==9){
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     digitalWrite(6, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(5, HIGH);
  }
  else if (i==0){
     digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
     digitalWrite(5, HIGH);
     digitalWrite(3, HIGH);
     digitalWrite(2, HIGH);
     digitalWrite(12, HIGH);
  }
}
void onpin(int j){
  if (j==1){
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }
  else if (j==2){
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
  }
  else if (j==3){
    digitalWrite(7, HIGH);
    digitalWrite(10, HIGH);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  for (i=0; i<1000; i++){
    if (i<10){
      onled(i);
      onpin(1);
      delay(1000);
    }
    else if (i<100){
      for (int y=0; y<50; y++){
        onled(i/10);
        onpin(1);
        delay(2.5);
        for(int x=0; x<13; x++){
          digitalWrite(x, LOW);
        }
        onled(i%10);
        onpin(2);
        delay(2.5);
        for(int x=0; x<13; x++){
          digitalWrite(x, LOW);
        }
      }
    }
    else{
      for (int y=0; y<50; y++){
        onled(i/100);
        onpin(1);
        delay(2.5);
        for(int x=0; x<13; x++){
          digitalWrite(x, LOW);
        }
        onled((i/10)%10);
        onpin(2);
        delay(2.5);
        for(int x=0; x<13; x++){
          digitalWrite(x, LOW);
        }
        onled(i%10);
        onpin(3);
        delay(2.5);
        for(int x=0; x<13; x++){
          digitalWrite(x, LOW);
        }
      }
    }
    for(int x=0; x<13; x++){
      digitalWrite(x, LOW);
  }
  }
}
