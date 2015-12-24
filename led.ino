int data; //data değişkeninin türünü integer ayarlıyoruz.
int led=13; //led değişkeni 13 değerine atayıp türünü integer ayarlıyoruz.
void setup()
{
pinMode(led,OUTPUT); //13. pinimizi(led=13) çıkış yapıyoruz.  
Serial.begin(9600);   //Seri iletişimi başlatır
}
void loop()
{
if(Serial.available()) // Eğer Bluetooth bağlantısı varsa kodları çalıştırır.
{
  int data = Serial.read(); //Gelen değeri okuyoruz. ve data değişkenine aktarıyoruz.
  delay(100);
  if(data==1)  //Eğer Android'ten gelen değer 1 ise
    digitalWrite(led,1); //digitalWrite ile 13. pini 1 yani (HIGH) yaparak Ledimizi yakıyoruz. 
  if(data==2)  //Eğer Android'ten gelen değr  2 ise
    digitalWrite(led,0); //digitalWrite ile 13. pini 0 yani (LOW) yaparak Ledimizi söndürüyoruz. 
  delay(100);
}
}
