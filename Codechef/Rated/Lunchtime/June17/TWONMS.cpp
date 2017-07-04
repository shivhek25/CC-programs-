#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    long long int a,b,n,p1,p2,a1,d;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> n;
        if(n%2==0)
        {
            p1=n/2;
            p2=n/2;
        }
        else
        {
            p1=(n+1)/2;
            p2=(n-1)/2;
        }
        d=p1-p2;
        a1=a*(int)pow(2,d);
        if(a1>b)
        {
            cout << (int)(a1/b)<<endl;
        }
        else
         cout << (int)(b/a1)<<endl;
    }
	return 0;
}
 
