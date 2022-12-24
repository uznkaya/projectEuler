//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99. Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
using namespace std;
int isPalindrome(long number){
    long int sayi, sayininTersi=0, basamak;
    sayi = number;
    while(sayi !=0){
        basamak = sayi % 10;
        sayininTersi = sayininTersi * 10 + basamak;
        sayi = sayi / 10;
    }
    if(sayininTersi == number){
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    long i=900, j=900, k=0;
    while(i<1000){
        while(j<1000){
            k = i * j;
            if(isPalindrome(k)){
                cout << k << endl;
            }
            j++;
        }
        j = 900;
        i++;
    }
}
