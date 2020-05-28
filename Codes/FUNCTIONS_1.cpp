#include <iostream>

using namespace std;

void text();
void sum(int n1, int n2);
int sum2(int n1, int n2);
void tr(string tra[4]);

int main()
{
    int res;
    string transp[4]=("car","bike","boat","airplane");

    sum(7,3);

    res=sum2(175,25);

    cout << "Res Value: " << res << "\n";

    tr(transp);

    return 0;
}

void text()
{
    cout << "\nFelipe Pereira Barros\n";

}

void sum(int n1, int n2)
{

    cout << "sum of the values " << n1+n2 << "\n";

}

int sum2(int n1, int n2)
{
    return n1+n2;
}

void tr(string tra[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << tra[i] << "\n";
    }
    
}