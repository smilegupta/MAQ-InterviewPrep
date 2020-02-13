#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int x)
{
	int s = sqrt(x); 
    return (s*s == x); 
}
bool isfibbo(int n){
	 return isPerfectSquare(5*n*n + 4) || isPerfectSquare(5*n*n - 4); 
}
int main(){
	int i=10;
	if(isfibbo(i))
	cout<<"Number is fibonacci number";
	else
	cout<<"Number is not fibonacci number";
}
