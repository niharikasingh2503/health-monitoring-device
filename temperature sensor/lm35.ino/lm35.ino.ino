
#define tempPin A1

void setup()
{
Serial.begin(9600);

}
void loop()
{
int val=analogRead(tempPin);
float mv=(val/1024.0)*500;
float cel =mv;
float frah=(cel*9)/5 + 32;
Serial.print("TEMPRATURE=");
Serial.print(cel);
Serial.print("*c");
Serial.print("       |       ");
Serial.print(frah);
Serial.print("*F");
Serial.println();

delay(1000);
}