
// on assigne chaque led a une broche
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;
const int PD = 9;
const int Red = 10;
const int Green = 11;
const int Yellow = 12;
const int Bleu = 13;

void setup ()
{
// definition des broches de sorties

pinMode( A,OUTPUT);
pinMode( B,OUTPUT);
pinMode( C,OUTPUT);
pinMode( D,OUTPUT);
pinMode( E,OUTPUT);
pinMode( F,OUTPUT);
pinMode( G,OUTPUT);
pinMode( PD,OUTPUT);
pinMode( Red,OUTPUT);
pinMode( Green,OUTPUT);
pinMode( Yellow,OUTPUT);
pinMode( Bleu,OUTPUT);

// mise à l"état HAUT de ces sorties pr eteindre les LED de l'afficheur
digitalWrite (A ,HIGH);
digitalWrite (B ,HIGH);
digitalWrite (C ,HIGH);
digitalWrite (D ,HIGH);
digitalWrite (E ,HIGH);
digitalWrite (F ,HIGH);
digitalWrite (G ,HIGH);
}

void loop ()
{
  //affichage du chiffre 1 celon le tableau
  
  digitalWrite (Bleu, HIGH);
  digitalWrite (Yellow ,HIGH);
  digitalWrite (A ,HIGH);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,HIGH);
  digitalWrite (Red ,HIGH);
delay(1000);

  //affichage du chiffre 2 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 3 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 4 celon le tableau

  digitalWrite (A ,HIGH);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 5 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 6 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 7 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 8 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 9 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 0 celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre 0 celon le tableau en clignotant ferme

  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,LOW);
  digitalWrite (Green, HIGH);
  digitalWrite (Red, LOW);
delay(800);

  //affichage du chiffre 0 celon le tableau en clignotant ouvert

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,LOW);
delay(800);

  //affichage du chiffre 0 celon le tableau en clignotant ferme

  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,LOW);
delay(800);

  //affichage du chiffre 0 celon le tableau en clignotant ouvert

  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,LOW);
delay(800);

  //affichage du chiffre 0 celon le tableau en clignotant ferme

  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,LOW);
delay(3000);


  //affichage du lettre D celon le tableau

  digitalWrite (A ,HIGH);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre O celon le tableau

  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre N celon le tableau

  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre E celon le tableau

  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du chiffre - celon le tableau

  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre R celon le tableau

  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre E celon le tableau
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre S (comme chifre 5) celon le tableau
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre E celon le tableau
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du lettre T celon le tableau
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //Le 7 segmant est tout noir
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,LOW);
delay(1000);

  //La lampe se clignote:
  digitalWrite (Red,HIGH);
  digitalWrite (Yellow ,HIGH);
  delay(800);
  digitalWrite (Yellow,LOW);
  delay(800);
  digitalWrite (Yellow ,HIGH);
  delay(800);
  digitalWrite (Yellow,LOW);
  delay(800);
    digitalWrite (Yellow ,HIGH);
  delay(800);
  digitalWrite (Bleu,LOW);
  digitalWrite (Yellow,LOW);
  delay(800);
  digitalWrite (Yellow ,HIGH);
  delay(800);
  digitalWrite (Yellow,LOW);
  digitalWrite (Green, LOW);
  digitalWrite (Bleu,HIGH);
}

