#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n,q,l,r,x,y,j,i,p,s=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
     cin >> a[i];
    cin >> q;
    while(q--)
    {
        cin >> l >> r >> x >> y;
        for(i=(l-1);i<=(r-1);i++)
        {
            p=a[i];
            int b[p+1];
            for(j=0;j<=p;j++)
             b[j]=0;
            while (p%2 == 0)
            {
               b[2]++;
               p/=2;
            }
            for(j = 3; j <= sqrt(p); j+=2)
            {
               while (p%j == 0)
               {
                  b[j]++;
                  p/=j;
               }
            }
            if(p>2)
             b[p]++;
            for(j=x;j<=y;j++)
            {
                if(j<=a[i])
                 s+=b[j];
            }
        }
        cout << s << endl;
        s=0;
    }
	return 0;
}
