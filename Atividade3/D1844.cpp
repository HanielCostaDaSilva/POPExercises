#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, P, F;

    while (cin >> H >> P >> F && (H != 0 || P != 0 || F != 0)) {
        vector<vector<int>> estoque(H, vector<int>(P));

        // Leitura do estoque atual
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < P; ++j) {
                cin >> estoque[i][j];
            }
        }

        // Leitura da fila de blocos novos
        vector<int> fila(F);
        for (int i = 0; i < F; ++i) {
            cin >> fila[i];
        }

        // Inserção dos blocos novos nas pilhas
        int j = P - 1;  // Índice da pilha mais à direita
        for (int i = 0; i < F; ++i) {
            while (j >= 0 && estoque[j].size() == H) {
                // Se a pilha estiver cheia, vá para a pilha à esquerda
                --j;
            }

            if (j >= 0) {
                // Insira o bloco na pilha
                estoque[j].push_back(fila[i]);
            }
        }

        // Impressão do estoque após a inserção
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < P; ++j) {
                cout << estoque[i][j];
                if (j < P - 1) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
