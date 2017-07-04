#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,f1=0,f=0,p,q,flag=1,count=0,i,j,r,z;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n][2510];
        int b[k];
        int d[n][2509];
        for(i=0;i<k;i++)
         b[i]=0;
        for(i=0;i<n;i++)
        {
            a[i][0]=0;
            for(j=0;j<=a[i][0];j++)
               cin>>a[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<=a[i][0];j++)
             d[i][j-1]=a[i][j];
            sort(d[i],d[i]+a[i][0]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                while(f<a[i][0] && f1<a[j][0])
                {
                    if(d[i][f]<d[j][f1])
                    {
                        if(d[i][f]==flag)
                         flag++;
                        else
                         break;
                        f++;
                        //cout<<55<<" ";
                    }
                    else if(d[i][f]>d[j][f1])
                    {
                        if(d[j][f1]==flag)
                         flag++;
                        else
                         break;
                        f1++;
                    }
                    else
                    {
                        if(d[j][f1]==flag)
                         flag++;
                        else
                         break;
                        f1++;f++;

                    }
                }
                while(f<a[i][0])
                {
                    if(d[i][f]==flag)
                     flag++;
                    f++;
                }
                while(f1<a[j][0])
                {
                    if(d[j][f1]==flag)
                     flag++;
                    f1++;
                }
                if((flag-1)==k)
                 count++;
                f=0;f1=0;flag=1;
            }
        }
        cout << count << endl;
        count=0;f=0;flag=1;f1=0;
    }
	return 0;
}
 
