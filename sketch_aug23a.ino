
  // put your setup code here, to run once:
int on = 5V;
int off = GND;
int wet = A3;
int dry = A3;


void setup() {
      Serial.begin(9600);
  }


void loop() {

    if (wet >= 80) {
       Serial.println(off);
  }
    else if (dry <= 30){
       Serial.println(on);
  }
}
