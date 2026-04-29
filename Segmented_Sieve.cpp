/*
In The Name Of Allah

From Dust I Have Come I Will be Dust

Author: Md. Shariful Islam Sijan
*/

#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define yes cout << "YES" << nl;
#define no cout << "NO" << nl;
#define vi vector<int>
#define ip(x) for(auto &it : x) cin >> it
#define all(x) x.begin(),x.end()



vector<int> simpleSieve( int limit) {
    vector<bool> prime(limit + 1, true);
    vector<int > primes;

    prime[0] = prime[1] = false;

    for(int i = 2; i * i <= limit; i++) {
        if(prime[i]) {
            for(int j = i * i; j <= limit; j += i) {
                prime[j] = false;
            }
        }
    }

    for(int i = 2; i <= limit; i++) {
        if(prime[i]) primes.push_back(i);
    }

    return primes;
}

void solve() {

    // Code Here

  
 
    int L, R;
    cin >> L >> R;

    int limit = sqrt(R);

    vector<int> primes = simpleSieve(limit);

    vector<bool> isPrime(R - L + 1, true);

    for(int p : primes) {

       int start = max(p * p, ((L + p - 1) / p) * p);

        for(int  j = start; j <= R; j += p) {
            isPrime[j - L] = false;
        }
    }

    if(L == 1) isPrime[0] = false;

    for(int  i = L; i <= R; i++) {
        if(isPrime[i - L]) {
            cout << i << " ";
        }
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