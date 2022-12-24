#include <stdio.h>
void main()
{
   float basicPay, dearnessAllowance, houseRentAllowance, grossSalary, providentFund;
   printf("Enter Basic salary-");
   scanf("%f", &basicPay);
   houseRentAllowance =( 0.2 * basicPay);
   dearnessAllowance = (0.4 * basicPay);
   providentFund = (0.12 * basicPay);
   grossSalary = basicPay + dearnessAllowance + houseRentAllowance + providentFund;
 printf("\n\n");
   printf("Basic pay %.2f \nDearness Allowance %.2f\nHouse Rent %.2f\nGross Salary %.2f\nProvident Fund %.2f", basicPay, dearnessAllowance, houseRentAllowance, grossSalary, providentFund);
}