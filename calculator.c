#include<stdio.h>
#include<app.h>

int calculator()
{
  char calculateWith, option;
  double num1, num2;
  int on, inMenu;
  on = 0;
  inMenu = 0;
  
  while(on <= 0) {
    system("clear");
    inMenu = 0;

    printf("\n\n\n\n\n\n\n\n\n\t\tSuper Calculator\n\n\n\n\n\n\n\n\n");
    printf("Enter the first number, an operator(+,-,*,/), and another number\n$:");
    scanf("%lf%c%lf", &num1, &calculateWith, &num2);
    printf("\n\n\n\n");
    getchar();

    switch(calculateWith)
    {
      case '+':
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
        break;
      case '-':
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
        break;
      case '*':
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;
      case '/':
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
        break;
        
      default:
        printf("Error! operator is not correct");
    } 

    while(inMenu <= 0)
    {
      printf("\n\n\npress n for new calculation\nor m to go back to the menu\n$:");
      scanf("%c", &option);
      
      switch(option)
      {
        case 'n':
          inMenu = 1;
          break;
        case 'm':
          inMenu = 1;
          on = 1;
          backToMenu();
          break;
        default:
          printf("\n\nsorry i didn't catch that");
          getchar();
          system("clear");
      }
    }
    
    printf("\n\n");
  }

  return 0;
}

