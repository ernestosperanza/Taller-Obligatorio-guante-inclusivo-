int pulgar= A0;
int lecturaPulgar = 0; 
int indice= A1;
int lecturaIndice = 0; 
int medio = A2;
int lecturaMedio = 0; 
int anular= A3;
int lecturaAnular = 0; 
int menique= A4;
int lecturaMenique = 0;

void setup() {

Serial.begin(9600);
pinMode (pulgar, INPUT); 
pinMode (indice, INPUT); 
pinMode (medio, INPUT); 
pinMode (anular, INPUT); 
pinMode (menique, INPUT);

}

void loop() {

lecturaPulgar= analogRead (pulgar); 
lecturaIndice= analogRead (indice); 
lecturaMedio= analogRead (medio); 
lecturaAnular= analogRead (anular); 
lecturaMenique= analogRead (menique);
delay(200);

if (lecturaPulgar <300 && lecturaIndice <=300 && lecturaMedio <=300 && lecturaAnular <=300) {
Serial.println("E");
delay(300);
};

if (lecturaPulgar >=300 && lecturaIndice <=300 && lecturaMedio <=200 && lecturaAnular <=200) {
Serial.println("A");
delay(300);
};

if (lecturaPulgar >=300 && lecturaPulgar <400 && lecturaIndice <=300 && lecturaMedio <=300 && lecturaAnular <=300 && lecturaAnular >200) {
Serial.println("O");
delay(300);
};

if (lecturaPulgar >=400 && lecturaIndice <=300 && lecturaMedio <=300 && lecturaAnular <=300) {
Serial.println("I"); 
delay(300);
};

if (lecturaPulgar <250 && lecturaIndice >250 && lecturaMedio >250 && lecturaAnular >250) {
Serial.println("U"); 
delay(300);
};

}
