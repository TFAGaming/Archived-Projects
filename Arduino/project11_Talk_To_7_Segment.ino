// on assigne chaque led a une broche
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 9;
const int G = 8;
const int PD = 7;

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
  //affichage du Lettre H celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,LOW);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre E celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre L celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,HIGH);
delay(2000);

  //affichage du Lettre O celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre - celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre P celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre K celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre P celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre - celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre P celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,LOW);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre E celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre C celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre H celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre E celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre N celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,LOW);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);
  //affichage du Lettre E celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre G celon le tableau
  
  digitalWrite (A ,LOW);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,LOW);
  digitalWrite (D ,LOW);
  digitalWrite (E ,LOW);
  digitalWrite (F ,LOW);
  digitalWrite (G ,HIGH);
  digitalWrite (PD ,HIGH);
delay(1000);

  //affichage du Lettre - celon le tableau
  
  digitalWrite (A ,HIGH);
  digitalWrite (B ,HIGH);
  digitalWrite (C ,HIGH);
  digitalWrite (D ,HIGH);
  digitalWrite (E ,HIGH);
  digitalWrite (F ,HIGH);
  digitalWrite (G ,LOW);
  digitalWrite (PD ,HIGH);
delay(1000);
}
