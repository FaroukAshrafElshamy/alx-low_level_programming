#include <stdio.h>

/**
* main-dirctory
* Return: Always(0) (Success);
*/

int main(void)
{
char thechar;
int theint;
long int thelong;
long long int thell;
float thefloat;
printf("Size of a char: %zu byte(s)",sizeof(thechar));
printf("Size of a char: %zu byte(s)",sizeof(theint));
printf("Size of a char: %zu byte(s)",sizeof(thelong));
printf("Size of a char: %zu byte(s)",sizeof(thell));
printf("Size of a char: %zu byte(s)",sizeof(thefloat));
return (0);
}

