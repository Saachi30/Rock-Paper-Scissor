#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int rockpaperscissor(char you, char comp){
if(you==comp){
    return 0;
}    
if(you=='r' && comp=='s'){
    return 1;
}
else if(you=='s' && comp=='r'){
    return -1;

}
if(you=='p' && comp=='r'){
    return 1;
}
else if(you=='r' && comp=='p'){
    return -1;

}
if(you=='s' && comp=='p'){
    return -1;
}
else if(you=='p' && comp=='s'){
    return 1;

}
}
int main() 
{ 
 char comp,you;
 int num;
 srand(time(0));
 num = rand()%100 + 1;
 if(num<=33){
    comp='r';
 }
 else if(num>33 && num<=66){
    comp='p';
 }
 else if(num>66){
    comp='s';
 }
 printf("Enter 'r' for rock, 'p' for paper or 's' for scissor \n");
 scanf("%c", &you);
 int result = rockpaperscissor(you, comp);
 
 if(result==0){
    printf("!!! GAME DRAW !!!\n");
 }
 else if(result==1){
    printf("!!! YOU WIN !!! \n");
 }
 else if(result==-1){
    printf("!!! YOU LOSE !!! \n");
 }
 printf("You chose %c and computer chose %c \n",you ,comp);

 return 0; 
} 
