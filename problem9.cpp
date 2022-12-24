//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a^2 + b^2 = c^2 For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2. There exists exactly one Pythagorean triplet for which a + b + c = 1000. Find the product abc.

#include <iostream>
using namespace std;
int main(){
    int a=0, b=0, c=0, total=1000;
    for(a = 1; a < total/3 ; a++){
        for(b = a; b < total/2; b++){
            c = total - a - b;
            if(a*a + b*b == c*c){
                cout << a << " " << b << " " << c << endl;
                cout << a*b*c << endl;
            }
        }
    }
    
}
