#include <iostream>
#include <set>

using namespace std;

int main()
{
    int A, B;

    while (cin >> A >> B)
    {
    set<int> AliceCartas;
    set<int> BeatrizCartas;
        if (A == 0 && B == 0)
        {
            break;
        }

        for (int i = 0; i < A; i++)
        {
            int carta;
            cin >> carta;
            AliceCartas.insert(carta);
        }

        for (int j = 0; j < B; j++)
        {
            int carta;
            cin >> carta;
            BeatrizCartas.insert(carta);
        }

        // Calcular a interseção
        set<int> intersecao;
        for (int carta : AliceCartas)
        {
            if (BeatrizCartas.count(carta) > 0)
            {
                intersecao.insert(carta);
            }
        }

        // Pegar a quantidade mínima de cartas entre Alice e Beatriz
        int cartasTrocadas = min(AliceCartas.size() - intersecao.size(), BeatrizCartas.size() - intersecao.size());

        cout << cartasTrocadas << endl;
    }

    return 0;
}
