/*
In The Name Of Allah

From Dust I Have Come I Will be Dust

Author: AXE 

From: Fuking University London
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
/*
Special work set
S.order_of_key(k) it work koto gulo k er theke kom number ache 
S.find_by_order(k) kth index er valu koto eita bole dibe 
there are both log(n) doing work ,work any type int,float ,double,pair<int,int> just change
*/

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define nl "\n"
#define int long long
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define vi vector<int>
#define ip(x) for(auto &it : x) cin >> it
#define all(x) x.begin(),x.end()



/*
Function are here
*/

void solve() {

    // Code Here

     int n;
    cin >> n;

    vector<int> lp(n + 1, 0);
    vector<int> primes;

    for (int i = 2; i <= n; i++) {

         
        if (lp[i] == 0) {
            lp[i] = i;
            primes.push_back(i);
        }

        
        for (int p : primes) {

            
            if (p > lp[i])
                break;

            
            if (i * p > n)
                break;

            
            lp[i * p] = p;
        }
    }

    
    cout << "Prime numbers:\n";

    for (int p : primes) {
        cout << p << " ";
    }

    cout << "\n\nSmallest Prime Factor:\n";

    for (int i = 2; i <= n; i++) {
        cout << "lp[" << i << "] = " << lp[i] << '\n';
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
}

/**
░█████╗░░░░░░░░░░░░░░░
██╔══██╗░░██╗░░░░██╗░░
██║░░╚═╝██████╗██████╗
██║░░██╗╚═██╔═╝╚═██╔═╝
╚█████╔╝░░╚═╝░░░░╚═╝░░
░╚════╝░░░░░░░░░░░░░░░
**/