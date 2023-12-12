#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        queue<int> baralho;
        if (n == 0)
        {
            break;
        }
        for (int i = 1; i <= n; i++)
        {
            baralho.push(i);
        }
        cout << "Discarded cards: ";
        while (baralho.size() >= 2)
        {
            if (baralho.size() == 2)
            {
                cout << baralho.front();
            }
            else
                cout << baralho.front() << ", ";

            baralho.pop();
            baralho.push(baralho.front());
            baralho.pop();
        }
        cout << endl;
        cout << "Remaining card: " << baralho.front() << endl;
    }
    return 0;
}