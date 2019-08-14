#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<list>
#include<unordered_map>
#include<unordered_set>
#define ll long long
#define MAX 100000003
#define MAX_RLEN 50
#define ll long long
#define pb push_back
#define pii pair<ll,ll> 
#define N 200005
#define PI 3.1415926535
using namespace std;

int main() 
{
    int i,k=0,n,j;
    cin>>n;

    int arr[n],brr[n],crr[n];

    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++)
        cin>>brr[i];

    for(i=0;i<n;i++) 
    {
        for(j=0;j<n;j++) 
        {
            if(arr[i]==brr[j])
            {
                crr[k]=arr[i];
                k++;
                brr[j]=NULL;
                break;
            }
        }
    }
    sort(crr, crr+k);
    
    cout << "[";
    for(i=0;i<k;i++)
       {
        cout<<crr[i];
         if(i<k-1)
             cout<<", ";
         else if(i==k-1)
            cout<<"]";
       }

    return 0;
}