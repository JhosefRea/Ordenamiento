#include <iostream>
#include "uno.h"
#include "dos.h"
#include "tres.h"
#include <fstream>

using namespace std;
using namespace heap;

ofstream archivo;
int main(){
   int A[100],n;
   
   cout<<"Ingresa la cantidad de elementos: ";
   cin>>n;
   ingresar(A,n);

   archivo.open("Heapsort.txt", ios::out);

   if(!archivo.is_open()){
      cout << "Error" << endl;

   }else{
      archivo << "\n Arreglo original" << endl;
         for(int i=1;i<=n;i++){
            archivo << A[i] << "\t";
         }

        
      heapSort(A,n);

      archivo << "\n Arreglo ordenado" << endl; 
      imprimir(A,n);
      archivo << "\nSe utilizó el algoritmo de ordenamiento Heapsort\n";

   }

   

   return 0;
}

void imprimir (int A[],int n){
   for(int i=1;i<=n;i++){
      archivo << "["<<A[i]<<"]";
   }
}

