#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	   string s;
	   cin>>s;
	   int end=1;
	   int start=0;
	   int low;
	   int high;
	   int i;
	   for(int i=1;i<s.length();i++)
	   {
	   low=i-1;
	   high=i;
          while(low>=0 && high<s.length() && s[low] == s[high])
          {
              if(high-low+1>end)
              {
                  start=low;
                  end=high-low+1;
              }
              low--;
              high++;
          }
	   low=i-1;
	   high=i+1;
          while(low>=0 && high<s.length() && s[low] == s[high])
          {
              if(high-low+1>end)
              {
                  start=low;
                  end=high-low+1;
              }
              low--;
              high++;
          } 
	   }
	   string r = s.substr(start,end);
	   cout<<r<<endl;
	}
	return 0;
}
