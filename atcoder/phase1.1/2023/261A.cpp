#include <bits/stdc++.h>
using namespace std;
int main(){
  int Rmin,Rmax,Lmin,Lmax;
  cin>>Rmin>>Rmax>>Lmin>>Lmax;
  if(Rmin<=Lmin&&Lmax<=Rmax){
    cout<<Lmax-Lmin<<endl;
  }
  else if(Lmin<=Rmin&&Rmax<=Lmax){
    cout<<Rmax-Rmin<<endl;
  }
  else if(Rmax<Lmin||Lmax<Rmin){
    cout<<0<<endl;
  }
  else {
    cout<<min(abs(Rmax-Lmin),abs(Rmin-Lmax))<<endl;
  }
return 0;
}
