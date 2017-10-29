#include <stdio.h>
#include <stdlib.h>

void
initiate (int *d, int max)
{
  for (int i = 0; i < max; i++)
    d[i] = i;
}

int
pow (int base, int xp, int p)
{
  int result = 1;

  for (int i = 0; i < xp; i++)
    result = (result * base) % p;

  return result;
}

int
main ()
{
  int p;
  int *d;

  printf ("Potencia/Módulo: ");
  scanf (" %i", &p);

  d = (int *) malloc (p * sizeof (int));
  initiate (d, p);

  for (int v = 1; v < p; v++)
    {
      for (int x = 0; x < p; x++)
	printf ("%3i  ", d[x] = (int) pow (d[x], v, p) );
      printf ("\n");
    }

  free (d);
  printf ("\n");

  return EXIT_SUCCESS;
}
