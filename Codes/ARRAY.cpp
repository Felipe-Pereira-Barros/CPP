#include <iostream>

using namespace std;

int main()
{

    int vector[5];
    int i;

    vector[0] = 10;
    vector[1] = 20;
    vector[2] = 30;
    vector[3] = 40;
    vector[4] = 50;
    
    for (i=0; i<sizeof(vector)/4; i++)
    {
        cout << vector[i] << "\n";
    }
    
    cout << "\n";
    
    //another way of describing

    int size=7;
    int vector2[size];
    int i2;

    vector2[0] = 10;
    vector2[1] = 20;
    vector2[2] = 30;
    vector2[3] = 40;
    vector2[4] = 50;
    vector2[5] = 60;
    vector2[6] = 70;
    
    for (i2=0; i2<size; i2++)
    {
        cout << vector2[i2] << "\n";
    }

    cout << "\n";
    //another way of describing

    int vector3[5]={100,200,300,400,500};
    int i3;

    
    for (i3=0; i3<sizeof(vector3)/4; i3++)
    {
        cout << vector3[i3] << "\n";
    }

    return 0;
}