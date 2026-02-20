#include <iostream>
using namespace std;

void weird(int n);

int main(void){
    int N;
	cout << "Numeros: ";
	cin >> N;

    weird(N);
}

void weird(int n){
    cout << n << " ";

    if (n==1){
        cout << endl;
        return;
    }
    else{
        if (n%2 == 0){
            weird(n/2);
        }
        else{
            weird((n*3)+1);
        }
    }
}