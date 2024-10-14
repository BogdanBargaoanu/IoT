void setup () {
Serial.begin(9600);
}

void loop () {
Serial.println(citesteTempInCelsius(10));
}

float citesteTempInCelsius(int count) {
float temperaturaMediata = 0;
float sumaTemperatura;
for (int i =0; i<10; i++) {
int reading = analogRead(0);
float voltage = reading * 5.0;
voltage /= 1024.0;
float temperatureCelsius = (voltage - 0.5) * 100 ;
sumaTemperatura = sumaTemperatura + temperatureCelsius;
}
return sumaTemperatura / (float) count;

}


