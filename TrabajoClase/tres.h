#include <iostream>
using namespace std;

void ingresar (int A[], int n){
    for(int i=1;i<=n;i++){
        cout << "Elemento N°" << i << ": ";
        cin >>A[i];
    }

}