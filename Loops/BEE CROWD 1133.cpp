#include <stdio.h>

int main ()

{
    int x, y, k, n, aux;
    scanf ("%d %d", &x, &y);
      if (x > y)
       {
            aux = x;
            x = y;
            y = aux;
       }
        n = x + 1;
        for (k = x + 1; k < y; k++)
        {
            if (n % 5 == 2 || n % 5 == 3)
            {
            printf ("%d\n", n);
            }
            n = n + 1;
        }

}
