#include <iostream>
using namespace std;
int main() {
	int X, Y, N;
	cin >> X >> Y >> N;
	if(3*X>Y){
		cout << X*(N%3)+Y*(N/3);
	}
  else{
		cout << X*N;
	}
 return 0;
}
