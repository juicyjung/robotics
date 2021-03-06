#pragma config(Sensor, S3,     reflectedValue, sensorEV3_Color)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define THRESHOLD 50

task main()  {
	int count = 0;

	while(1){
		motor[motorB]=30;
		motor[motorC]=30;

		while(SensorValue(reflectedValue)>THRESHOLD){}
		count ++;
		motor[motorB]=0;
		motor[motorC]=0;
		for (int i=0; i<count; i++){
			playSound(soundBeepBeep);
			wait1Msec(1000);
		}

		if(count == 4)
			break;

		motor[motorB]=30;
		motor[motorC]=30;
		while(SensorValue(reflectedValue)<THRESHOLD){}
	}
}
