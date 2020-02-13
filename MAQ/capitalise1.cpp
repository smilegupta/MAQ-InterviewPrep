#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	s="heLLO";
	transform(s.begin(),s.end(),s.begin(),::tolower);
	s[0]=s[0]-32;
	cout<<s;
}
