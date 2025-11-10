#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        int m,a,b,c;
        int total=0;
        cin>>m>>a>>b>>c;
        if(a>=m){
            total+=m;
        }else{
            total+=a;
        }
        if(b>=m){
            total +=m;
        }else{
            total +=b;
        }
        int check=(2*m)-(total+c);
        if(check<0){
            total=2*m;
        }else{
            total+=c;
        }
        cout<<total<<endl;
    }

    return 0;
}