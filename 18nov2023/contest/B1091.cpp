#include <iostream>
#include <string>

using namespace std;

int main()
{
    int flag;
    
    while (cin >> flag && flag != 0)
    {
        pair<int, int> coorPontDiv; // M e N
        cin >> coorPontDiv.first >> coorPontDiv.second;

        for (int i = 0; i < flag; i++)
        {
            string coor = "divisa";
            
            pair<int, int> coorResid; // X e Y
            cin >> coorResid.first >> coorResid.second;

            if (coorResid.first != coorPontDiv.first && coorResid.second != coorPontDiv.second)
            {
                if (coorResid.first > coorPontDiv.first)
                    coor = "N";
                else
                    coor = "S";

                if (coorResid.second > coorPontDiv.second)
                    coor += "E";
                else
                    coor += "O";
            }

            cout << coor << endl;
        }
    }

    return 0;
}
