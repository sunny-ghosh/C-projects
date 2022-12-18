// Q: Perform the folloeing task in C program.---------- //
//***  Dinesh is fond of video games. Due to the pandemic, he designs a video game called Corona world.
//In this game, the player enters the game with a certain energy. 
//The player should defeat all the corona infected zombies to reach the next level.
//When time increases, the zombies will increase double the previous minute.
//Anyhow the player can manage to fight against all the zombies.
//In this case, definitely the player can not achieve the promotion.
//Hence, the player gets a superpower to destroy all the zombies in the current level when the current game time is a palindrome.
//Anyhow the player can manage only if he knows the time taken to get the superpower.
//Help the player by providing the minimum minutes needed to get the superpower by which he can destroy all the zombies.
//You will be provided with the starting time of the game.  ***//



#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ptime=0,hh,mm,h1,h2,m1,m2,i;
    char time[5],temp[5];
    printf("Enter the time : ");
    gets(time);
    // temp[5]=time[5];
    h1 = (int)(time[0]);
    h2 = (int)(time[1]);
    m1 = (int)(time[3]);
    m2 = (int)(time[4]);
    hh = (h1*10+h2);
    mm = (m1*10+m2);
    puts(time);
    while((hh%10!=mm/10)||(hh/10!=mm%10))
    // for(i=mm;i<(hh%10!=mm/10)||(hh/10!=mm%10);i++)
    {
       mm++;
       if(mm==60)
       {
           mm=0;
           hh++;
       }
       if(hh==24)
       {
           hh=0;
           ptime=ptime+1;
       }
    }
    puts(time);
    printf("Starting time is & Required time is %d",ptime);
    return 0;
}
