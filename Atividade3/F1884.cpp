#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int H, P, F; // alturaDireita, QuantPilhas, QuantBlocosInserir;

    while (cin >> H >> P >> F)
    {
        if (H == 0 && P == 0 && F == 0)
        {
            break;
        }

        // Criar vetor de pilhas para armazenar as pilhas de blocos
        vector<vector<int>> pilhaBlocos(P, vector<int>(H, 0));

        // Preencher as pilhas com as alturas iniciais
        for (int i = 0; i < H; ++i)
        {
            for (int j = 0; j < P; ++j)
            {
                cin >> pilhaBlocos[j][i];
            }
        }

        // Receber a lista de blocos para inserir
        vector<int> blocosInserir(F);
        for (int i = 0; i < F; ++i)
        {
            cin >> blocosInserir[i];
        }

        // Inserir os blocos na pilha de blocos
        for (int bloco : blocosInserir)
        {
            for (int linha = P - 1; linha >= 0; --linha)
            {
                bool inseriu = false;
                for (int coluna = H - 1; coluna >= 0; --coluna)
                {
                    if (pilhaBlocos[linha][coluna] == 0)
                    {
                        pilhaBlocos[linha][coluna] = bloco;
                        inseriu = true;
                        break;
                    }
                }
                if (inseriu)
                {
                    break;
                }
            }
        }

        // Mostrar valores da pilha de blocos
        for (int i = 0; i < H; ++i)
        {
            for (int j = 0; j < P; ++j)
            {
                cout << pilhaBlocos[j][i];
                if (j + 1 < P)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
