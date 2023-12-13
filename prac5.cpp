#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x>>y;
	    int z=x*10/100;
	    int q=y+z;
	    cout<<q<<endl;
	}
	return 0;
}
