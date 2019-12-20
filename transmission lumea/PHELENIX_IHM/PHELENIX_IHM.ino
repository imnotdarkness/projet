  String Number = "002";    // definit le numero du LUMEA
  String chaine="";         // Mémorise les caractère reçus et forme une chaine de caractères.
  
  char caractere=0;         // Mémorise le caractère lu.
  int compte_caract=0;
  
  String lecture_donnees="?"+ Number;  // Chaine de caractère attendu par le programme pour repondre.
 float VPS1 = 5;
 float VPS2 = 56;
 float VEol = 12;
 float a =10.1;
 float analogPin=0;
 float Vbat =0;
  char start_of_text = 2;   // Caractère spéciaux de commande
  char end_of_text = 3;
  char caract_null = 0;
 
void setup() {
 
  Serial.begin(9600); // A compléter selon l'analyse du signal
  analogReference(DEFAULT);
 
  }
void loop () {
    Vbat= analogRead(analogPin);

   analogWrite(analogPin, 5/1023);
  Vbat= analogRead(analogPin);
  Vbat = Vbat* 0.0048;
   
  while (Serial.available() > 0)
  {
    caractere = Serial.read();
    chaine += (char)caractere;
    compte_caract ++;
   // Serial.print(compte_caract);
   
  }
  if (compte_caract == 6){
      //if (chaine.startsWith(lecture_donnees,0)){
Serial.print(start_of_text);
Serial.print("Vbat=");
Serial.print(Vbat);
Serial.print("VPS1=");
Serial.print(VPS1);
Serial.print(caract_null);
Serial.print("VPS2=");
Serial.print(VPS2);
Serial.print(caract_null);
Serial.print("VEol=");
Serial.print(VEol);
Serial.print(caract_null);
Serial.print("JOUR");
Serial.print("NbPAS=60108");
Serial.print("NLED=0");
Serial.print(end_of_text);
      
/* En utilisant la commande Serial.print (); 
   compléter cette partie en reprenant la 
   décomposition de votre tableau
*/
       
        
        chaine="";
        compte_caract=0;
    //  }
  }  
 
  
     
}
