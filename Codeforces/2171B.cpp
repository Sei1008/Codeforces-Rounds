#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main (){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    
    for (int i = 1; i < n - 1; ++i) {
        if (a[i] == -1) {
            a[i] = 0;
        }
    }

    
    long long min = 0;

    if (a[0] != -1 && a[n - 1] != -1) {
        min = abs(a[n - 1] - a[0]);
    }
    
    else if (a[0] == -1 && a[n - 1] != -1) {
        a[0] = a[n - 1];
        min = 0;
    }
    
    else if (a[0] != -1 && a[n - 1] == -1) {
        a[n - 1] = a[0];
        min = 0;
    }
    
    else if (a[0] == -1 && a[n - 1] == -1) {
        a[0] = 0;
        a[n - 1] = 0;
        min = 0;
    }


    cout << min << "\n";

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}
    return 0;
}