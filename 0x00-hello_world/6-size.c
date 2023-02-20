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
printf("Size of a char: %zu byte(s)\n", sizeof(thechar));
printf("Size of an int: %zu byte(s)\n", sizeof(theint));
printf("Size of a long int: %zu byte(s)\n", sizeof(thelong));
printf("Size of a long long int: %zu byte(s)\n", sizeof(thell));
printf("Size of a float: %zu byte(s)\n", sizeof(thefloat));
fprintf(stderr, "[Anything]\n");
return (0);
}

