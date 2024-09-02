#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
string s;
int arr[26]={0};
cin>>s;
int i=0,sum=0;
while(s[i]!='\0')
{
 arr[s[i]-'A']++;
 if(arr[s[i]-'A']>=2) sum=sum+1;
 else sum+=2;
 i++;
    }
    cout<<sum<<endl;
    }
return 0;
}
 