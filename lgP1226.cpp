//(a+b)%c=(a%c+b%c)%c
//(a*b)%c=(a%c*b%c)%c
#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
lli a,b,p;

int main(){
    cin>>a>>b>>p;
    int a0=a;
    int b0=b;
    int ans=1;
    while(b>0){
        if(b&1)
        {
            ans*=a;
            ans%=p;
        }
        a*=a;
        a%=p;
        b>>=1;
    }
    
    cout<<a0<<"^"<<b0<<" mod "<<p<<"="<<ans<<endl;
}