#include <stdio.h>
int main()
{
  float count = 2.5;
  
  // while
  // while(count <= 3) {
  //   printf("%f\n", count);
  //   count = count + 0.1;
  // }

  // for
  // for(count = 1; count <= 3; count++) {
  //   printf("%f\n", count);
  // }

  // do while
  do {
    printf("%f\n", count);
    count = count + 0.1;
  } while (count <= 3);

  return 0;
}
