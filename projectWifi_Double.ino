String header = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
 String str="Power OFF";
 String html_3 = R"=====(
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
div{
 background-color:#19beff;
 text-align:center; 
 border-radius: 10px;}
     .centered-wrapper {
    position: relative;
    text-align: center;
}
.centered-wrapper:before {
    content: "";
    position: relative;
    display: inline-block;
    width: 0; height: 100%;
    vertical-align: middle;
}
.centered-content {
    display: inline-block;
    vertical-align: middle;
}
     .button{
          {background-color:brown;}
     }
h2{
  color:#191970;

}
span{color:#ff0000;
}
    .triangle {
    height: 0;
    width: 0;
    border-left: 5px solid #ff4136;
    border-right: 5px solid transparent;
    border-bottom: 5px solid transparent;
    border-top: 5px solid transparent;
}



 </style>
  <title>Outdoor Light Automation</title>
 
 </head>
 
 <body class="centered-wrapper" style="background-color:#001f3f;">
 <br/><br/><br/><br/><br/><br/><br/>
 <div class="centered-content">
  <h2><b><u>Live LED Status</u></b></h2><br/>
   &nbsp&nbsp  <font color="#191970"><b>LED_1 STATUS  : </b></font><button type="button" style="background-color:grey; width:150px; color: aliceblue;" > %val1% </button>&nbsp&nbsp</br></br>
    &nbsp&nbsp <font color="#191970"><b>LED_2 STATUS  : </b></font><button type="button" style="background-color: grey;width:150px; color: aliceblue;"> %val2% </button>&nbsp&nbsp</br></br>
    &nbsp&nbsp <font color="#191970"><b>LED_3 STATUS  :</b> </font><button type="button" style="background-color: grey;width:150px; color: aliceblue;"> %val3% </button>&nbsp&nbsp</br></br>
  
 </div> 
 </body>
</html>
)=====";
 String html_2 = R"=====(
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
div{
 background-color:#19beff;
 text-align:center; 
 border-radius: 10px;}
     .centered-wrapper {
    position: relative;
    text-align: center;
}
.centered-wrapper:before {
    content: "";
    position: relative;
    display: inline-block;
    width: 0; height: 100%;
    vertical-align: middle;
}
.centered-content {
    display: inline-block;
    vertical-align: middle;
}
     .button{
          {background-color:brown;}
     }
h2{
  color:#191970;

}
span{color:#ff0000;
}
    .triangle {
    height: 0;
    width: 0;
    border-left: 5px solid #ff4136;
    border-right: 5px solid transparent;
    border-bottom: 5px solid transparent;
    border-top: 5px solid transparent;
}



 </style>
  <title>Outdoor Light Automation</title>
 
 </head>
 
 <body class="centered-wrapper" style="background-color:#001f3f;">
 <br/><br/><br/><br/><br/><br/><br/>
 <div class="centered-content">
  <h2><b><u>Live LED Status</u></b></h2><br/>
   &nbsp&nbsp  <font color="#191970"><b>LED_1 STATUS  : </b></font><button type="button" style="background-color:red; width:150px; color: aliceblue;" > %val1% </button>&nbsp&nbsp</br></br>
    &nbsp&nbsp <font color="#191970"><b>LED_2 STATUS  : </b></font><button type="button" style="background-color: green;width:150px; color: aliceblue;"> %val2% </button>&nbsp&nbsp</br></br>
    &nbsp&nbsp <font color="#191970"><b>LED_3 STATUS  :</b> </font><button type="button" style="background-color: green;width:150px; color: aliceblue;"> %val3% </button>&nbsp&nbsp</br></br>
    <span class="triangle"></span><marquee scrollamount="8"
direction="left"
behavior="scroll"><span><b>
-- LED_1 is not working --</b></span>
</marquee>
 </div> 
 </body>
</html>
)=====";
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
div{
 background-color:#19beff;
 text-align:center; 
 border-radius: 10px;}
     .centered-wrapper {
    position: relative;
    text-align: center;
}
.centered-wrapper:before {
    content: "";
    position: relative;
    display: inline-block;
    width: 0; height: 100%;
    vertical-align: middle;
}
.centered-content {
    display: inline-block;
    vertical-align: middle;
}
     .button{
          {background-color:brown;}
     }
h2{
  color:#191970;

}
span{color:#ff0000;
}
    .triangle {
    height: 0;
    width: 0;
    border-left: 5px solid #ff4136;
    border-right: 5px solid transparent;
    border-bottom: 5px solid transparent;
    border-top: 5px solid transparent;
}



 </style>
  <title>Outdoor Light Automation</title>
 
 </head>
 
 <body class="centered-wrapper" style="background-color:#001f3f;">
 <br/><br/><br/><br/><br/><br/><br/>
 <div class="centered-content">
  <h2><b><u>Live LED Status</u></b></h2><br/>
   &nbsp&nbsp  <font color="#191970"><b>LED_1 STATUS  : </b></font><button type="button" style="background-color:green; width:150px; color: aliceblue;" > %val1% </button>&nbsp&nbsp</br></br>
    &nbsp&nbsp <font color="#191970"><b>LED_2 STATUS  : </b></font><button type="button" style="background-color: green;width:150px; color: aliceblue;"> %val2% </button>&nbsp&nbsp</br></br>
    &nbsp&nbsp <font color="#191970"><b>LED_3 STATUS  :</b> </font><button type="button" style="background-color: green;width:150px; color: aliceblue;"> %val3% </button>&nbsp&nbsp</br></br>
  
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
//unsigned int count = 0; 
void setup() 
{
  NodeMCU.begin(4800);
  
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
   
   
    
  while(NodeMCU.available()>0)
  {
    //if(NodeMCU.parse()=="\n"){
float   val1= NodeMCU.parseInt();
   Serial.println(val1);
   String str1="Working";
  String str2="Not Working";
    
  
    
 if(val1==0){
  WiFiClient client = server.available();
   if (!client)  {  return;  } 
    tmpString = html_1;
    tmpString.replace("%val1%", String(str1) );
    tmpString.replace("%val2%", String(str1) );
    tmpString.replace("%val3%", String(str1) );
    client.flush();
    client.print( header );
    client.print( tmpString );
    delay(30);
 
 }
  else {
    WiFiClient client = server.available();
   if (!client)  {  return;  } 
    tmpString = html_2;
    tmpString.replace("%val1%", String(str2) );
    tmpString.replace("%val2%", String(str1) );
    tmpString.replace("%val3%", String(str1) );
    client.flush();
    client.print( header );
    client.print( tmpString );
    delay(30);
 
 }
   // Serial.print("count = "); Serial.println(val); 
 
  
    }
   
if (!NodeMCU.available()){  
  WiFiClient client = server.available();
   if (!client)  {  return;  } 
    tmpString = html_3;
  
    tmpString.replace("%val1%", String(str) );
    tmpString.replace("%val2%", String(str) );
    tmpString.replace("%val3%", String(str) );
    client.flush();
    client.print( header );
    client.print( tmpString );
   delay(30);
    
  }
  
 
  
 
  
}
