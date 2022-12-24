#include <stdio.h>
#include <string.h>

void main()
{
    float salary, bonus;
    char name;
    printf("Enter salary-");
    scanf("%f", &salary);
    printf("Enter gender-");
    scanf("%s", &name);

    if (name == 'M' || name == 'm')
    {
        if (salary > 10000)
            bonus = (float)(salary * 0.05);

        else
            bonus = (float)(salary * 0.07);
    }
    if (name == 'F' || name == 'f')
    {
        if (salary > 10000)
            bonus = (float)(salary * 0.1);

        else
            bonus = (float)(salary * 0.12);
    }
    salary += bonus;
    printf("your bonus is %.2f\n your total salary is %.2f", bonus, salary);
}