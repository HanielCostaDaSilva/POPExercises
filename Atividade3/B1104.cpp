#include <iostream>
#include <set>

using namespace std;

int main()
{
    int A, B;
    set <int> AliceCartas;
    set <int> BeatrizCartas;

    while (cin >> A >> B)
    {
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

        int cartasTrocadas = 0;
        while (!AliceCartas.empty() && !BeatrizCartas.empty())
        {
            int cartaAlice = *AliceCartas.begin();
            int cartaBeatriz = *BeatrizCartas.begin();

            if (AliceCartas.count(cartaBeatriz) + BeatrizCartas.count(cartaAlice) == 0)
            {
                cartasTrocadas++;
            }
            AliceCartas.erase(cartaAlice);
            BeatrizCartas.erase(cartaBeatriz);
        }

        cout << cartasTrocadas << endl;
    }

    return 0;
}