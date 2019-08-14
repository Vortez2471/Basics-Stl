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
	int n;
	cin>>n;
	int z=0,o=0,t=0,m;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		if(m==0)
			z++;
		else if(m==1)
			o++;
		else if(m==2)
			t++;
	}
	for(int i=0;i<z;i++)
			cout<<0<<endl;
	for(int i=0;i<o;i++)
		cout<<1<<endl;
	for(int i=0;i<t;i++)
		cout<<2<<endl;
}