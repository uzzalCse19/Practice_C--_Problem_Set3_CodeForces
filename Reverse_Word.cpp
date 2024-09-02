#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
string str;
getline(cin,s);
int num=s.size();
cout<<num;
stringstream ss(s);
string word;
int cnt=0,i=0,c=0;
;
while(ss>>word)
{
    int n=word.size()-1;
    cnt++;
    while(n !=-1) 
    {
        cout<<word[n];
        n--;
        i++;
        
    }
   if(s[i]!='\0') cout<<" ";
}

return 0;
}