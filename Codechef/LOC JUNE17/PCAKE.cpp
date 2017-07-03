#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,c=0,num,p=0,k,o=0;
    long long n,r=0,f=0;
    cin >> t ;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]>p)
             p=a[i];
            if(a[i]!=1)
             o=1;
        }
        if(o==1)
        {
         long long b[p];
         for(i=0;i<p;i++)
          b[i]=0;
         for(i=0;i<n;i++)
         {
            for(j=i;j<n;j++)
            {
                num=a[j];
                while(num%2==0)
                {
                    b[1]++;
                    num/=2;
                }
                for(k=3;k<=sqrt(num);k+=2)
                {
                    while(num%k==0)
                    {
                        b[k-1]++;
                        num/=k;
                    }
                }
                if(num>2)
                 b[num-1]++;
                for(k=0;k<a[j];k++)
                {
                    if(b[k]>1)
                     c=1;
                }
                if(c==0)
                 r++;
                else
                 break;
                f=0;c=0;
            }
            for(k=0;k<p;k++)
             b[k]=0;
            f=0;c=0;
         }
         cout<<r<<endl;
         r=0;f=0;c=0;p=0;
        }
        else
        {
            r=(n*(n+1))/2;
            cout<<r<<endl;
            r=0;
        }
        o=0;p=0;
    }
	return 0;
}
