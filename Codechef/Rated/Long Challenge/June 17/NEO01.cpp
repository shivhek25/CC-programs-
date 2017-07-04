#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,sp=0,p,c=0,sn=0,l=0,j;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int a[n];
        long long int b[n];
        for(i=0;i<n;i++)
         cin >> a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                p++;
                sp+=a[i];
            }
            else
             b[c++]=a[i];
        }
        sort(b,b+c);
        l=sp*p;
        for(i=c-1;i>=0;i--)
        {
            sp+=b[i];
            p++;
            if((sp*p)>=l)
             l=(sp*p);
            else
             break;
        }
        for(j=i;j>=0;j--)
         sn+=b[j];
        cout << (sn+l) << endl;
        p=0;sp=0;l=0;sn=0;c=0;
    }
	return 0;
}
