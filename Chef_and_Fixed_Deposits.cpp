#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes heret;
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for (int i = 0; i < n; i++) {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int sum=0,c=0;
	    for (int i = n-1; i >= 0; i--) {
	        sum+=arr[i];
	        c++;
	        if(sum>=x)
	        break;
	    }
	    if(sum<x)
	    cout<<"-1"<<endl;
	    else
	    cout<<c<<endl;
	}
}
