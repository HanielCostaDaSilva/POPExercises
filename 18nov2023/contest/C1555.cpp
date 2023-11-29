#include <bits/stdc++.h>
using namespace std;

double rafael(int x, int y)
{
    return pow(3 * x, 2) + pow(y, 2);
}

double beto(int x, int y)
{
    return 2 * pow(x, 2) + pow(5 * y, 2);
}

double carlos(int x, int y)
{
    return -100 * x + pow(y, 3);
}

int main()
{
    int flag;
    cin >> flag;
    for (int i = 0; i < flag; i++)
    {

        int x, y;
        cin >> x >> y;

        const double rafaelR = rafael(x, y);
        const double carlosR = carlos(x, y);
        const double betoR = beto(x, y);

        if (rafaelR > carlosR && rafaelR > betoR)
        {
            cout << "Rafael ganhou" << endl;
        }
        else if (carlosR > rafaelR && carlosR > betoR)
        {
            cout << "Carlos ganhou" << endl;
        }
        else
        {
            cout << "Beto ganhou" << endl;
        }
    }
    return 0;
}