#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter to take a alphabet:");
    scanf("%c",&alphabet);

    switch(alphabet)
    {
      case'A':
      case'E':
      case'I':
      case'O':
      case'U':
      case'a':
      case'e':
      case'i':
      case'o':
      case'u':
      printf("\n%c is a vowel",alphabet);

        break;
        default:
        printf("\n%c is a consonant",alphabet);
    }
    return 0;
}
