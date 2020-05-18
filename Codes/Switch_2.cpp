#include <iostream>

using namespace std;

int main()
{

    int value;

    cout << "Select a transport: \n";
    cout << "[1] = Car, [2] = Bike, [3] = Aeroplane, [4] = Helicopter\n";

    cin >> value;

    switch (value)
    {
        case 1:
        case 2:
            cout << "\nground transport\n";
            switch (value)
            {
                case 1:
                    cout << "Car selected \n";
                    break;
                case 2:
                    cout << "Bike selected \n";
                    break;
            }
        break;

        case 3:
        case 4:
            cout << "\nair transport\n";   
            switch (value)
            {
                case 3:
                    cout << "Aeroplane selected\n";
                    break;
                case 4:
                    cout << "Helicopter selected \n";
                    break;
            }

        break;
    
        default:
            cout << "Selected transport invalid\n";
            break;

    
    }

    cout << "\nProgram finished";
    
    return 0;
}