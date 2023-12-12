#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<string> dicionarioAndy;
    string frase;

    while (cin >> frase)
    {
        // percorremos a frase deixando seus caracteres minúsculos
        string palavra = "";

        for (char caracter : frase)
        {
            caracter = tolower(caracter);

            // verificamos se o caracter é uma letra
            if (isalpha(caracter))
            {
                palavra += caracter;
            }
            // Caso não seja, adicionamos a palavra no dicionário e reiniciamos.
            else if (!palavra.empty())
            {
                dicionarioAndy.insert(palavra);
                palavra = "";
            }
        }
        // Adicionamos a última palavra ao dicionário.
        if (!palavra.empty())
        {
            dicionarioAndy.insert(palavra);
        }

    }
    // Imprimimos as palavras em ordem alfabética.
    for (const string &palavra : dicionarioAndy)
    {
        cout << palavra << endl;
    }

    return 0;
}
