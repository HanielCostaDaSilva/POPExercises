#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int flag;
    cin >> flag;
    stack<char> placar;
    int brindes = 0;

    for (int i = 0; i < flag; i++)
    {
        if (placar.empty())
        {
            // caso o placar esteja vazio, insira as letras F, A, C, E
            placar.push('F');
            placar.push('A');
            placar.push('C');
            placar.push('E');
        }

        char l1, l2, l3, l4;
        cin.ignore();
        cin >> l1 >> l2 >> l3 >> l4;
        char p4 = placar.top();
        // desempilhe as últimas 4 letras do placar
        placar.pop();
        char p3 = placar.top();
        placar.pop();
        char p2 = placar.top();
        placar.pop();
        char p1 = placar.top();
        placar.pop();

        if (l1 == p4 && l2 == p3 && l3 == p2 && l4 == p1)
        {
            // letras iguais, aumente o contador de brindes
            brindes++;
        }
        else
        {
            // letras diferentes, insira de volta no placar
            placar.push(p1);
            placar.push(p2);
            placar.push(p3);
            placar.push(p4);

            // insira as novas letras no placar
            placar.push(l1);
            placar.push(l2);
            placar.push(l3);
            placar.push(l4);
        }
    }

    cout << brindes << endl;

    return 0;
}
