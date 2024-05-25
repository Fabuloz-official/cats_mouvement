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
//led green vcc --> arduino nano digital 7
//led yellow vcc --> arduino nano digital 6
//led red vcc --> arduino nano digital 5

//of course all times and sensor types can be modified send me your remake at gmail fabuloz64@gmail.com thank you for downloading this program ;-)

int capteur = 9;//define the sensor as an input
int relay = 8;//define the relay as an output
int green = 7;//deffine green led
int yellow = 6;//deffine yellow led
int red = 5;//deffine red led
void setup() {
pinMode(relay, OUTPUT);
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);

}

void loop() {

  int time = 0;
  int delaytime = 1000;

  digitalWrite(red, HIGH);//lights up the red LED
  if 
  (digitalRead(capteur) == HIGH)// check for movement
   {
    delay(5000);//wait 5 seconde
     if
     (digitalRead(capteur) == HIGH )//check if there is still movement after 5 seconds
     { digitalWrite(red, LOW);//lights down the red LED
       digitalWrite(green, HIGH);//lights up the green LED
       digitalWrite(relay, HIGH);//activate relay
       delay (30000);//wait 30 seconds
       digitalWrite(green, LOW);//lights down the green LED
       digitalWrite(yellow, HIGH);//lights up the yellow LED
       delay (25000);//wait 25 seconds
       digitalWrite(yellow, LOW);//lights down the yellow LED

        while(time < 5 ){//time is less than 5000
          delay(delaytime);//wait delaytime
          digitalWrite(red, HIGH);//lights up the red LED
          delay(delaytime);//wait delaytime
          digitalWrite(red, LOW);//lights down the red LED

          time = time + 1;// add delaytime to time
          delaytime = delaytime /2;//divide by 2 delaytime
          
        }

       digitalWrite(relay, LOW);//reaches the relay
       digitalWrite(red, HIGH);//lights up the red LED
       delay(60000);//wait a minute for the relay not to activate directly
     }
     

 
  }

}
