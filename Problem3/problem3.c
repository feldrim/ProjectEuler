/*
Project Euler - Problem #3:
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?
*/
#include <stdio.h>
int main(){
    long long sayi=600851475143;
    long long bolum=2, enbuyuk;
    while(sayi!=0){
        if(sayi % bolum !=0){
            bolum = bolum + 1;
        } else{
            enbuyuk  = sayi;
            sayi = sayi / bolum;
            if(sayi == 1){
                printf("En buyuk asal carpan: %lld.", enbuyuk);
                break;
            }
        }
    }
    return 0;
}
