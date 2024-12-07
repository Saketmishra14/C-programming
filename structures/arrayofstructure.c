#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    
    pokemon arr[3];
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';
    strcpy(arr[0].name,"charizard");

     arr[1].attack=150;
    arr[1].hp=120;
    arr[1].speed=230;
    arr[1].tier='G';
    strcpy(arr[1].name,"Mewtwo");

     arr[2].attack=70;
    arr[2].hp=100;
    arr[2].speed=80;
    arr[2].tier='B';
    strcpy(arr[2].name,"Pikachu");
    for (int i = 0; i < 3; i++)
    {
     printf("%s\n",arr[i].name);
     printf("Attack:%d\n",arr[i].attack);
     printf("Speed:%d\n",arr[i].speed);
     printf("Tier:%c\n",arr[i].tier);
     printf("\n");
    }
    return 0;
}
/*We can also take the input of the structure dat
a type.*/