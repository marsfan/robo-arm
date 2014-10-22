void setup(){
	for(int i = 2; i < 8; i++){
		pinMode(i, INPUT);
	}
	for(int i = 8; i < 14; i++){
		pinMode(i, OUTPUT);
	}
	int pinUp = 2;
	int pinDown = 3;
	Serial.begin(9600);
}

void loop(){
	if(digitalRead(2) == HIGH){
		//print up
		Serial.println("UP");
		}
	else if(digitalRead(3) == HIGH){
		//print down
		Serial.println("DOWN");
		}
	else if(digitalRead(2) == LOW && digitalRead(3) == LOW){
		Serial.println(" ");
		}
	}

