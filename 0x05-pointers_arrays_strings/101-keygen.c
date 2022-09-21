#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - writes to the stdout randomly generated
 * password
 *
 * Return: 0.
 */
int main(void)
{
	int passlen; /* Password length */
	int passchar; /* Password character */

	srand(time(NULL));
	/* Password length at most 20 character */
	passlen = (rand() % 10) + 11;
	while (passlen > 0)
	{
		/*passchar = (rand() % 100) + 26;*/
		/* ascii values between 33 and 125 are allowed
		if (passchar >= 32 && passchar <= 125)
		{*/
			/*fprintf(stdout,"%c", passchar);*/
			/*printf("%c", passchar);
			passlen--;
		} */
		passchar = rand() % 100;
		printf("%c", passchar);
		passlen--;

	}
	printf("\n");
	return (0);
}
