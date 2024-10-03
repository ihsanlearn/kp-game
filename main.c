#include <stdio.h>
#include "libs.h"

struct userChoice {
     int heroChoice;
     int attEq;
     int defEq;
};

struct userChoice getUserChoice() {
     struct userChoice choice;
     printf("Input your value below: ");
     scanf("%d %d %d", &choice.heroChoice, &choice.attEq, &choice.defEq);
     return choice;
}

struct basicEq {
     float hp;
     float att;
     float def;
};

struct character {
     struct basicEq basicEq;
     float attEq; 
     float defEq;
};

struct character getHero(int heroChoice, int attEq, int defEq) {
     struct character hero;
     hero.basicEq.hp = 500;
     
     switch (heroChoice) {
          case 1:
               hero.basicEq.att = 13;
               hero.basicEq.def = 8;
               break;
          case 2:
               hero.basicEq.att = 12;
               hero.basicEq.def = 7;
               break;
          case 3:
               hero.basicEq.att = 7;
               hero.basicEq.def = 13;
               break;
          case 4:
               hero.basicEq.att = 9;
               hero.basicEq.def = 10;
               break;
          case 5:
               hero.basicEq.att = 9;
               hero.basicEq.def = 13;
               break;
          
          default:
               break;
     }

     switch (attEq) {
          case 1:
               hero.attEq = 18;
               break;
          case 2:
               hero.attEq = 12;
               break;
          case 3:
               hero.attEq = 15;
               break;
          case 4:
               hero.attEq = 19;
               break;
          
          default:
               break;
     }

     switch (defEq) {
          case 1:
               hero.defEq = 3;
               break;
          case 2:
               hero.defEq = 6;
               break;
          case 3:
               hero.defEq = 4;
               break;
          
          default:
               break;
     }

     return hero;
}

int main() {
     struct userChoice myHeroChoice;
     struct userChoice enemyChoice;

     myHeroChoice = getUserChoice();
     enemyChoice = getUserChoice();

     struct character myHero;
     struct character enemy;

     myHero = getHero(myHeroChoice.heroChoice, myHeroChoice.attEq, myHeroChoice.defEq);

     return 0;
}