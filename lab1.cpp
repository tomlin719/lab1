#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int n;
	cout << "enter an integer:";
	cin >> n;
	while(n!=1){
		cout << n << " ";
		if(n%2==1)
			n=3*n+1;
		else
			n=n/2;
	}
	cout << n << endl;
	return 0;
}
