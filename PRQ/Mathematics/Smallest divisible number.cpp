/*
Given a number n the task is to complete the function which returns an integer denoting 
the smallest number evenly divisible by each number from 1 to n.
*/

#include <bits/stdc++.h>
using namespace std;

long long getSmallestDivNum(long long n);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<getSmallestDivNum(n)<<endl;
	}
	return 0;
	
}



long long getSmallestDivNum(long long n)
{
    long long ans=1;
    for(long long i=1;i<=n;i++){
        ans=(ans*i)/(__gcd(ans,i));
    }
    return ans;
}
