#include <iostream>

using namespace std;

int main(){

    int num1=10;
    int num2=50;
    int sun=0;
    int sun2=1;
    char opc='s';

    // operators  >, <, >=, <=, ==(equal), !=(different)
    if (num1 > num2) /* condition */
    {
      cout << "Result: TRUE";  /* if TRUE runs this row */
    }
    else
    {
      cout << "Result: FALSE";  /* if not TRUE runs this row */
    }
    
    cout << "\n\n";

    if ( sun == 1)
    {
        cout << "go to the beach";
    }
    else
    {
        cout << "go to movie theater";
    }

    cout << "\n\n";

    if ( sun2 )
    {
        cout << "go to the beach";
    }
    else
    {
        cout << "go to movie theater";
    }
    


    return 0;
}