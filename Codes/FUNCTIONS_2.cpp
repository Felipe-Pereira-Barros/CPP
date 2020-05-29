#include <iostream>

using namespace std;

void sum(int n1, int n2);
void sum();

int main()
{

    sum(20,30);
    sum();

    return 0;
}

void sum(int n1, int n2)
{
    int re;
    re=n1+n2;
    cout << "\nSum of " << n1 << " with " << n2 << " = " << re << "\n";

}

void sum()
{
    int n1,n2,re;
    n1=10;
    n2=20;
    re = n1+n2;

    cout << "Sum of " << n1 << " with " << n2 << " = " << re;
}