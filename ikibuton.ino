int led=10;
int buton1=5;
int buton2=6;
void setup() {
pinMode(led,OUTPUT);
pinMode(buton1,INPUT);
pinMode(buton2,INPUT);
}
void loop() {
if(digitalRead(buton_1)== 1){
digitalWrite(led,HIGH);
}
if(digitalRead(buton_2)== 1){
digitalWrite(led,LOW);
}
