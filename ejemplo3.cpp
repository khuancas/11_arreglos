#include <iostream>
using namespace std;

int main (){
    int n,A[20];
    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>n;
    for ( int i=0; i<n;i++){
        cout<<"Elemento "<<i+1<<": "<<endl;
        cin>>A[i];
    }
    for (int i=0;i<n/2;i++) {
        int divi=A[i];
        A[i]=A[n-1-i];
        A[n-1-i]=divi;
    }
    cout<<"Arreglo con elementos equidistantes intercambiados: "<<endl;
    for (int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}