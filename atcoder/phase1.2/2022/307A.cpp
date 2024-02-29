#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(7*n);
	
	for(int i=0;i<7*n;i++)
    cin >> a[i];
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=0; j<7; j++)
      sum+=a[7*i+j];
		if(i != n-1)
      cout << sum << ' ';
		else 
      cout << sum << endl;
	}
	return 0;
}
