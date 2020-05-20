#include <iostream>

using namespace std;

int main()
{

    int teste;

    teste=0;

    while (teste<30)
    {
        
        cout << teste << "\n";

        if (teste == 15)
            {
                break;
            }   

        teste++;  
    }
    return 0;
}