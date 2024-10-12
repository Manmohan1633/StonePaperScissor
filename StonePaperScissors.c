#include<stdio.h>
#include <stdlib.h>
#include <time.h>   //This is used to get time and to make the number random

int game (char user, char computer){
    if (user == computer)
    return -1;

    if (user == 'z' && computer == 'p')              
    return 1;                                       /*In these if statement i used
                                                      earlier I used user="z" 
                                                      which game me error as literal 
                                                      should be in ''*/
    else if (user == 'p' && computer == 'z')
    return 0;

     if (user == 'r' && computer == 'z')
    return 1;
    else if (user == 'z' && computer == 'r')
    return 0;

     if (user == 'p' && computer == 'r')
    return 1;
    else if (user == 'r' && computer == 'p')
    return 0;
}

int main(){
srand(time(0));
int r = rand() % 100;  // genrate random number between 0 & 99
char computer;
if ( r <= 33){
     computer = 'r';// earlier I used char computer in if
                    // becuse of it, i will explain it below ****
}
if ( r > 33 && r <= 66){
     computer = 'p';
}
if ( r > 66 && r <= 99){
     computer = 'z';
}
char user;
printf("Enter 'r' for Stone, 'p' for Paper,'z' for Scissor\n");
scanf(" %c", &user);  //space should be given befor %c

int Result = game(user, computer);
if(Result == -1){
    printf("You choose %c  and Computer choose %c\n ", user, computer);
printf("DRAW"); //****  When i tried to print computer, it would show (╨) this.
                /* It was due to char in if statement compiler was seeing both 
                computer as differnt variable*/
}
else if(Result == 1){
    printf("You choose %c  and Computer choose %c\n ", user, computer);
printf("YOU WIN!");
}
else{
    printf("You choose %c  and Computer choose %c\n ", user, computer);
printf("YOU LOOSE!");
}
return 0;
}