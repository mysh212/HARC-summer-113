#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vector<int> num1,num2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num1.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num2.push_back(x);
    }
    sort(num1.begin(),num1.end());
    sort(num2.begin(),num2.end());
    int l=num1[0]+num2[0],r=num1[n-1]+num2[n-1];
    int ans;
    while(l<=r){

        int mid=(l+r)/2;
        int winr=-1,cnt=0;
        while((num1[0]+num2[winr+1]<=mid)&&winr!=n-1){
                winr++;
        }
        cnt+=winr+1;
        for(int i=1;i<n;i++){
            while((num1[i]+num2[winr])>mid&&winr!=-1){
                winr--;
            }
            cnt+=winr+1;
        }
        if(cnt>=k){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<'\n';
}
