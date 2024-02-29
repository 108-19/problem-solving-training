#include <iostream>
using namespace std;
string player[10][2] = {
	{"tourist", "3858"},
	{"ksun48", "3679"},
	{"Benq", "3658"},
	{"Um_nik", "3648"},
	{"apiad", "3638"},
	{"Stonefeang", "3630"},
	{"ecnerwala", "3613"},
	{"mnbvmar", "3555"},
	{"newbiedmy", "3516"},
	{"semiexp", "3481"}
};
string S;
int main() {
	cin>>S;
	for(int i = 0; i < 10; i++){
		if(player[i][0] == S){
			cout<<player[i][1];
		}
	}
	return 0;
	
}
