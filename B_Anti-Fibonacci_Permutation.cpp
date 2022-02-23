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
int n;
cin>>n;

vector <int> v(n);
int j=1;
for(int i=0;i<n;i++){
    v[i]=j;
    j++;
}

sort(v.begin(),v.end(),greater<int> ());

int remaining=n;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    int temp;
    int i=n-1;
    while(i>0 && remaining>0){
        temp=v[i];
        v[i]=v[i-1];
        v[i-1]=temp;
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
        }
        cout<<"\n";
        i--;
        remaining--;
    }
}
return 0;
}