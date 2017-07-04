#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,f=0;
    long long s,sum1=0,sum2=0;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        int a[n];
        for(i=0;i<n;i++)
        cin >>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            sum1+=a[i];
            sum2=(a[i]*(n-i-1));
            if((sum1+sum2)==s)
            {
                cout << a[i] <<endl;
                f=1;
                break;
            }
        }
        if(f==0)
         cout << -1 << endl;
         sum1=0;sum2=0;f=0;
    }
	return 0;
}
