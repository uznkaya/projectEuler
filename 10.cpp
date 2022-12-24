//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all the primes below two million.

#include <iostream>
using namespace std;
int main(){
    long multiples=0, asal=0;
    for(long i=2;i<500;i++){
        asal = 0;
        for(long j=2; j<i; j++){
            if(i%j==0){
                asal = 1; 
            }
        }
        if(asal == 0){
            multiples += i;
            cout << i << endl;
        }
    }
    cout << multiples;
}