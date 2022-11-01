#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
int main() 

{ 
 int number,nguesses=1,a;
 srand(time(0));
 number= rand()%100 + 1;
 //printf("The random number is %d \n", number);
 printf("Guess a number between 1 to 100 \n");
 scanf("%d", &a);

 do{
     if(a>number){
        printf("Lower number please \n");
        scanf("%d", &a);
     }
     else if(a<number){
        printf("Higher number please \n");
        scanf("%d", &a);
     }
     
     nguesses++;

 }while(a!=number);
printf("YOU GUESSED THE CORRCECT NUMBER IN %d ATTEMPTS \n",nguesses);
 return 0; 
} 
