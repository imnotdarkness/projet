#include <SoftwareSerial.h>
SoftwareSerial sim8001(7, 8); //broche rx et tx
String SIM_PIN = String ("XXXX");
char conf = "OK";
char reseau = "OK";
char reseau2 = "+CFUN:1"
char notifi = 0;

void setup() {
  Serial.begin(9600);
  sim8001.begin(9600);
  sim8001.print("AT+CPIN=");
  sim8001.println(SIM_PIN);
  

}

void loop() {


 // sim8001.print("AT+CFUN=");
 // if (reseau === sim8001.read()|| reseau2 === sim8001.read()){
    




  if (LUMEA === 0;){
    
    sim8001.println("AT+CSCS="GSM")
    if (conf === sim8001.read()){
      sim8001.print("AT+CMGS=");
      sim8001.print(`"+XXXXXXXXXXX"`);
      sim8001.print("> lumea n°");
      sim8001.print(lumeaid);
      sim8001.print(erreurname);
      
       sim8001.println("<Ctrl+Z>");

        
  }
if (sim8001.available()){
      char i = sim8001.read();
      
      virgule = i.indexOf(",");
      if (virgule>=0){
      messagenum = i.substring(virgule);

      sim8001.print("AT+CMGR=");
      sim8001.print(messagenum);
      message=sim8001.read();
      if (message!==="OK"){

        delay(300000);
          sim8001.println("AT+CSCS="GSM")
    if (conf === sim8001.read()){
      sim8001.print("AT+CMGS=");
      sim8001.print(`"+XXXXXXXXXXX"`);
      sim8001.print("> lumea n°");
      sim8001.print(lumeaid);
      sim8001.print(erreurname);
      
       sim8001.println("<Ctrl+Z>");

      
    }

      }
}







  
 }
 
  sim8001.println();
  
}

  

}
