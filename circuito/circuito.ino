int led = 3;
int pulsador = 4; 
int flotaSuperior = 5;
int flotaInferior = 6;

unsigned long tiempo;
unsigned long tiempoAnterior;
int retardo = 5000;
int estado = HIGH;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pulsador, INPUT_PULLUP);
  pinMode(flotaSuperior, INPUT_PULLUP);
  pinMode(flotaInferior, INPUT_PULLUP);
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
