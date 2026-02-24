#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Dime un número master: ";
    cin >> n;

    while(n != 1){
        if(n % 2 == 0){
            n = n / 2;
            cout << "Es par →" << n <<"\n";
        }
        else{
            n = n * 3 + 1;
            cout << "Es impar →" << n <<"\n";
        }
    }

    cout << "Se llegó a 1\n";

}
        
