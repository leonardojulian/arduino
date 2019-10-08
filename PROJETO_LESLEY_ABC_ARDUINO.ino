//ALFABTETO INTERATIVO SENAI **LESLEY**
String voz;
int btnA = 2;
int btnB = 3;
int btnC = 4;
int btnD = 5;
int btnE = 6;
int btnF = 7;
int ledC = 12;
int ledE = 13;

void setup() {
  Serial.begin(9600);
  pinMode(ledC, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(btnA, INPUT_PULLUP);
  pinMode(btnB, INPUT_PULLUP);
  pinMode(btnC, INPUT_PULLUP);
  pinMode(btnD, INPUT_PULLUP);
  pinMode(btnE, INPUT_PULLUP);
  pinMode(btnF, INPUT_PULLUP);
  Serial.println("bem vindo ao alfabeto interativo");
}

void loop() {
  while (Serial.available()){  
  delay(10); 
  char c = Serial.read(); 
  if (c == '#') {break;}
  voz += c; 
  } 
  if (voz.length() > 0) {
    Serial.println(voz);

//CONFIRMAÇÃO LETRA A
     if(digitalRead(btnA)== HIGH && voz == "A" or digitalRead(btnB)== HIGH && voz == "B"
     or digitalRead(btnC)== HIGH and voz == "C" or digitalRead(btnD)== HIGH and voz == "D"
     or digitalRead(btnE)== HIGH and voz == "E" or digitalRead(btnF)== HIGH and voz == "F"){
         digitalWrite(ledC,HIGH);
         Serial.println("Parabéns você acertou!!!");
         delay(3000);
         digitalWrite(ledC,LOW);
        
       } 
         //if(digitalRead(btnA)== HIGH & voz != "A"){
         else {digitalWrite(ledE,HIGH); 
         Serial.println("tente outra vez");
         delay(3000);
         digitalWrite(ledE,LOW);
       }

//CONFIRMAÇÃO LETRA B
       /*if(digitalRead(btnB)== HIGH and voz == "B" ){
         digitalWrite(ledC,HIGH);
         Serial.println("Parabéns você acertou!!!");
         delay(3000);
         digitalWrite(ledC,LOW);
       }
         //if(digitalRead(btnB)== HIGH & voz != "A"){
         else{digitalWrite(ledE,HIGH); 
         Serial.println("tente outra vez");
         delay(300);
         digitalWrite(ledE,LOW);
       }

//CONFIRMAÇÃO LETRA C
       if(digitalRead(btnC)== HIGH and voz == "C" ){
         digitalWrite(ledC,HIGH);
         Serial.println("Parabéns você acertou!!!");
         delay(3000);
         digitalWrite(ledC,LOW);
       } 
         //if(digitalRead(btnC)== HIGH and voz != "C"){
         else{digitalWrite(ledE,HIGH); 
         Serial.println("tente outra vez");
         delay(300);
         digitalWrite(ledE,LOW);
       }
       
//CONFIRMAÇÃO LETRA D
       if(digitalRead(btnD)== HIGH and voz == "D" ){
         digitalWrite(ledC,HIGH);
         Serial.println("Parabéns você acertou!!!");
         delay(3000);
         digitalWrite(ledC,LOW);
       } 
         //if(digitalRead(btnD)== HIGH and voz != "D"){
         else{digitalWrite(ledE,HIGH); 
         Serial.println("tente outra vez");
         delay(300);
         digitalWrite(ledE,LOW);
       }
       
//CONFIRMAÇÃO LETRA E
       if(digitalRead(btnE)== HIGH and voz == "E" ){
         digitalWrite(ledC,HIGH);
         Serial.println("Parabéns você acertou!!!");
         delay(3000);
         digitalWrite(ledE,LOW);
       } 
         //if(digitalRead(btnE)== HIGH and voz != "E"){
         else{digitalWrite(ledE,HIGH); 
         //Serial.println("tente outra vez");
         delay(300);
         digitalWrite(ledE,LOW);
       }

//CONFIRMAÇÃO LETRA F
       if(digitalRead(btnF)== HIGH and voz == "F" ){
         digitalWrite(ledC,HIGH);
         Serial.println("Parabéns você acertou!!!");
         delay(3000);
         digitalWrite(ledC,LOW);
       } 
         //if(digitalRead(btnF)== HIGH and voz != "F"){
         else{digitalWrite(ledE,HIGH); 
         Serial.println("tente outra vez");
         delay(300);
         digitalWrite(ledE,LOW);
       }

     */  
voz="";


}
}


