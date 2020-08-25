#include <iostream>
#include <fstream>

using namespace std;

int tamanio(int& x);
int main(){
    int size;
    int aux, p;
    ofstream archivo;
    size = tamanio(size);
    float numeros[size];
    float suma = 0;

    for(int i =0; i < size; i++){
        cout << "Digite el elemento " << i+1 << ": ";
        cin >> numeros[i]; 
    }
    archivo.open("ordenamiento.txt", ios::out);

    if(!archivo.is_open()){
        cout <<"ERROR" << endl;
    }else{
        archivo << "Arreglo de elementos originales" << endl;
        for(int i = 0; i < 5; i++){
            archivo << "[" << numeros[i] << "] ";
        }
    }
    archivo.close();

    for(int i = 0; i < size;i++){
        aux = numeros[i];
        p = i;
        while(p > 0){
            if(numeros[p-1] > aux){
                numeros[p] = numeros[p-1];
                numeros[p-1] = aux;
            }
            p--;
        }
    }
    archivo.open("ordenamiento.txt", ios::app);
    if(!archivo.is_open()){
        cout <<"ERROR" << endl;
    }else{
        archivo << "\n\nArreglo de elementos ordenados" << endl;
        for(int i = 0; i < size; i++){
            archivo << "[" << numeros[i] << "] ";
            suma += numeros[i]; 
        }
        archivo << "\n\nEl total de elementos es: " << size << endl;
        archivo << "La suma de los elementos es: " << suma; 
    }
    archivo.close();
    
    return 0;
}    
int tamanio(int& x){
    do{
        cout << "Digite el tamaño del vector: ";
        cin >> x;
        if(x < 0){
            cout << "Dato inválido" << endl;
        }
    }while(x < 0);
    return x;
}


