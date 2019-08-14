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

int ans(int arr[], int n) 
{ 
	int inc[n],dec[n],i,max; 
	inc[0] = 1; 
	dec[n-1] = 1; 


	for (i = 1; i < n; i++) 
	inc[i] = (arr[i] >= arr[i-1])? inc[i-1] + 1: 1; 

	for (i = n-2; i >= 0; i--) 
	dec[i] = (arr[i] >= arr[i+1])? dec[i+1] + 1: 1; 

	max = inc[0] + dec[0] - 1; 

	for (i = 1; i < n; i++) 
		if (inc[i] + dec[i] - 1 > max) 
			max = inc[i] + dec[i] - 1; 

	return max; 
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{ 
		int n;
		cin>>n;
		int arr[n]; 
		for(int i=0;i<n;i++)
			cin>>arr[i];
		cout <<ans(arr, n)<<endl; 
	}
	return 0; 
} 