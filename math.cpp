#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a = 20, b = 10;  
    for(int i=11; i<99; i++)
    {
        int s = a*i;
        if(ceil((double)sqrt(s)) == floor((double)sqrt(s)))
        {
            cout<< a << "*" << i<<endl;
        }    
    }
}