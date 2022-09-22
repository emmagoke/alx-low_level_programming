#include <stdio.h>

/**
 * Pointers and Multi-dimentional arrays
 */
int main(void)
{
	int B[2][3] = {{2, 3, 6}, {4, 5, 8}};

	printf("Size of array B: %d\n", sizeof(B));
	printf("B[0] = %d\n", B[0][0]);
	printf("*(*B + 1) =  %d\n", *(*B + 1));
	printf("*(*(B + 1)) = %d\n", *(*(B + 1)));
	printf("*(*(B + 1) + 1) = %d\n", *(*(B + 1) + 1));
}
