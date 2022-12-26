#include <iostream>
using namespace std;
int main(){
    int sayac=0, ucgensayi = 0, bolen;
    for(int i=1;;i++){
        ucgensayi += i;
        for(int j=ucgensayi;j>0;j--){
            if(ucgensayi % j == 0){
                sayac++;
            }
        }
        cout << "Ucgen Sayi :" << ucgensayi << " \tBolen adet : "<< sayac << endl;
        if(sayac >= 500){
            break;
        }
        else{
            sayac = 0;
        }
    }
    cout << ucgensayi << endl;
}