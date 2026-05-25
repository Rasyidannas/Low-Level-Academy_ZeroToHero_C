/* Calculate Ramesh's gross salary */

# include <stdio.h>
# include <math.h>

/* Problem 1.1 */
// int main() {
//   float bp, da, hra, grpay;
//   printf("\nEnter Basic Salary of Ramesh: ");
//   scanf("%f", &bp);
//
//   da = 0.4 * bp;
//   hra = 0.2 * bp;
//   grpay = bp + da + hra;
//
//   printf("Basic salary of Ramesh = %f\n", bp);
//   printf("Dearness Allowance = %f\n", da);
//   printf("House Rent Allowance = %f\n", hra);
//   printf("Gross Pay of Ramesh is %f\n", grpay);
//   return 0;
// }

/* Problem 2.1 */
int main() {
  float a, b, c, sp, area;
  printf("\nEnter 3 sides legth of triangle: ");
  scanf("%f %f %f", &a, &b, &c);

  sp = (a + b + c) / 2;
  area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

  printf("Area of triangle = %f\n", area);
  return 0;
}
