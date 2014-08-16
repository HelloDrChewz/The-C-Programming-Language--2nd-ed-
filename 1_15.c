#include <stdio.h>

float cfc(float fahr);

/*float ccf(float fahr);*/

main()
{
  int i;
  for (i=0;i<=15;++i)
    printf("%3f\t%3f\n", i*20.0, cfc(i*20.0));
  return 0;
}

float cfc(float fahr)
{
  return (5.0/9.0)*(fahr-32.0);
}
