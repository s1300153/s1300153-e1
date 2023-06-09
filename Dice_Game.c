#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int d1,d2;
  char name[20];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!",name);
  
  srand((unsigned int)time(NULL));

  printf("Rolling dice...\n");

  d1 = rand() % 6 + 1;

  d2 = rand() % 6 + 1;

  printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n",d1,d2,d1+d2);
  if(d1+d2 > 7)printf("%s won!\n",name);
  else printf("%s lost!\n",name);

  return 0;
}
