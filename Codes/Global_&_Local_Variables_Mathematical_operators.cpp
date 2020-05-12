#include <iostream>
using namespace std;

int n1,n2; //Global Variables

int main(){

    //Mathematical Operators: + - / * % ()

    int n3, n4; //local variables

    int RESULTS,RESULTS2,RESULTS3,RESULTS4;

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    RESULTS=(n1+n2+n3+n4)-10;

    RESULTS2=n1+n2*n4;

    RESULTS3=n1/n2;

    RESULTS4=n1%n2;

    cout << "the sum of all variables: " << RESULTS << "\n\n";

    cout << "The value of RES2 is: " << RESULTS2 << "\n\n";

    cout << "Division: " << RESULTS3 << "\n\n";

    cout << "Remainder: " << RESULTS4 << "\n\n";

    system("pause");   

    return 0;
}
