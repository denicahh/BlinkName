
// ------------
// Blink an LED in Morse Code
// ------------
/*

This program will blink an led on and off in morse code to spell out D E N I C A.
It blinks the D7 LED on your Particle device. If you have an LED wired to D6, it will blink that LED as well.

-------------*/

// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

int led1 = D6; // Instead of writing D6 over and over again, we'll write led1
// You'll need to wire an LED to this one to see it blink.

int led2 = D7; // Instead of writing D7 over and over again, we'll write led2
// This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.

// Having declared these variables, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

	// We are going to tell our device that D6 and D7 ( led1 and led2 ) are going to be output
	// (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)

	// It's important you do this here, inside the setup() function rather than outside it or in the loop function.

	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
    
    //D
    
	// To blink the LED, first we'll turn it on...
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	// We'll leave it on for 2 seconds...
	delay(2000);

	// Then we'll turn it off...
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	// Wait 1 second...
	delay(1000);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	// We'll leave it on for 1/2 second...
	delay(500);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(300);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(500);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(3000);
	
	    //E
    

	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(500);

	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(3000);
	
	    //N
    
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(2000);


	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(1000);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(500);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	
	delay(3000);
	
	    //I
    
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(500);

	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(300);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	delay(500);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	delay(3000);
	
	    //C
    
    
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	
	delay(2000);


	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	
	delay(1000);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	
	delay(500);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	
	delay(300);
	

	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	
	delay(2000);

	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	
	delay(1000);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	
	delay(500);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	
	delay(3000);
	
		
	    //A
    
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	
	delay(500);

	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	
	delay(300);
	
	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);

	
	delay(2000);
	
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);

	// Wait 5 seconds to signal end of message
	delay(5000);

	// And repeat!
}
