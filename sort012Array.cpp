#include<iostream>
#include<vector>
using namespace std;

int main() {    
    vector<int> nums={2,0,2,1,1,0,1,2,1,0,0,1};
    vector<int> v1;
    int a=0,b=0,c=0;
    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]==1)
            a+=1;
        else if(nums[i]==0)
            b+=1;
        else
            c+=1; 
    }
    for(int i=0; i<b; i++)
        v1.push_back(0);
    for(int i=b-1; i<a+b-1; i++)
        v1.push_back(1);
    for(int i=a+b-1; i<c+a+b-1; i++)
        v1.push_back(2);

    for(int i=0; i<v1.size(); i++)
        cout<<v1.at(i)<<" ";
}