#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
int die=0;
int wallet=1000;
  printf("Welcome to Jackpot");
  printf("\n0\t0\t0");
for(;;){
printf("\nWallet = ");
printf("%d",wallet);
printf("\nPress 1 to SPIN THE WHEEL \t (It costs 100 to spin the wheel)");
printf("\nPress 2 to go to Shop");    
printf("\nPress 3 to exit");
printf("\n");
  int input; 
  scanf("%d",&input);
    if(input==3){
      break;
}
if(input==2){
for(;;){
printf("\nWelcome to the shop");
printf("\nTimes bought = ");
printf("%d",die);
printf("\nPress 1 to purchase 100 gems");
printf("\nPress 2 to exit");
printf("\n");
int shop;
scanf("%d",&shop);
if(shop==1){
wallet = wallet + 100;
printf("\n");
printf("%d",wallet);
die=die+1;
}else{
break;
}}
}
else{
    if(wallet<100){
printf("\nInsufficent funds");
continue;
}else{
wallet=wallet-100;
    int n1 = rand() % 10;
    int n2 = rand() % 10;
    int n3 = rand() % 10;
    printf("%d\t %d\t %d\t",n1,n2,n3);
    if(n1==n2==n3){
system("setterm -bold on");
      printf("Congrats you won the Jackpot");
system("setterm -bold off");
wallet=wallet+1000;
}else{
      printf("Better luck next time");
}
  }}}
  return 0;
}

