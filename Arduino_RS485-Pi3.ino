int ENABLE = 2; 
void setup() 
{
  Serial.begin(9600);   // initialize serial at baudrate 9600:
  pinMode(ENABLE, OUTPUT);
  delay(10);
  digitalWrite(ENABLE, LOW);        //  (Pin 2 always LOW to receive value from Master)
}

void loop() 
{                                                  
  while (Serial.available())                   //While have data at Serial port this loop executes
     {
        int PWM = Serial.parseInt();           //Receive INTEGER value from Master throught RS-485  
        Serial.println("PWM Value From RPi ");
        Serial.print(PWM);                     //Displays the PWM value
        
    }
 }