#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
 
int main()
{
    int t;
    long long k,p,r=0;
    string s="aacaacc";
    char ch;
    cin >> t;
    while(t--)
    {
        cin >> k;
        while(k>7)
        {
            p=k;
            k=k | (k>>1);
            k=k | (k>>2);
            k=k | (k>>4);
            k=k | (k>>8);
            k=k | (k>>16);
            k=k | (k>>32);
            k=k | (k>>64);
            if(p==((k+1)/2))
            {
                k=1;
                break;
            }
            else
             k=k+1-p;
            r++;
        }
        ch=s[k-1];
        if(r%2==0)
            cout << ch<<endl ;
        else
        {
            if(ch=='a')
                cout<<'c'<<endl;
            else
                cout<<'a'<<endl;
        }
        k=0;p=0;r=0;
    }
	return 0;
}
