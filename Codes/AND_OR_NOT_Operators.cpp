#include <iostream>

using namespace std;

int main()
{

int num,num2,num3,num4;

num=5;
num2=8;
num3=7;


if (num>4 && num<7)
{
    cout << "\n\nAccepted\n";
}
else
{
    cout << "\n\nNot Accepted\n";
}


if (num2<3 || num2>8)
{
    cout << "\n\nAccepted\n";
}
else
{
    cout << "\n\nNot Accepted\n";
}

/*
3 - 6
10 - 14
16 - 19
*/

if ((num3>=3 && num3<=6) || (num3>9 && num3<15) || (num3>15 && num<20))
{
    cout << "\n\nAccepted\n";
}
else
{
    cout << "\n\nNot Accepted\n";
}

/*NOT operator "!"
if(num==1) / if(num)
if(num==0) / if(!num)
if(num !=1) / if(!num)
*/

num4=1;

if (!num4)
{
    cout << "\n\ngo to the beach\n";
}
else
{
    cout << "\n\ngo to the movie theater\n";
}


return 0;
}