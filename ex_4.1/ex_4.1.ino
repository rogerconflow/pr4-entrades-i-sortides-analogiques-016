const int durada = 9 ; 
const int  pot0= A0 ; 
int valPot0 ; 


void setup() 

{
  pinMode(durada,OUTPUT );  // put your setup code here, to run once:

}

void loop() 
{
 valPot0 = analogRead (pot0);

 tone (durada, 1023,valPot0);
delay (2*valPot0);

}
