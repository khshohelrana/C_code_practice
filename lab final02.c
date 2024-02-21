#include <stdio.h>
int main()
{ int number;
   printf("\n Enter the size of the arry: ");
   scanf("%d", &number);
   switch (number > 0)
    { case 1:
     printf("\n This is a positive number.\n");
     break;
     case 0:
     switch (number < 0)
    { case 1:
      printf("\n This is a negative number.\n");
      break;
     case 0:
     printf("\n This number is Zero.\n");
     break;
    }
        break;
    }
   return 0;
}
