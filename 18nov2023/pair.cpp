#include <bits/stdc++.h>
using namespace std;

int main(){
    float distOfic;
    cin >> distOfic;
    pair<float,float>veloTemp;
    cin >> veloTemp.first >> veloTemp.second;
    float distPercor= (veloTemp.first / 3.6)*veloTemp.second;

    if (distPercor < distOfic){
        cout << "FALTAM "<< fixed << setprecision(2) << distOfic- distPercor << " metros"<< endl;
    }
    else if (distPercor == distOfic){
        cout << "CHEGOU" << endl;
    }else{
        cout << "ULTRAPASSOU" << fixed << setprecision(2) << distPercor- distOfic <<" metros"<< endl;
    }
    return 0;

}