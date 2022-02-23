#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int red=0,green=0,blue=0;
bool flag=true;
for(int i=0;i<6;i++){
    if(red<0 || green<0 || blue<0){
        flag=false;
        break;
    }
    else{
    if(s[i]=='r'){
        red++;
    }
    else if(s[i]=='g'){
        green++;
        }
    else if(s[i]=='b'){
        blue++;
    }
    else if(s[i]=='R'){
        red--;
    }
    else if(s[i]=='G'){
        green--;
    }
    else if(s[i]=='B'){
        blue--;
    }
    }
    
}
if(flag){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
}
return 0;
}