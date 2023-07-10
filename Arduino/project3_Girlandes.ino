/*
  Clignotement aléatoire de 3 LED
  
  Câblage :

  La broche 13 est reliée à la LED verte (LED → la résistance → GND)
  La broche 12 est reliée à la LED orange (LED → la résistance → GND)
  La broche 11 est reliée à la LED rouge (LED → la résistance → GND)

*/

// déclare 3 variables nommées verte, orange, rouge de type entier
// permet de faire référence aux différentes broches de sortie dans le programme
int verte = 13;
int orange = 12;
int rouge = 11;
// déclare 2 variables de stockage
int randDelai;
int randEtat;

// le setup regroupe les instructions qui seront exécutées au démarrage du programme y compris quand on presse le bouton reset
void setup() {                
  // on initialise les 3 broches de l'Arduino en tant que sortie
  pinMode(verte, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(rouge, OUTPUT);
}

// fonction de tirage aléatoire pour la valeur donnée au délai
int attente() {
        randDelai = random(20, 150);
        return (randDelai);
}

// fonction de tirage aléatoire pour la valeur de l'état d'une sortie
int etat() {
        randEtat = random(0, 2);
        return (randEtat);
}

// contient les instructions que l'on souhaite voir exécutées encore et encore tant que l'Arduino est alimenté
void loop() {
  digitalWrite(orange, etat());   // allumer la LED orange avec la valeur retournée par la fonction etat()
  delay(attente());               // delai avec la valeur retournée par la fonction attente()
  digitalWrite(rouge, etat());
  delay(attente());
  digitalWrite(verte, etat());
}
