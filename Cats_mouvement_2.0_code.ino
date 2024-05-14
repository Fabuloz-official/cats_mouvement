//created by Fabuloz , program create in French
//version 2.0 coded on May 14, 2024
//connection:
//motion sensor out --> arduino nano digital 9
//gnd motion sensor --> arduino nano gnd (used a breadboard)
//motion sensor vcc --> arduino nano vcc (used breadboard)
//relay int --> arduino nano digital 8
//relay gnd --> arduino nano gnd (used a breadboard)
//relay vcc --> arduino nano 5v (used with braedboard)
//stripped female usb cable vcc --> relay right screw (opposite relay gnd)
//female usb cable stripped then soldered to jumper --> arduino nano gnd (used breadbord)
//arduino nano 5v (used a breadboard) --> relay screw from the middle


//of course all times and sensor types can be modified send me your remake at gmail fabuloz64@gmail.com thank you for downloading this program ;-)

int capteur = 9;//define the sensor as an input
int relay = 8;//define the relay as an output
void setup() {
pinMode(relay, OUTPUT);

}

void loop() {
  if 
  (digitalRead(capteur) == HIGH)// check for movement
   {
    delay(5000);//wait 5 seconde
     if
     (digitalRead(capteur) == HIGH )//check if there is still movement after 5 seconds
      {digitalWrite(relay, HIGH);//activate relay
       delay (60000);//wait a minute
       digitalWrite(relay, LOW);//reaches the relay
       delay(60000);//wait a minute for the relay not to activate directly
      }
     

 
  }

}
