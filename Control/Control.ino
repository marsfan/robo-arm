void setup(){
	for(int i = 2; i < 8; i++){
		pinMode(i, INPUT_PULLUP);
	}
	for(int i = 8; i < 14; i++){
		pinMode(i, OUTPUT);
	}
	int pinUp = 4;
	int pinDown = 3;
	Serial.begin(9600);
}

void loop(){
	if(digitalRead(4) == HIGH){
		//print up
		Serial.println("UP");
		digitalWrite(8, HIGH);
		}
	else if(digitalRead(3) == HIGH){
		//print down
		Serial.println("DOWN");
		digitalWrite(9, HIGH);
		}else{
			digitalWrite(9, LOW);
			digitalWrite(8, LOW);
		}
}
