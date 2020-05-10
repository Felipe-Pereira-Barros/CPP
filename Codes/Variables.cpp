#include <iostream>

using namespace std;

int main(){

    //TYPE & NAME;
    //TYPE & NAME = VALUE;

    int LIFE=100;//10,25,50,75,100
    char LETTER='B';//'A','B','C'... JUST 1 CHARACTER
    double DECIMAL=5.2;//2.4999999
    float DECIMAL2=5.2;//2.5
    bool ALIVE=true;//true = yes(1) / false = no(0)
    string NAME="Felipe";//"Felipe Pereira Barros"

    cout << LIFE <<"\n";
    cout << LETTER <<"\n";
    cout << DECIMAL <<"\n";
    cout << ALIVE <<"\n";
    cout << NAME <<"\n";

    /**/
    // 

    cout << "Enter the number of lives: ";
    cin >> LIFE;

    cout << "Type a letter: ";
    cin >> LETTER;

    cout << "Enter the amount of money: ";
    cin >> DECIMAL;

    cout << "Type your name: ";
    cin >> NAME;

    cout << "\nLIFE: "<< LIFE << "\nLETTER: " << LETTER << "\nDECIMAL: " << DECIMAL <<"\nALIVE: " << ALIVE << "\nNAME: " << NAME << "\n";

    return 0;

}