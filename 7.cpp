//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13. What is the 10 001st prime number?

#include <iostream>
using namespace std;
int main(){
    int counter = 0, i=2, checker = 0;
    while(counter < 10001){
        checker = 0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                checker++;
                break; 
            }
        }
        if(checker == 0){
            counter++;
        }
        i++; 
    }
    cout << i-1;
}