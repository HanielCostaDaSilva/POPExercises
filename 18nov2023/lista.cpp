#include <bits/stdc++.h>
using namespace std;

int main(){
    int numerosInteiros[10];
    for (int i = 0; i < 10; i++){
    cin >> numerosInteiros[i];
    }

    int valorConsulta;
    for (int i = 0; i < 3; i++){
        cin >> valorConsulta;
        
        for (int j = 0; j <size(numerosInteiros); j++){
            
            if (numerosInteiros[j] == valorConsulta){
                cout << j+1 <<endl;
                break;
            }
            else if(j + 1 == size(numerosInteiros)){
                cout << "fora da lista" <<endl;
            }
        }
    }
    return 0;
}
