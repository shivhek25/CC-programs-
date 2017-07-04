#include <iostream>
using namespace std;

int main()
{
    int t,n,i,j,k,c=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
         a[i]=i+1;
        cout << n << endl;
        for(k=1;k<=n;k++)
        {
            cout<<n<<endl;
         for(i=1;i<=n;i++)
         {
            cout << i << " ";
            if((c+2)>n)
             cout << a[0]<<" "<<a[n-1]<<" ";
            else
            {
               for(j=c;j<c+2;j++)
                cout << a[j] << " ";
            }
            cout << endl;
         }
         c++;
        }
        c=0;
    }
	return 0;
}
