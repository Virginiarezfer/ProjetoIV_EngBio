// C++ code
//

int Led = 13; //porta Led conectado

//definir as variáveis e os caracteres para ligar e desligar os Leds
char x = 'L'; //caracter entre aspas simples
char y = 'D';
char caracter;

//int estadoLed;

void setup()
{
  pinMode(Led, OUTPUT);
  Serial.begin(9600); //Inicia comunicação serial a 9600 bits/seg
  
  Serial.println("\n\n\n");
  Serial.println("INICIADO O SISTEMA...");
  Serial.print(x);
  Serial.print(" para ligar ou ");
  Serial.print(y);
  Serial.print(" para desligar o LED:");
  Serial.println();
}

void loop()
{
  if (Serial.available() > 0){//Verifica se foi digitado algo
    
    caracter = Serial.read(); 
    
     if (caracter == x ){
      		digitalWrite(Led,HIGH); //Comando para acender o LED
      		Serial.print("Voce digitou ");
      		Serial.println(caracter);
      		Serial.print("Led ligado");
      		Serial.print("Digite ");
      		Serial.print(x);
      		Serial.println(" para liga ro LED!");
      		Serial.println();
     }
    
    else if (caracter == y){
      		digitalWrite(Led,LOW); //Comando para acender o LED
      		Serial.print("Voce digitou ");
      		Serial.println(caracter);
      		Serial.print("Led desligado");
      		Serial.print("Digite ");
      		Serial.print(x);
      		Serial.println(" para liga ro LED!");
      		Serial.println();
     }
    
    else if (caracter != x && caracter !=y){
      		Serial.print("Voce digitou um valor não aceito!");
      		Serial.print("Digite ");
      		Serial.print(x);
      		Serial.println(" para liga ou");
      		Serial.print(y);
      		Serial.println(" desligar o LED:");
      		Serial.println("\n\n");
    }
    
    delay(500);
  }
    
}