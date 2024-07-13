#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;

    int len=s.size();

    if(len>=2){

        int ans=s[len-2]-'0';
        ans*=10;
        ans+=s[len-1]-'0';
        if(ans%4==0)
            cout<<6<<'\n';
        else if(ans%4==1)
            cout<<2<<'\n';
        else if(ans%4==2)
            cout<<4<<'\n';
        else if(ans%4==3)
            cout<<8<<'\n';
        return 0;
    }
    int ans=stoi(s);
    if(ans==0){
        cout<<1<<'\n';
    }
    else if(ans%4==0){
        cout<<6<<'\n';
    }
    else if(ans%4==1){
        cout<<2<<'\n';
    }
    else if(ans%4==2){
        cout<<4<<'\n';
    }
    else if(ans%4==3){
        cout<<8<<'\n';
    }


    return 0;
}
