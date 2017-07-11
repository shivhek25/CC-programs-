#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,q,i,j,k=0,f=0,c=0,l=0,p1,p2,m=-1,v=0;
	cin >> t;
	while(t--)
	{
	    v++;
	    cin >> n;
	    getchar();
	    string a[n];
	    for(i=0;i<n;i++)
	     getline(cin,a[i]);
	    cin >> q;
	    getchar();
	    string b[q];
	    for(i=0;i<q;i++)
	     getline(cin,b[i]);
	     if(n!=0)
	     {
	        while(k!=q)
	        {
	            for(i=0;i<n;i++)
	            {
	                for(j=k;j<q;j++)
	                {
	                    if(a[i]!=b[j])
	                    c++;
	                    else
	                    break;
	                }
	                if(c>l)
	                {
	                    l=c;
	                    p1=i;p2=j;
	                }
	                c=0;
	            }
	            if((m!=-1)&&(a[m]!=a[p1]))
	             f++;
	            k=p2;m=p1;l=0;c=0;
	         }
	         cout<<"Case #"<<v<<": "<<f<<endl;
	         k=0;l=0;c=0;f=0;m=-1;
	     }
	     else
	      cout<<"Case #"<<v<<": "<<0<<endl;
	}
	return 0;
}
