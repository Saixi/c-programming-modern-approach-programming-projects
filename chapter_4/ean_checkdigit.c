//	A program that calculates the check digit for an arbitrary EAN
	
#include <stdio.h>

int main(void)
{	
	int d, i1, i2, i3, i4, i5, i6, j1, j2, j3, j4, j5, first_sum, second_sum, total;

	// Asks user for the 12 digit EAN
	printf("Enter the first 12 digits of a EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5);

	// Computes the check digit
	first_sum = i1 + i3 + i5 + j1 + j3 + j5;
	second_sum = d + i2 + i4 + i6 + j2 + j4;
	total = 3 * first_sum + second_sum;

	// Prints the check digit
	printf("Check digit: %d\n", 9 - (total - 1) % 10);
	return 0;
}
