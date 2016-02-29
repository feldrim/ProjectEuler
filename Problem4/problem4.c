/*
Project Euler - Problem #4:
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include<stdio.h>
int main(){
	int i,j, max = 0, product, p[6];
	for (i = 999 ; i > 99 ; i--){
		for ( j = 999 ; j > 99 ; j--){
			product = i * j;
			p[0] = product / 100000;
			p[1] = (product % 100000) / 10000;
			p[2] = (product % 10000) / 1000;
			p[3] = (product % 1000) / 100;
			p[4] = (product % 100) / 10;
			p[5] = (product % 10);
			if (p[0] == p[5] && p[1] == p[4] && p[2] == p[3] && product > max){
				max = product;
			}
		}
	}
	printf("Largest palindrome number product of two 3-digit numbers is %d", max);
	getch();
	return 0;
}
