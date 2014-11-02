//declare variables for toggle switch
int pinUp = 2;
int pinDown = 4;
//declare varaibles for motor shield
int bleed = 12;
int valve = 13;
int bleedPower = 3;
int valvePower = 11;
//declare variables for valve states
int valveOff = LOW;
int bleedOn = HIGH;
int valveOn = HIGH;
int bleedOff = LOW;
	
void setup(){
	//init pins for toggle switch
	pinMode(pinUp, INPUT_PULLUP);
	pinMode(pinDown, INPUT_PULLUP):	
	//set up motor shield
	pinMode(bleed, OUTPUT);
	pinMode(valve, OUTPUT);
	pinMode(bleedPower, OUTPUT);
	pinMode(valvePower, OUTPUT);
	//set up serial monitor
	Serial.begin(9600);
}

void loop(){
	//if switch is switched to up
	if(digitalRead(pinUp) == LOW){
		//print up
		Serial.println("UP");
		//open valve
		analogWrite(valvePower, 255);
		digitalWrite(valve, valveOn);
		digitalWrite(bleed, bleedOff);
		}
	//if switch is switched to down
	else if(digitalRead(pinDown) == LOW){
		//print down
		Serial.println("DOWN");
		//open bleed valve
		analogWrite(bleedPower, 255);
		digitalWrite(bleed, bleedOn);
		digitalWrite(valve, valveOff);
	//if pin is in off position
	}else{
		Serial.println("OFF");
		digitalWrite(valve, valveOff);
		digitalWrite(bleed, bleedOff);
		
}

}
