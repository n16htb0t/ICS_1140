#include <bits/stdc++.h>
using namespace std;
int fact(int a){
if(a <=1)
	return 1;
else
	return a*fact(a-1);
}
 int main(){
 	int a;
 	 cin >> a;
 	cout << fact(a) << "\t" << endl;

 }