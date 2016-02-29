/*
Project Euler - Problem #7:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/
#include <stdio.h>
#define MAX 10001
int i=2,j,p,count=1;
main(){
	while(count<MAX){
		for(j=2;j<i;j++){
			p=0;
			if(i % j == 0){
				p = 0;
				break;
			} else {
				p++;
			}
		}
		if(p != 0){
			count++;
		}
		i++;
	}
	printf("%d st prime number is is %d", MAX, i-1);
	getch();
	return 0;
} 


