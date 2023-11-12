#include <bits/stdc++.h>
using namespace std;
int main ( ){
	int d; cin >> d;
	string s = "Christmas";
	string t = "Eve";
	if(d==25){
		cout << s << endl;
	}else if( d == 24) {
		cout <<  s << " " << t << endl;
	}else if (d == 23){
		cout << s << " " << t << " " << t << endl;
	}else if ( d == 22) {
		cout << s << " " << t << " " << t << " " << t << endl;
	}
    return 0;
  }
