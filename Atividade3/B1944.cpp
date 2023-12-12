#include <iostream>
#include <stack>

using namespace std;
int main() {
  int flag;
  cin >> flag;

  // Inicializa a pilha com as letras "FACE"
  stack<char> painel;
  painel.push("E");
  painel.push("C");
  painel.push("A");
  painel.push("F");

  int brindes = 0;

  for (int i = 0; i < flag; i++) {
    string letras;
    getline(cin,letras);

    // Verifica se as letras inseridas formam o contrário das 4 últimas letras da pilha
    for (int j = 0; j < 4; j++) {
      if (painel.top() != letras[j]) {
        break;
      }
      painel.pop();
    }

    if (painel.empty()) {
      brindes++;
    }

    //coloca as letras no painel
    for (char letra : letras) {
      painel.push(letra);
    }
  }

  cout << brindes << endl;

  return 0;
}