#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
      height = get_int("Height: ");
    }
    while (height > 8 || height < 1);

    for(int i = 0; i < height; i++)
    {
      for (int s = height - 1; s > i; s--)
      {
        printf(" ");
      }
      for (int h = -1; h < i; h++)
      {
        printf("#");
      }
      printf("\n");
    }
}
