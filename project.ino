int IRSensor1 =0;
int IRSensor2 =1;
int IRSensor3 =2;
int IRSensor4 =3;
int IRSensor5 =4;
int IRSensor6 =5;
int IRSensor7 =6; int LED1 = 7;
int LED2 =8;
int LED3 =9;
int LED4 =10;
int LED5 =11;
int LED6 =12;
int LED7 =13;

void setup()
{
pinMode (IRSensor1, INPUT); // sensor pin INPUT_shubham pinMode (IRSensor2, INPUT);
pinMode (IRSensor3, INPUT); pinMode (IRSensor4, INPUT); pinMode (IRSensor5, INPUT); pinMode (IRSensor6, INPUT); pinMode (IRSensor7, INPUT);

pinMode (LED1, OUTPUT); // Led pin OUTPUT pinMode (LED2, OUTPUT);
pinMode (LED3, OUTPUT); pinMode (LED4, OUTPUT); pinMode (LED5, OUTPUT); pinMode (LED6, OUTPUT); pinMode (LED7, OUTPUT);

}

void loop()
{
int statusSensor1 = digitalRead (IRSensor1); int statusSensor2 = digitalRead (IRSensor2); int statusSensor3 = digitalRead (IRSensor3); int statusSensor4 = digitalRead (IRSensor4); int statusSensor5 = digitalRead (IRSensor5); int statusSensor6 = digitalRead (IRSensor6); int statusSensor7 = digitalRead (IRSensor7);
 
if (statusSensor1 == 1)
{
digitalWrite(LED1, LOW); // LED LOW
}

else
{
digitalWrite(LED1, HIGH); // LED High
}
if (statusSensor2 == 1)
{
digitalWrite(LED2,LOW);
}
else
{
digitalWrite(LED2, HIGH); // LED High
}

if (statusSensor3 == 1)
{
digitalWrite(LED3, LOW); // LED LOW
}
else
{
digitalWrite(LED3, HIGH); // LED High
}

if (statusSensor4 == 1)
{
digitalWrite(LED4, LOW); // LED LOW
}
else
{
digitalWrite(LED4, HIGH); // LED High
}

if (statusSensor5 == 1)
{
digitalWrite(LED5, LOW); // LED LOW
}
else
{
digitalWrite(LED5, HIGH); // LED High
}

if (statusSensor6 == 1)
{
digitalWrite(LED6, LOW); // LED LOW
}
else
{
digitalWrite(LED6, HIGH); // LED High
}

if (statusSensor7 == 1)
 
{
digitalWrite(LED7, LOW); // LED LOW
}
else
{
digitalWrite(LED7, HIGH); // LED High
}
}
