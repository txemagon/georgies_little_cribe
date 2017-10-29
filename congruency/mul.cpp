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

int **
alloc (int p)
{
  int **d = NULL;

  d = (int **) malloc (p * sizeof (int *));

  for (int tabla = 0; tabla < p; tabla++)
    {
      d[tabla] = (int *) malloc (p * sizeof (int));
      initiate(d[tabla], p);
    }

  return d;
}

void
deliver (int **d, int p)
{

  for (int tabla = 0; tabla < p; tabla++)
    free (d[p]);
  free (d);
}

int
main ()
{
  int p;
  int **d;

  printf ("Potencia/Módulo: ");
  scanf (" %i", &p);

  d = alloc (p);

  for (int v = 0; v < p; v++)
    {
      for (int t = 0; t < p; t++)
	{
	  for (int c = 0; c < p; c++)
	    {
	      d[t][c] *= t;
	      d[t][c] %= p;
	      printf ("%3i ", d[t][c]);
	    }
	  printf ("\n");
	}
      printf ("\n\n");
    }
  printf ("\n");

  deliver (d, p);

  return EXIT_SUCCESS;
}
