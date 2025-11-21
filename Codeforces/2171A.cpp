#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int max_cows=n/4;
        int res=max_cows+1;
        if(n==0 || n%2 != 0){
            cout<<0<<endl;
            continue;
        }
        cout<<res<<endl;

    }
    return 0;
}