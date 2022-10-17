// Start

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[3][3];
	    for(int i=0;i<3;i++)
	    for(int j=0;j<3;j++)
	    cin>>arr[i][j];
		// input the array
	    int a=arr[1][0]+arr[2][0]+arr[2][1];
	    int b=arr[0][1]+arr[0][2]+arr[1][2];
	    int c=(a>=b)?a:b;
	    cout<<c<<endl;
	}
	return 0;
}

// END
