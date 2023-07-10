/* Initialisation des constantes,
   ces valeurs ne pourront pas être
   modifiées dans la suite du programme
*/
//Coté voiture
const int rouge = 12;   //La led rouge sera connectée à la PIN 12
const int jaune = 11;   //La led jaune sera connectée à la PIN 11
const int verte = 10;   //La led verte sera connectée à la PIN 10
//Coté piéton:
const int rougepieton = 9;   //La led rouge sera connectée à la PIN 9
const int vertepieton = 8;   //La led verte sera connectée à la PIN 8
// Vérification de l'état du bouton
const int bouton = 2;      // Le bouton poussoir est connecté à la PIN 2


// Initialisation de variables qui pourront être modifiées par la suite

int boutonappuye=0; // indicateur qui vaut 1 quand le bouton a été appuyé, et 0 si le bouton n'a pas été appuyé

void setup() {
  //Les 5 PIN voiture et pieton sont des sorties: OUTPUT
  pinMode(rouge, OUTPUT);  
  pinMode(jaune, OUTPUT);
  pinMode(verte, OUTPUT);    
  pinMode(rougepieton, OUTPUT);  
  pinMode(vertepieton, OUTPUT);  
  //La PIN bouton est une entrée INPUT
  pinMode(bouton, INPUT);   
}

void loop() {
  /* C'est la boucle qui commence (LOOP).
   Il faut initialiser toutes les sorties.
  JAUNE est allumée, ROUGE et VERTE sont éteintes
  Pour le pieton, la led rouge est allumée, et la verte éteinte
  */
   
   digitalWrite(jaune, HIGH);
   digitalWrite(rouge, LOW);// ne pas oublier d'initialiser le rouge
   digitalWrite(verte, LOW);
   digitalWrite(rougepieton, HIGH);
   digitalWrite(vertepieton, LOW);
   delay(1000); //pause dans cet état pendant 1 seconde

// Le feu passe au rouge et pour les pietons le feu passe au vert
 
   digitalWrite(jaune, LOW);
   digitalWrite(rouge, HIGH);
   digitalWrite(rougepieton, LOW);
   digitalWrite(vertepieton, HIGH);

/* La durée totale est de 3 secondes si le bouton n'a pas été appuyé, sinon, c'est 5 secondes
*  Il faut donc attendre d'abord 3 secondes dans cet état
*  attendre eventuellement encore 2 secondes supplémentaires si le bouton appuyé
*  c'est ainsi que sont construites les lignes suivantes
*/
  delay(3000);          //pause dans cet état pendant 3 secondes
 
  if (boutonappuye==1){
    delay(2000);        // Si le bouton a été appuyé alors attend encore 2 secondes
    boutonappuye=0;     // réinitialise boutonappuye
  }

// Le feu (voiture) passe au vert tandis que le feu pieton passe au rouge (en n'oubliant pas d'eteindre les autres qui sont allumés)
   digitalWrite(rougepieton, HIGH);
   digitalWrite(vertepieton, LOW);
   digitalWrite(rouge, LOW);
   digitalWrite(verte, HIGH);

   delay(3000); // on attend 3 secondes
   if (digitalRead(bouton) == HIGH) {    // si bouton appuyé, alors on l'enregistre en changeant la valeur de boutonappuye. Ca servira à allonger le temps du feu rouge
      boutonappuye=1;
   }
// Ca reboucle (LOOP), et le feu va passer à l'état JAUNE
}
