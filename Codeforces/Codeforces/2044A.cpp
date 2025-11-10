#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
    if(n>1) cout<<n-1<<endl;
    if(n<=1) cout <<0<<endl;
    }
    return 0;
}