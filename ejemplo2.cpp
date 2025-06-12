#include <iostream>
using namespace std;

int main (){
    int n,s,prom,A[20];
    cout<<"Ingrese la cantidad de elementos del arreglo: ";
    cin>>n;
    s=0;
    for ( int i=1; i<=n;i++){
        cout<<"Ingrese el número: ";
        cin>>A[i];
        s=s+A[i];
    }
    prom=s/n;
    for ( int i=1; i<=n;i++){
        if (A[i]>prom){
            cout<<"Los números mayores al promedio son: "<<endl;
            cout<<A[i]<<endl;
        }
    }
}