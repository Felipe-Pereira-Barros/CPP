#include <iostream>

using namespace std;

int main()
{

    int matrice [3] [4];
    int l,c;

    for (l=0; l<3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            cin >> matrice[l][c];
        }
    }

    cout << "\n";

    for (l=0; l<3; l++)
    {
        for (c = 0; c < 4; c++)
        {
            cout << matrice[l][c] << "";
        }
        cout << "\n";
    }
    

    return 0;
}