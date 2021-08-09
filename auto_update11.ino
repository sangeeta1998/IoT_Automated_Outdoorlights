String header = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
 
String html_1 = R"=====(
<!DOCTYPE html>
<html>
 <head>
 <meta name='viewport' content='width=device-width, initial-scale=1.0'/>
 <meta charset='utf-8'>
 <meta http-equiv='refresh' content='5'>
 <style>
   body {font-size:100%;} 
   #main {display: table; margin: auto;  padding: 0 10px 0 10px; } 
   h2 {text-align:center; } 
   p { text-align:center; }
 </style>
   <title>Auto Update Example Using HTML</title>
 </head>
 
 <body>
   <div id='main'>
     <h2>Auto Update Example Using HTML</h2>
     <div id='val'> 
       <p>Status = %val%</p>
     </div>
   </div> 
 </body>
</html>
)====="; 
 #include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
 SoftwareSerial NodeMCU(D2,D3);
// change these values to match your network
char ssid[] = "Motor";       //  your network SSID (name)
char pass[] = "useitbro";          //  your network password
 
WiFiServer server(80);
 
String tmpString = "";
unsigned int count = 0; 
void setup() 
{
  NodeMCU.begin(4800);
  pinMode(D2,INPUT);
  pinMode(D3,OUTPUT);
  pinMode(A0,INPUT);
    Serial.begin(115200);
    Serial.println();
    Serial.println("Serial started at 115200");
    Serial.println();
 
    // Connect to a WiFi network
    Serial.print(F("Connecting to "));  Serial.println(ssid);
    WiFi.begin(ssid, pass);
 
    while (WiFi.status() != WL_CONNECTED) 
    {
        Serial.print(".");
        delay(500);
    }
 
    Serial.println("");
    Serial.println(F("[CONNECTED]"));
    Serial.print("[IP ");              
    Serial.print(WiFi.localIP()); 
    Serial.println("]");
 
    
    server.begin();
    Serial.println("Server started");
 
} 
 
void loop() 
{
   
   if(NodeMCU.available()>0){
  while(NodeMCU.available()>0)
  {
float   val1= NodeMCU.parseFloat();
   Serial.println(val1);
   String str1="GOOD";
  String str2="DAMAGE";
    
   WiFiClient client = server.available();
   if (!client)  {  return;  }
    
    //int val=analogRead(A0);
   // count ++;
 if(val1==0){
    tmpString = html_1;
    tmpString.replace("%val%", String(str1) );
 }
  else{
    tmpString = html_1;
    tmpString.replace("%val%", String(str2) );
 }
 /*else
 {
  tmpString = html_1;
  String str="Light is currently OFF";
    tmpString.replace("%val%", String(str) );
 }*/
      
 
   // Serial.print("count = "); Serial.println(val); 
 client.flush();
    client.print( header );
    client.print( tmpString );
 
  }
   }
  else
  {
    WiFiClient client = server.available();
   if (!client)  {  return;  }
    tmpString = html_1;
  String str="Light is currently OFF";
    tmpString.replace("%val%", String(str) );
    client.flush();
    client.print( header );
    client.print( tmpString );
   
  }
  
 
  delay(1000);
 
  
}
