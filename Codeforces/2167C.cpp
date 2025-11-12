#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n), odd, even;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]%2==0){
                even.push_back(a[j]);
            }else{
                odd.push_back(a[j]);
            }
        }
        if(odd.size()==0 || even.size()==0) {
            for(int x:a){
                cout<<x<<" ";
            }
            continue;
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        int odd_index = 0, even_index = 0;
        while(even_index<even.size()&&odd_index<odd.size()){
            if(even[even_index]>odd[odd_index]){
                cout<<odd[odd_index]<<" ";
                odd_index++;
            }else{
                cout<<even[even_index]<<" ";
                even_index++;
            }
    }
    while(odd_index<odd.size()){
        cout<<odd[odd_index]<<" ";
        odd_index++;
    }
    while(even_index<even.size()){
        cout<<even[even_index]<<" ";
        even_index++;
    }

    cout << "\n";
    }
    return 0;

}