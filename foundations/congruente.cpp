#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void
initiate (int *d, int max)
{
  for (int i = 0; i < max; i++)
    d[i] = i;
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
	printf ("%3i  ", d[x] = (long int) pow (d[x], v) % p );
      printf ("\n");
    }

  free (d);
  printf ("\n");

  return EXIT_SUCCESS;
}
