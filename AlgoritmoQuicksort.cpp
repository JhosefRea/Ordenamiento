#include <iostream>
#include <fstream>
using namespace std;

int mitad (int arr[], int pinicial, int pfinal);
void ordenar(int arr[], int pinicial, int pfinal);

int main(){
    ofstream archivo;
    int A[10]={88, -6, 69, -33, 98, 7, 23, -5, 0, 100};
    archivo.open("Quicksort.txt", ios::out);

    if(!archivo.is_open()){
        cout << "No se ha podido abrir el archivo" << endl;
    }else{
        archivo << "Arreglo original\n";
        for(int i=0; i<10;i++){
            archivo<<"|"<<A[i]<<"|";
        }
        ordenar(A,0,9);
        archivo <<endl << "Arreglo ordenado\n";
        for(int i=0; i<10;i++){
            archivo<<"|"<<A[i]<<"|";
        }
        archivo << "\nSe utlizó el alg. de ordenamiento Quicksort" << endl;
    }
    return 0;
}

int mitad (int arr[], int pinicial,  int pfinal){

    return arr[(pinicial+pfinal)/2];
}

void ordenar(int arr[], int pinicial, int pfinal){
    int i=pinicial;
    int j=pfinal;
    int temp;
    int piv=mitad(arr,pinicial,pfinal);

    do{
        while(arr[i]<piv){
            i++;
        }
        while(arr[j]>piv){
            j--;
        }
        if(i<=j){
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

    }while(i<=j);

    if(pinicial<j)
        ordenar(arr,pinicial,j);
    if(i<pfinal)
        ordenar(arr,i,pfinal);
}

