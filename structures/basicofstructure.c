#include<stdio.h>
int main(){
    struct pokemon{//user defined data type.
        int hp;
        int speed;
        int attack;
        char tier;
    }pikachu,charizard,mewtwo;
   // struct pokemon pikachu;
    printf("Enter Pikachu attack:");
    scanf("%d",&pikachu.attack);
    //pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';

   // struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    charizard.tier='S';

   // struct pokemon mewtwo;
    mewtwo.attack=170;
    mewtwo.hp=150;
    mewtwo.speed=200;
    mewtwo.tier='G';


    printf("%d",pikachu.attack);
  return 0;
}
/*Array used to store similar elements,and 
structure to store similar elements.*/