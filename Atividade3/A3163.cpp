#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    string entrada;
    string cardeal;

    int aviaoQuant = 0;
    queue<string> pontoLeste, pontoOeste, pontoSul, pontoNorte;

    while (cin >> entrada && entrada != "0")
    {
        if (entrada == "-1")
        {
            cardeal = "oeste";
        }
        else if (entrada == "-2")
        {
            cardeal = "sul";
        }
        else if (entrada == "-3")
        {
            cardeal = "norte";
        }
        else if (entrada == "-4")
        {
            cardeal = "leste";
        }
        else
        {
            if (cardeal == "oeste")
            {
                pontoOeste.push(entrada);
            }
            else if (cardeal == "sul")
            {
                pontoSul.push(entrada);
            }
            else if (cardeal == "norte")
            {
                pontoNorte.push(entrada);
            }
            else if (cardeal == "leste")
            {
                pontoLeste.push(entrada);
            }

            aviaoQuant++;
        }
    }

    // Saída: Oeste Norte Sul Leste
    vector<queue<string>> pontos = {pontoOeste, pontoNorte, pontoSul, pontoLeste};

    int ordemSaida = 0;
    while (aviaoQuant > 0)
    {
        if (!pontos[ordemSaida].empty())
        {
            cout << pontos[ordemSaida].front();
            pontos[ordemSaida].pop();
            aviaoQuant--;

            if (aviaoQuant > 0)
            {
                cout << " ";
            }
        }

        ordemSaida = (ordemSaida + 1) % 4;
    }

    cout << endl;
    return 0;
}
