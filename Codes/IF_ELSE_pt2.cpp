 #include <iostream>
 #include <cstdlib>

 using namespace std;

 int main(){

    int n1,n2,res;
    char opc;

    begin:

    system("cls");

    cout << "enter the note 1 value: ";
    cin >> n1;
    cout << "enter the note 2 value: ";
    cin >> n2;

    res=n1+n2;

    /*
    >=60 Approved
    >=40 & <60 New try
    <40 Failed
    */

    if (res >=60)
    {
        cout << "\nAprroved\n";
    }
    else if (res >=40)
    {
        cout << "\nNew try\n";
    }
    else
    {
        cout << "\nFailed\n";
    }

    cout << "\nNew entries? [s/n]: ";
    cin >> opc;

    if (opc=='s' or opc =='S')
    {
        goto begin;
    }
    
     return 0;
 }