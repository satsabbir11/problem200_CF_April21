#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define con (f?"YES":"NO")
#define loj(i,j) "Case "<<i<<": "<<j

int main() {
   ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);

    long long t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        
        string s;
        cin>>s;

        array<int, 26>cnt ={};

        for(char c: s) cnt[c-'a']++;

        cout<<max(n%2, 2**max_element(cnt.begin(), cnt.end())-n)<<endl;
    }
}