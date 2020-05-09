#include <iostream>
#include <vector>
#include <STRING>

using namespace std;

int main()
{

    vector<string> msg{"Hello","C++","World","from","VS code!"};

    for(const string&word:msg)
    {
        cout<<word<<" ";
    }
    cout<<endl;

return 0;
}