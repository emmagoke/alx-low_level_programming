#include <stdio.h>

int  print(int nb)
{
	printf("In %d\n", nb);
	if (nb < 0)
	{
		return (0);
	}
	printf("%d\n", nb + print(nb - 1));
	nb --;
	return (nb);
}
int main(void)
{
	//print(4);
	char *s = "Puts";
	printf("%s\n", s+1);
	return (0);
}
