//Time complexity - O(nloglog(n)+k), k = number of primes

#include <bits/stdc++.h>
using namespace std;

const int maxN = 30;
vector<int> allPrimes;

//akhane maxN range ar modde joto gula prime ase oigula ber kore allPrimes a rakha hosse
void sieve(){
    vector<bool> prime(maxN+1,true);
    for(int i=2;i<=maxN;i++){
        if(prime[i]){
           allPrimes.push_back(i);
           for(int j=i+i;j<=maxN;j+=i){
                prime[j]=false;
           }
        }
    }
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   sieve();

   int n; cin >> n;
   map<int,int> cnt;
   int idx=0;

   // Aikhane given number N k smallest prime diye divid kore dekhbo kora jay kina, na kora gele next prime a chole jabo ar kora gele oita diye koybar kora jay ta count korbo
   while(n>1){
        while(true){
            if(n%allPrimes[idx]!=0){
                break;
            }
            cnt[allPrimes[idx]]++;
            n /= allPrimes[idx];
        }
        idx++;
   }
   for(auto [x,y]:cnt){
        cout << x << " -> " << y << '\n';
   }

   return 0;
}
