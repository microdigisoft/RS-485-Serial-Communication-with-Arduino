int Enable_pin = 8;
int Analog_pin = A0;
int ADC_Value = 0 ;

void setup()
{
  Serial.begin(9600);
  pinMode(Enable_pin, OUTPUT);
  pinMode(Analog_pin, INPUT);
  delay(10);
  digitalWrite(Enable_pin, HIGH);
}
void loop()
{
  int ADC_Value = analogRead(Analog_pin);
  //Serial.print("PWM Value: ");
  Serial.println(ADC_Value);          //Serial Write ADC_Value to RS-485 Bus
  delay(100);
}
