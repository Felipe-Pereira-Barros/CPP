#include <iostream>

using namespace std;

int main()
{

    int value;

    cout << "Select one color: \n";
    cout << "[1] = Green, [2] = Blue, [3] = Red \n";

    cin >> value;

    switch (value)
    {
        case 1:
            cout << "Color selected: Green\n";
            break;
    
        case 2:
            cout << "Color selected: Blue\n";
            break;

        case 3:
            cout << "Color selected: Red\n";
            break;

        default:
            cout << "Value selected invalid\n";
            break;
    }

    int value2;

    cout << "Select one color: \n";
    cout << "[1,2,3] = Green, [4,5,6] = Blue \n";

    cin >> value2;    

    switch (value2)
    {
        case 1:
        case 2:
        case 3:
            cout << "Color selected: Green\n";
            break;
    
        case 4:
        case 5:
        case 6:
            cout << "Color selected: Blue\n";
            break;


        default:
            cout << "Value selected invalid\n";
            break;
    }
    
    cout << "\nProgram Finished";

    return 0;
}