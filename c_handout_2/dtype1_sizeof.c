#include <stdio.h>

int main ()
{
  printf ("Dtype: size\n");
  printf ("int %ld bytes.\n", sizeof (int));                                // 4
  printf ("signed int %ld bytes.\n", sizeof (signed int));                  // 4
  printf ("unsigned int %ld bytes.\n", sizeof (unsigned int));              // 4
  printf ("---------------------\n");
  printf ("short %ld bytes.\n", sizeof(short));                             // 2
  printf ("signed short %ld bytes.\n", sizeof(signed short));               // 2
  printf ("unsigned short %ld bytes.\n", sizeof(unsigned short));           // 2
  printf ("---------------------\n");
  printf ("long %ld bytes.\n", sizeof(long));                               // 8
  printf ("signed long %ld bytes.\n", sizeof(signed long));                 // 8
  printf ("unsigned long %ld bytes.\n", sizeof(unsigned long));             // 8
  printf ("---------------------\n");
  printf ("long long %ld bytes.\n", sizeof(long long));                     // 8
  printf ("signed long long %ld bytes.\n", sizeof(signed long long));       // 8
  printf ("unsigned long long %ld bytes.\n", sizeof(unsigned long long));   // 8
  printf ("---------------------\n");
  printf ("char %ld bytes.\n", sizeof(char));                               // 1
  printf ("signed char %ld bytes.\n", sizeof(signed char));                 // 1
  printf ("unsigned char %ld bytes.\n", sizeof(unsigned char));             // 1
  printf ("---------------------\n");
  printf ("float %ld bytes.\n", sizeof(float));                             // 4
  printf ("double %ld bytes.\n", sizeof(double));                           // 8
  printf ("long double %ld bytes.\n", sizeof(long double));                 // 16

  return 0;
}
