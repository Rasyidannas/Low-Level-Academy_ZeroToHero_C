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
// int main() {
//   float a, b, c, sp, area;
//   printf("\nEnter 3 sides legth of triangle: ");
//   scanf("%f %f %f", &a, &b, &c);
//
//   sp = (a + b + c) / 2;
//   area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
//
//   printf("Area of triangle = %f\n", area);
//   return 0;
// }

/* Problem 3.1 */
// int main() {
//   float cp, sp;
//   printf("\nEnter cost price and selling price: ");
//   scanf("%f %f", &cp, &sp);
//
//   float profit = sp - cp;
//
//   if (profit < 0) 
//     printf("You are loss!");
//
//   if (profit > 0)
//       printf("You are profit!");
//
//   if (profit == 0)
//     printf("You are no loss and no profit");
//
//   return 0;
// }

/* Problem 4.1 */
// int main() {
//   int year;
//   printf("\nEnter year: ");
//   scanf("%d", &year);
//
//   // if (year % 4 == 0)
//   //   printf("Year is leap!");
//   // else 
//   //   printf("Year is not leap!");
//
//   char *result = (year % 4 == 0) ? "Year is leap!" : "Year is not leap!";
//
//   printf("%s", result);
//
//   return 0;
// }

// int main() {
//   int employees, hours;
//   float paid;
//
//   employees = 10;
//   paid = 120.00;
//
//   float result = 0;
//   int i = 0;
//   while(i < employees) {
//     printf("\nEnter your hour worked: ");
//     scanf("%d", &hours);
//
//     if(hours > 40) {
//       result = (hours - 40) * paid;
//       printf("You have overtime salary %f", result);
//     } else {
//       result;
//       printf("You don't have overtime salary %f", result);
//     }
//
//     i++;
//   }
//
//   return 0;
// }

int main() {
    // Start at 2, since 1 is not a prime number
    for (int i = 2; i <= 300; i++) {
        int isPrime = 1; // Assume the number is prime

        // Check for divisors
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
                break;       // No need to check further
            }
        }

        // If no divisors were found, print the number
        if (isPrime) {
            printf("%d\t", i);
        }
    }

    return 0;
}
