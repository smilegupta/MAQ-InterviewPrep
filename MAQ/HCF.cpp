#include<bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
	if(b==0)
		return a;
	return hcf(b,a%b);
}
int main(){
	int a=2, b=3;
	cout<<hcf(a,b)<<endl;
	
}
