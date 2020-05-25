#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    char word[30], letter[1], secret[30];
    int size, i, chances, hits;
    bool hit;

    chances=6;
    size=0;
    i=0;
    hit=false;
    hits=0;

    cout << "Say to your friend cover the eyes and enter the secret word: ";
    cin >> word;
    system("cls");

    while(word[i] != '\0')
    {
        i++;
        size++;
    }

    for (i=0 ; i < 30; i++)
    {
        secret[i]='-';
    }
    
    while ((chances>0) && (hits<size))
    {
        cout << "Remaining chances: "<< chances << "\n\n";
        cout << "Secret word: ";
        for (i = 0; i < size; i++)
        {
            cout << secret[i];
        }
        cout << "\n\nType a letter: ";
        cin >> word[0];
        for (i = 0; i < size; i++)
        {
            if (word[i]==letter[0])
            {
                hit=true;
                secret[i]=word[i];
                hits++;
            }
        }
        if (!hit)
        {
            chances--;
        }
        hit=false;
        system("cls");
    }
    
    if (hits==size)
    {
        cout << "You won!\n";
    }
    else
    {
        cout << "You lose\n";
    }
    
    system("pause");
    
    return 0;
}