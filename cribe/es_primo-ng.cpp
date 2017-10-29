#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int
main ()
{
  uint64_t pot_of2 = 1ULL, last_pot = 0ULL;

  for (unsigned index = 0; pot_of2 > last_pot; index++, pot_of2 <<= 1)
    {
      last_pot = pot_of2 - 1;
      if (!(last_pot % (index + 1)))
	printf ("%u\t", index + 1);
    }
  printf ("\n");

  return EXIT_SUCCESS;
}
