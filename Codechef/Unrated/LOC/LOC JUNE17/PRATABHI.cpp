#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,q,t,p,i,j,f=0;
    long long k,b,x=0;
    cin >> n >> q;
    long long a[n];
    for(i=0;i<n;i++)
     a[i]=0;
    long long s[n];
    a[n]={0};
    while(q--)
    {
        cin >> t;
        if(t==1)
         cin >> p >> k;
        else
         cin >> b;
        if(t==1)
         a[p-1]=k;
        else
        {
            s[0]=a[0];
            for(i=1;i<n;i++)
            {
                s[i]=a[i] | s[i-1];
            }
            /*long long max_ele = s[0];
            for (i=1; i<n; i++)
            {
                if (s[i] > max_ele)
                 max_ele = s[i];
            }
            long long m = (1 << (int)(log2(max_ele) + 1) ) - 1;
            long long dp[n+1][m+1];
            for (i=0; i<=n; i++)
            {
                for (int j=0; j<=m; j++)
                 dp[i][j] = 0;
            }
            dp[0][0] = 1;
            for (i=1; i<=n; i++)
            {
                for (j=0; j<=m; j++)
                 dp[i][j] = dp[i-1][j] + dp[i-1][j^s[i-1]];
            }
            if(dp[n][b]>0)
             cout << "YES"<<endl;
            else
             cout<<"NO"<<endl;*/
            for(i=1;i<(1<<n);i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i&(1<<j))
                     x^=s[j];
                }
                if(x==b)
                {
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }
            }
            if(f==0)
             cout<<"NO"<<endl;
            x=0;f=0;
        }
        x=0;f=0;
    }
	return 0;
}
