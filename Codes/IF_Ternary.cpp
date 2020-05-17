#include <iostream>

using namespace std;

int main()
{

    //(expression) ? value : value2;

    int n1,n2,note,x,n3;

    string res,res2;

    cout << "Enter the first note: ";
    cin >> n1;
    cout << "Enter the second note: ";
    cin >> n2;

    note=n1+n2;

    /* note >= 60 Approved
    <60 Not approved*/

    (note >= 60) ? res="Approved" : res="Not Approved";

    cout <<"\nstudent situation: " << res << "\n";

    res2=(note >= 60) ? "Approved" : "Not Approved";

    cout <<"\nstudent situation: " << res << "\n";

    x=5;

    cout << "Enter the X value: ";
    cin >> n3;

    (n3 >=10) ? x++ : x-- ;

    cout << "\nNew X value: " << x << "\n";

    return 0;
}