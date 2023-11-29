#include <bits/stdc++.h>
using namespace std;

int main(){
    int valores[10];
    int num;
    

    for(int i = 0; i < 10; i++){
        cin >> num;
        if (num <=0)
        num = 1;
        valores[i] = num;
    }
    for (int i = 0; i < 10; i++){
        cout << "X["<< i<<"] = " << valores[i]<<endl;
    }

    return 0;
}