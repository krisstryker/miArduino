int led = 3;
int pulsador = 4; 

unsigned long tiempo;
unsigned long tiempoAnterior;
int retardo = 5000;
int estado = HIGH;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT);
}

void loop() {
 tiempo = millis();
 temporizador();
}

void temporizador(){//Funcion de temporizado
  if (tiempo - tiempoAnterior < retardo){
    digitalWrite(led, estado);
}
  else{
    if(retardo == 5000){
      retardo = 10000;
}

    else{
      retardo = 5000;  
}
      temporizador();
 }
}
