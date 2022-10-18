#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a,b,c,x,y,z,p,q,r,s,t;
    cin>>a>>b>>c>>x>>y>>z;
    int s1=a+b+c,s2=x+y+z;
    if(s1>s2)
    cout<<"Dragon";
    else if(s2>s1)
    cout<<"Sloth";
    else if(a>x)
    cout<<"Dragon";
    else if(x>a)
    cout<<"Sloth";
    else if(b>y)
    cout<<"Dragon";
    else if(y>b)
    cout<<"Sloth";
    else
    cout<<"Tie";
    cout<<endl;
    
}
	return 0;
}
