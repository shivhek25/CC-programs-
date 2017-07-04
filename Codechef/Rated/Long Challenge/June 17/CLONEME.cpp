#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t,q,a,b,c,d,p1=0,p2=0,f=0;
    int i,n;
    cin >> t;
    while(t--)
    {
        cin >> n >> q;
        int s[n];
        for(i=0;i<n;i++)
         cin >> s[i];
        while(q--)
        {
            cin >> a >> b >> c >> d;
            int a1[b-a+1];
            int a2[d-c+1];
            p1=a-1;
            p2=c-1;
            for(i=0;i<(b-a+1);i++)
            {
             a1[i]=s[p1++];
             a2[i]=s[p2++];
            }
            int h1=sizeof(a1)/sizeof(a1[0]);
            int h2=sizeof(a1)/sizeof(a1[0]);
            sort(a1,a1+h1);
            sort(a2,a2+h2);
            for(i=0;i<(b-a+1);i++)
            {
                if(a1[i]!=a2[i])
                 f++;
            }
            if(f<=1)
             cout << "YES" <<endl;
            else
             cout << "NO" << endl;
            f=0;p1=0;p2=0;
        }
    }
	return 0;
}
