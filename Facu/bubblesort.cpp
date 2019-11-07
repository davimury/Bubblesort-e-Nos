#include <iostream>

using namespace std;

int main(){
    int vet[8] = {1,6,4,7,5,3,8,2};

    for(int i = 0;i<8;i++)
        cout<<vet[i]<<" ";

    cout<<endl;

    for(int i = 0;i<8;i++){
        for(int j = 0; j<(8-1);j++){
            if(vet[j]>vet[j+1]){
                int aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
    
    for(int i = 0;i<8;i++)
        cout<<vet[i]<<" ";


}