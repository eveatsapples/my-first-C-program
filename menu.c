#include<stdio.h>
#include<unistd.h>
#include<app.h>

int on;
on = 0;

void menu(void) 
{
  char menuOption;
  
  while(on <= 0)
  {
    system("clear");
    printf("\n\n\n\n\n\n\n\n\n");
    printf("choose an option from the menu\nc: calculator\nj: nothing\nq: quit\n$:");
    
    scanf("%c", &menuOption);
    
    switch(menuOption)
    {
      case 'c':
        system("clear");
        calculator();
        break;

      case 'j':
        printf("nothing here yet");
        startUp();
        getchar();
        break;

      case 'q':
        on = 1;
        break;
    }
  }
}

