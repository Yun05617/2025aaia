//week12-1.cpp
///SOIT107_ADVANE_008_c_c++
#include <iostream>
using namespace std;
int prime(int n){
	for(int i=2; i<n; i++){
		if(n%10==0)return 0;
	}
	return 1;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
