#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
	int flag=1;
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	return true;
	else
	return false;
}

int nearestPrime(int num)
{
	int flag=1,ans;
	int l=num,r=num;
	if(isprime(num))
	ans=num;
	else{
			while(flag)
	{
		l=l-1;
		r=r+1;
		if(isprime(l))
		{
			flag=0;
			ans=l;
			break;
		}
		else if(isprime(r))
		{
			flag=0;
			ans=r;
			break;
		}
		
	}
		
	}
	return ans;

}
int main()
{
	int num;
	cin>>num;
	cout<<nearestPrime(num);
	
	
}
