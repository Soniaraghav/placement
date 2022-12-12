#include<bits/stdc++.h>
using namespace std;

int find_ele(vector<int> &v)
{
    int n;
    n=v.size();
    for(int i=0;i<n;i++)
    {
        if(v[i]==36)
        {
        return 1;
        break;
        }
      
    }
    return 0;

}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(36);
    v.push_back(45);
    v.push_back(60);
    
    cout<<find_ele(v)<<endl;
}

