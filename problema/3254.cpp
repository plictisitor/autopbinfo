/* dCwMgE8bR ily traian 0vPBKl1pq */ #include <bits/stdc++.h>/* dCwMgE8bR ily traian 0vPBKl1pq */ using namespace std;/* dCwMgE8bR ily traian 0vPBKl1pq */ /* dCwMgE8bR ily traian 0vPBKl1pq */ int main(){/* dCwMgE8bR ily traian 0vPBKl1pq */     int n;/* dCwMgE8bR ily traian 0vPBKl1pq */     cin >> n;/* dCwMgE8bR ily traian 0vPBKl1pq */     int maxi = 10, minp = 0;/* dCwMgE8bR ily traian 0vPBKl1pq */     while(n){/* dCwMgE8bR ily traian 0vPBKl1pq */         if(n % 2 == 1 && n % 10 < maxi)/* dCwMgE8bR ily traian 0vPBKl1pq */             maxi = n%10;/* dCwMgE8bR ily traian 0vPBKl1pq */         if(n % 2 == 0 && n % 10 > minp)/* dCwMgE8bR ily traian 0vPBKl1pq */             minp = n % 10;/* dCwMgE8bR ily traian 0vPBKl1pq */         n/=10;/* dCwMgE8bR ily traian 0vPBKl1pq */     }/* dCwMgE8bR ily traian 0vPBKl1pq */     cout << maxi * minp;/* dCwMgE8bR ily traian 0vPBKl1pq */     return 0;/* dCwMgE8bR ily traian 0vPBKl1pq */ }