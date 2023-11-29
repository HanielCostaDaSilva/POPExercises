#include <bits/stdc++.h>
#include <vector>
#include <cstdint>

using namespace std;

int main()
{
    vector<uint64_t> fibonacci{0, 1}; 
    int flag;
    cin >> flag;

    for (int i = 0; i < flag; i++)
    {
        int posicao;
        cin >> posicao;

        if (posicao > fibonacci.size() - 1)
        {
            for (int j = fibonacci.size() - 1; j < posicao; j++)
            {
                fibonacci.push_back(fibonacci[j - 1] + fibonacci[j]);
            }
        }

        cout << "Fib(" << posicao << ") = " << fibonacci[posicao] << endl;
    }

    return 0;
}
