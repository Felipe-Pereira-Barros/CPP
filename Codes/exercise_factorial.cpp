#include <iostream>

using namespace std;

int fatorial(int n);

int main(){

    int val, res;

    val=5;
    res=fatorial(val);
    cout << "Fatorial de " << val << ": " << res;

    return 0;
}

int fatorial(int n){
    if(n==0){
        return 1;
    }
    return n*fatorial(n-1);
}