#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,c=0,f=0,up=0,down=0;
    string s;
    char p,q;
    cin >> t;
    while(t--)
    {
        cin >> s;
        for(i=0;i<s.length();i++)
        {
            c=i;
            while(s[c]==s[i])
            {
                f=1;
                c++;
                if(c==s.length())
                 break;
            }
            if((f==1)&&(s[i]=='U'))
             up++;
            else if((f==1)&&(s[i]=='D'))
             down++;
            f=0;
            i=c-1;
        }
        if(up>down)
         cout<<down<<endl;
        else
         cout<<up<<endl;
        f=0;c=0;up=0;down=0;
    }
	return 0;
}
