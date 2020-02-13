#include<bits/stdc++.h>
using namespace std;
int hcf(int a, int b)
{
	if(b==0)
		return a;
	return hcf(b, a%b);
}
int lcm(int a, int b)
{
	int x=hcf(a,b);
	//cout<<x<<endl;
	return (a*b)/x;
}
int main()
{
	int a=2, b=3;
	cout<<lcm(a,b);
}
