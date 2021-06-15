#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a = 0;
    vector<int>v;
    for(int i=0;i<n-1;i++){
        v.push_back(i+1);
        a+=(i+1);
    }
    v.push_back(-1*a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}