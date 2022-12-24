//The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the number 600851475143 ?

#include <iostream>
using namespace std;
int main(){
    long sayi = 600851475143, i = 2, j = 2, k=0;
    for(;i<=sayi;i++){
        if(sayi%i==0){
            sayi /= i;
            for(;j<i;j++){
                if(i%j==1){
                    if(k!=i){
                        cout << i << endl;
                    }
                    k = i;
                }
            }
        }
    }
}