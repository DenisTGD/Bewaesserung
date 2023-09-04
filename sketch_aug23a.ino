int wet = A3;
int dry = A3;


void setup() {
      Serial.begin(9600);
      pinMode(12 , OUTPUT);
  }


void loop() {
  
   wet = analogRead(A3); 
   dry = analogRead(A3);
   

    if (wet >= 350) {
     digitalWrite(12 , LOW);
     
  }
    else if (dry <= 25){
     digitalWrite(12 , HIGH);
      
  }
}
