#include <iostream>
#include <bits/stdc++.h>
#define m 1000000007
using namespace std;
long long int a[100004],b[100004],c[100004];
int main()
{
    long long int s1=0,s2=0,sum=0,sa=0,sc=0;
    int t,p,q,r,i,j,k,f=0,g=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&p,&q,&r);
        for(i=0;i<p;i++)
        {
            scanf("%lld",&a[i]);
            sa+=a[i];
        }
        for(i=0;i<q;i++)
         scanf("%lld",&b[i]);
        for(i=0;i<r;i++)
        {
            scanf("%lld",&c[i]);
            sc+=c[i];
        }
        sort(a,a+p);
        sort(b,b+q);
        sort(c,c+r);
        j=0;k=0;
        if((b[0]>=a[p-1])&&(b[0]>=c[r-1]))
        {
            for(i=0;i<q;i++)
            {
                sum=((sum%m)+(((sa+(p*b[i]))%m)*((sc+(r*b[i]))%m))%m)%m;
            }
        }
        else if(b[0]>=a[p-1])
        {
            for(i=0;i<q;i++)
            {
                while(j!=r)
                {
                    if(c[j]<=b[i])
                    {
                        s1+=c[j];
                        g++;
                        j++;
                    }
                    else
                     break;
                }
                sum=((sum%m)+(((sa+(p*b[i]))%m)*((s1+(g*b[i]))%m))%m)%m;
            }
        }
        else if(b[0]>=c[r-1])
        {
            for(i=0;i<q;i++)
            {
                while(k!=p)
                {
                    if(a[k]<=b[i])
                    {
                        s2+=a[k];
                        f++;
                        k++;
                    }
                    else
                     break;
                }
                sum=((sum%m)+(((sc+(r*b[i]))%m)*(((s2+f*b[i]))%m))%m)%m;
            }
        }
        else
        {
         for(i=0;i<q;i++)
         {
            while(j!=r)
            {
                if(c[j]<=b[i])
                {
                    s1+=c[j];
                    g++;
                    j++;
                }
                else
                 break;
            }
            while(k!=p)
            {
                if(a[k]<=b[i])
                {
                    s2+=a[k];
                    f++;
                    k++;
                }
                else
                 break;
            }
            sum=((sum%m)+((((b[i]*g)+s1)%m)*(((b[i]*f)+s2)%m))%m)%m;
         }
        }
        printf("%lld\n",sum);
        s1=0;s2=0;f=0;g=0;sum=0;sa=0;sc=0;
    }
	return 0;
}  
