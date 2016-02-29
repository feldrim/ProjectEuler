/*
Project Euler - Problem #6:
The sum of the squares of the first ten natural numbers is,
	12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,
	(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include<stdio.h>
#define MAX 100
int main(){
	int i, sum=0, square, temp=0;
	for (i = 1 ; i <= MAX ; i++){
		sum += i*i;
	}
	for (i = 1 ; i <= MAX ; i++){
		temp += i;
	}
	square= temp*temp;
	printf ("From 1 to 100,\nSum of squares\t: %d\nSquare of sums\t: %d\nDifference\t: %d", sum, square, square - sum);
}
