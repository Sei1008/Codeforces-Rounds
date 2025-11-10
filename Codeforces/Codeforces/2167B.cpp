#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        string s,t;
        cin>>s>>t;
        vector<int> s_counts(26,0);
        vector<int> t_counts(26,0);
        if(s.size() != t.size()){
            cout<<"NO"<<endl;
            continue;
        }
        for (char c : s) {
            s_counts[c - 'a']++; 
        }
        for (char c : t) {
            t_counts[c - 'a']++;
        }
        if (s_counts == t_counts) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}