#include "main.h"

int _is_prime(int n, int i)
{
	if (i * i > n)

		return 1;

	else if (n % i == 0)

		return 0;
	else
		return _is_prime(n, i + 1);

}

int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	return _is_prime(n, 2);
}