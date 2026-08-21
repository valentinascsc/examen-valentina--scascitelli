Rojo 8
Amarillo 9
Verde 10
Todos los cátodos GND
Paso 5: Programar el semáforo
Copiar el siguiente código:
int rojo = 8;
int amarillo = 9;
int verde = 10;
void setup() {
pinMode(rojo, OUTPUT);
pinMode(amarillo, OUTPUT);
pinMode(verde, OUTPUT);
}
void loop() {
// Verde encendido
digitalWrite(verde, HIGH);
digitalWrite(amarillo, LOW);
digitalWrite(rojo, LOW);
delay(5000);
// Amarillo encendido
digitalWrite(verde, LOW);
digitalWrite(amarillo, HIGH);
delay(2000);

// Rojo encendido
digitalWrite(amarillo, LOW);
digitalWrite(rojo, HIGH);
delay(5000);
}