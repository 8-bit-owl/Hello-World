#include <stdio.h>
#include <conio.h>

#define ZERO 0
int main(void)
{
  printf("\n-------Accleration in Terminal-------\n");
  printf("Hit w to speed up, Do not touch 180 mph\n");
  printf("Hit x to Exit\n");
  printf("-----------------------------------------\n");
  char c = getch();
  int i = 0;
  if(c = 'w')
  {
    while(1)
    {
      
      if('w' == getch())
      {
        printf("%d mph",i++);
        printf("\b\b\b\b\b\b\b\b");
        if(i==185)
        {
          printf("\n185 mph is a lot of speed, stop!\n");
          break;
        }
      }
      if('x' == getch())
      {
        break;
      }
    }  

  }
  printf("------------------------\n");
  printf("\n exiting acceleration");
  
  return ZERO;
}
