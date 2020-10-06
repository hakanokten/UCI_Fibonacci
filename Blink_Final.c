#define baudrate 9600

char user_defined_byte = ' ';

void setup()
{
  Serial.begin(baudrate);
  pinMode(13, OUTPUT);
}

void loop()
{ 
  //if user writes an input
  if(Serial.available() > 0){
    user_defined_byte = Serial.read();
    
    //if user inputs 1
    if (user_defined_byte == '1'){
      digitalWrite(13, HIGH);
    }
    
    //if user inputs 0
    else if(user_defined_byte == '0'){
      digitalWrite(13, LOW);
    }
  }
}
