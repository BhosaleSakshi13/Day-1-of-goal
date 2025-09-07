#include<iostream>
using namespace std;

int main()
{
    int num = 2;

    cout<<"Even Numbers - ";
    while(num != 21)
    {
        if(num % 2 == 0)
        {
            cout<<endl<<num;
        }
        
        num++;
    }
    return 0;
}