#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    string x="EGYPT";
    cin>>s;
    int n=4;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x[0] && s[i+n]==x[n]){
         s.replace(i,n+1," ");
         
        }
    }
    cout<<s<<endl;
    
   
}