/*
Project Euler - Problem #10:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <stdio.h>
#define LIMIT 2000000
	int getTime(){
		time_t mytime;
		mytime = time(NULL);
		return(ctime(&mytime));
	}
	
int main () {
	unsigned long long int  i, j, sum=0;
	int asalMi;
	printf("Started at %s", getTime());
	for(i = 2; i <= LIMIT; i++) {
		asalMi=1;
		for(j = 2; j < i && j <= 10000; j++) {
			if(i % j == 0) {
				asalMi=0;
				break;
			}
		}
		if(asalMi==1) {
			sum += i;
		}
	}
	printf("Ended at %s\nResult is %llu", getTime(), sum);
	return 0;
}
