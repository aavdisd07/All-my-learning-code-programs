#include <stdio.h>

void main()
{

  char x;
  printf("Enter any Character Or digit:\n");
  scanf("%c", &x);

  if (x > 64 && x < 91)
  {
    printf("%c is Capital Letter", x);
  }
  else if (x > 96 && x < 123)
  {
    printf("%c is Small letter", x);
  }

  else if (32 <= x <= 64)
  {
    if (x > 47 && x < 58)
    {
      printf("%c is Digit", x);
    }
    else
    {
      printf("%c Special Character", x);
    }
  }
  else
  {
    printf(" Envalid Character");
  }
}
