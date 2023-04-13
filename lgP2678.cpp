//https://www.luogu.com.cn/problem/P2678
//最优解唯一且有界和单调
//逐一寻找O(n),二分查找O(logn)
#include <bits/stdc++.h>
using namespace std;
#define maxn 50010
vector<int> a(maxn);
int n,m,d;

bool judge(int x){
   int cnt=0;
   int now=0;
   int next=1;
   //双指针注意边界情况
   while(now<=n){
       if(a[next]-a[now]>=x){
              now=next;
              next++;
       }
       else{
        if(now==n){
           cnt++;
           break;
       }
       else{
             next++;
             cnt++;
       }
       }
   }
   return cnt<=m;
}

int my_find(int l,int r,int mid,bool flag){
    if(l>r) return -1;
    if(judge(mid)){
        if(flag) return max(mid,my_find(mid+1,r,mid+1,flag));
        else return mid;
    }
    else{
        return my_find(l,mid-1,mid-1,0);
    }

}



int main(){
    cin>>d>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    a[0]=0;
    a[n+1]=d;

    int l=1,r=d;
    int ans;
    //成功了往右,失败了往左
    //只有成功时才记录ans
    while(l<=r){
        int mid=(l+r)>>1;
        if(judge(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}