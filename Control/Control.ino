int pinUp = 2;
int pinDown = 3;
	
void setup(){
	//init pins for i/o shield
	for(int i = 2; i < 8; i++){
		pinMode(i, INPUT_PULLUP);
	}
	for(int i = 8; i < 14; i++){
		pinMode(i, OUTPUT);
	}
	//set up serial monitor
	Serial.begin(9600);
}

void loop(){
	//if switch is switched to up
	if(digitalRead(pinUp) == LOW){
		//print up
		Serial.println("UP");
		//light up led on pin 8
		digitalWrite(8, HIGH);
		}
	//if switch is switched to down
	else if(digitalRead(pinDown) == LOW){
		//print down
		Serial.println("DOWN");
		//light up led on pin 9
		digitalWrite(9, HIGH);
	//otherwise
	}else{
		//turn off all LEDs and print off
		digitalWrite(8, LOW);
		digitalWrite(9, LOW);
		Serial.println("OFF");
}

}
