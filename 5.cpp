//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include <iostream>
using namespace std;
int main(){
    int sayi=1, counter=0;
    while(true){
        for(int i=1;i<21;i++){
            if(sayi % i == 0)
            {
                counter++;
            }
        }
        if(counter != 20){
            sayi++;
            counter = 0;
        }
        else{
            cout << sayi;
            break;
        }
    }
}