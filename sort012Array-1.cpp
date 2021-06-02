#include<iostream>
#include<vector>

using namespace std;

void SortArray(vector<int> v1)
{
    int mid = 0,low = 0,high = v1.size()-1;
    while(mid<=high)
    {
        switch (v1[mid])
        {
        case 0:
            swap(v1[low++],v1[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(v1[mid],v1[high--]);
            break;
        
        }
    }
    for(int i=0; i<v1.size(); i++)
        cout<<v1.at(i);
}
int main() {
    vector<int> v1;
    int b;
    for(int i=0; i<10; i++)
        {
        cin >> b;
        v1.push_back(b);
        }
    SortArray(v1);
    
}