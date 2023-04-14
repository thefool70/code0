//分治法左右切割
//https://www.luogu.com.cn/problem/P3612
//注意一些取等条件

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
string a;
lli n;

int main(){
    cin>>a;
    cin>>n;

    if(n==1) {cout<<a[0];
    return 0;}

    lli size=a.length();
    // cout<<size;
    lli size0=size;

    if(size0==1){
        cout<<a[0]<<endl;
        return 0;
    }

    while(size<n/2){
        size<<=1;
    }

    while(n>size0){
        // size>>=1;
        if(n>size){
            if(n==size+1) n--;
            else n-=(size+1);
        }
        size>>=1;
    }

    cout<<a[n-1]<<endl;
}


#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
string a;
lli n;

int main(){
    cin>>a;
    cin>>n;

    if(n==1) {cout<<a[0];
    return 0;}

    lli size=a.length();
    // cout<<size;
    lli size0=size;

    if(size0==1){
        cout<<a[0]<<endl;
        return 0;
    }

    while(size<n/2){
        size<<=1;
    }

    while(n>size0){
        // size>>=1;
        if(n>size){
            if(n==size+1) n--;
            else n-=(size+1);
        }
        size>>=1;
    }

    cout<<a[n-1]<<endl;
}
