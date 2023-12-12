#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> palavrasBuscar;

    int quantPalaDict,quantDescriVal;
    cin >> quantPalaDict >> quantDescriVal;

    for (int i = 0; i < quantPalaDict; ++i) {
        string palavra;
        int valor;
        cin >> palavra >> valor;
        palavrasBuscar[palavra] = valor;
    }

    for (int i = 0; i < quantDescriVal; ++i) {
        string descricao;
        int salario = 0;

        while (cin >> descricao && descricao != ".") {
            salario += palavrasBuscar[descricao];
        }

        cout << salario << endl;
    }

    return 0;
}
