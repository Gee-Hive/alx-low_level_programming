#include <stdio.h>
#include "main.h"

/**
 * largest_prime_factor - this function calculates largest prime factor
 * @n: is the input
 * Return: int
 */

int largest_prime_factor(int a)
{
int maxPrime = -1;

while (a % 2 == 0)
{
maxPrime = 2;
a = a / 2;
}

int i;

for (i = 3; i * i <= a; i = i + 2)

{
while (a % i == 0)
{
maxPrime = i;
a = a / i;
}
}

if (a > 2)
{
maxPrime = a;
}

return (maxPrime);
}

/**
 * main - checks the code
 * Return: 0 (success)
 */

int main(void)
{

int result = largest_prime_factor(612852475143);

printf("%d\n", result);

return (0);
}
