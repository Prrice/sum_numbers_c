/*
 * Sum from 1 to an upper-bound using a while loop
 * (SumNumbers.c)
 */
#include <stdio.h>

int main() {
	int sum = 0;	// Declare an int variable sum to accumulate the numbers
					// Set the initial sum to 0
	int upperbound;	// Sum from 1 to this upper-bound

	printf("Enter the upperbound: ");	// Prompt user for an upper-bound
	scanf("%d", &upperbound);			// Use %d to read an int

	// Use a loop to repeatedly add 1, 2, 3, ..., up to upper-bound
	int number = 1;
	while (number <= upperbound) {
		sum = sum + number;	// Accumulate number into sum
		++number;			// Increment number by 1
	}

	// Print the result
	printf("The sum from 1 to %d is %d.\n", upperbound, sum);

	return 0;
}
