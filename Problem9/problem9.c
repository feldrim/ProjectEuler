/*
Project Euler - Problem #9:
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <stdio.h>

int main(){
    int a, b, c;
    int ans = 0;
    for (a = 1 ; a < 500 ; a++){
		for (b = 1 ; b < 500 ; b++){
	    	for (c = 1 ; c < 500 ; c++){
	      		if (a + b + c == 1000){
	        		if(( a * a ) + ( b * b ) == ( c * c )){
	          			ans = a * b * c;
	          			break;
           			}
        		}
          	}
	  	}
	}
	printf("Product a*b*c: %d",ans);
}
