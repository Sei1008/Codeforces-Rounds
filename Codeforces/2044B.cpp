#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        string rs(s.rbegin(),s.rend());
        for(int j=0;j<rs.size();j++){
            if(rs[j]=='p'){
                rs[j]='q';
            }else if(rs[j]=='q'){
                rs[j]='p';
        }        
    }
    cout<<rs<<endl;
}
    return 0;
}
