#include <iostream>
using namespace std;

int main()
{
    int t;
    long long a,b,m,f=0,i=0,j=0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> m;
        i=a/m;
        if((i*m)<a)
         i++;
        j=b/m;
        f=(j-i+1);
        cout << f<<endl;
        f=0;i=0;j=0;
    }
	return 0;
}
