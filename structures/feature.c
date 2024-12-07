#include<stdio.h>
#include<string.h>
int main()
{
   typedef struct pokemon{
       int hp;
       int attack;
       int speed;
       char tier;
       char name[15]; 
    }pokemon;
    pokemon a,b,c;
    a.hp=100;
    a.attack=100;
    a.speed=200;
    a.tier='A';
    strcpy(a.name,"Charizard");
    b=a;//deep copy
    strcpy(b.name,"pikachu");
 printf("%s ",b.name);
 return 0;
}
//If we change b then this will not change in A.