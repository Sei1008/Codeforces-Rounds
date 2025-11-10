#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=0 || a>=11 || b<=0 || b>=11 || c<=0 || c>=11 || d<=0 || d>=11 ){
            cout<<"NO"<<endl;
            continue;
        }
        if(a==b && b==c && c==d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
}

    return 0;
}