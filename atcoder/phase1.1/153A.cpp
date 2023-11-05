#include <bits/stdc++.h>
using namespace std;
int main()
{
  int h,a,count;
  cin >> h>> a;
  for (int i =h ;i>0 ;i-=a){
      count++;
  }
  cout<<count;
}
