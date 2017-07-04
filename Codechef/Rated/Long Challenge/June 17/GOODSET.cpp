#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long t,n,i;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==1)
         cout << 1 <<endl;
        else if(n==2)
         cout << 1<< " "<<2<<endl;
        else if(n==3)
         cout << 1<<" "<<2<<" "<<4<<endl;
        else
        {
            long j,p=4;
            cout << 1<<" "<<2<<" "<<4<<" ";
            for(j=4;j<=n;j++)
            {
                p+=3;
                cout << p<<" ";
            }
            cout <<endl;
        }
    }
	return 0;
}
