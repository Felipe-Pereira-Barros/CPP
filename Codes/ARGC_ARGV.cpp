#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{

    if (argc>1)
    {
       if (strcmp(argv[1],"sun"))
       {
           cout << "Go to the club.\n\n";
       }
        else
        {
            if (!strcmp(argv[1],"cloudy"))
            {
                cout << "Go to the movie theater.\n\n";
            }
            else
            {
                cout << "Stay home.\n\n";
            }
            
        }
        
    }
    
    system ("pause");

    return 0;
}