#include <bits/stdc++.h>
using namespace std;
int knapsack(int val[],int wt[],int w,int n){
    int t[n+1][w+1];
       for(int i=0;i<n+1;i++){
           for(int j=0;j<w+1;j++){
               if(i==0||j==0){
                   t[i][j]=0;
               }
           }
       }
       for(int i=1;i<n+1;i++){
           for(int j=1;j<w+1;j++){
               if(wt[i-1]<=j){
                   t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
               }
               else{
                   t[i][j]=t[i-1][j];
               }
           }
          }
    return t[n][w];
}
int main()
{
   int n,w;
   cin>>n>>w;
   int val[n];
   int wt[n];
   for(int i=0;i<n;i++){
       cin>>wt[i];
   }
   for(int i=0;i<n;i++){
       cin>>val[i];
       
   }
   int ans = knapsack(val,wt,w,n);
   cout<<ans;
}