#include <iostream>
using namespace std;

int main()
{
    long long t,u,v,s=0;
    cin >> t;
    while(t--)
    {
        cin >> u >> v;
        s=((u+v)*(u+v+1))/2;
        s+=(u+1);
        cout << s<<endl;
        s=0;
    }
	return 0;
}
