#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
#define MOD 1000000007
#define inf 1000000010
#define endl "\n"
#define ull unsigned long long
#define con (f?"YES":"NO")
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

#define dpos(n) fixed << setprecision(n)

#define CLR1(a) memset(a, -1, sizeof(a))
#define CLR0(a) memset(a, 0, sizeof(a))

#define sortn(a,x,n) sort(a+x, a+x+n)
#define sortv(s) sort(s.begin(), s.end())
#define reversev(s) reverse(s.begin(), s.end())
#define reversesortv(s) sortv(s); reversev(s)
#define unik(a) unique(a.begin(), a.end()) - a.begin()

#define lowerbound(v,x) lower_bound(v.begin(), v.end(), x)-v.begin()
#define upperbound(v,x) upper_bound(v.begin(), v.end(), x)-v.begin()

#define pb push_back
#define loj(i,j) "Case "<<i<<": "<<j
#define gap " "

#define auto(x,a) for (auto& x : a)

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

int main() {
   ios_base::sync_with_stdio(false); cin.tie(0),cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
<<<<<<<< HEAD:Codeforces_Contest/cf916/B_Preparing_for_the_Contest.cpp
        int n, k;
        cin>>n>>k;
        
        for(int i=n;i>(k+1);i--) cout<<i<<" ";

        for(int i=1;i<=(k+1);i++) cout<<i<<" ";
        cout<<endl;
========
        string s;
        cin>>s;
        long long zero=0,one=0;
        for(auto x:s){
            if(x=='A') zero++;
            else one++;
        }
        if(one<zero) cout<<"A"<<endl;
        else if(one>zero) cout<<"B"<<endl;
>>>>>>>> main:Codeforces_Contest/cf928/A_Vlad_and_the_Best_of_Five.cpp
    }
}