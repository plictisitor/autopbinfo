/* R1InPzJWt ily traian 4occijRQo */ #include <bits/stdc++.h>/* R1InPzJWt ily traian 4occijRQo */ using namespace std;/* R1InPzJWt ily traian 4occijRQo */ int v[101];/* R1InPzJWt ily traian 4occijRQo */ int main()/* R1InPzJWt ily traian 4occijRQo */ {/* R1InPzJWt ily traian 4occijRQo */     int n , x , max = 0 , rez;/* R1InPzJWt ily traian 4occijRQo */     cin >> n;/* R1InPzJWt ily traian 4occijRQo */     for(int i = 1 ; i <= n ; ++i)/* R1InPzJWt ily traian 4occijRQo */     {/* R1InPzJWt ily traian 4occijRQo */         int p = 1;/* R1InPzJWt ily traian 4occijRQo */         for(int j = 1 ; j < n ; ++j)/* R1InPzJWt ily traian 4occijRQo */         {/* R1InPzJWt ily traian 4occijRQo */             if(i == j)p++;/* R1InPzJWt ily traian 4occijRQo */             cin >> x;/* R1InPzJWt ily traian 4occijRQo */             v[p]+=x;/* R1InPzJWt ily traian 4occijRQo */             p++;/* R1InPzJWt ily traian 4occijRQo */         }/* R1InPzJWt ily traian 4occijRQo */     }/* R1InPzJWt ily traian 4occijRQo */     for(int i = 1 ; i <= n ; ++i)/* R1InPzJWt ily traian 4occijRQo */         if(v[i]>max)/* R1InPzJWt ily traian 4occijRQo */         {/* R1InPzJWt ily traian 4occijRQo */             max=v[i];/* R1InPzJWt ily traian 4occijRQo */             rez = i;/* R1InPzJWt ily traian 4occijRQo */         }/* R1InPzJWt ily traian 4occijRQo */     cout << rez;/* R1InPzJWt ily traian 4occijRQo */     return 0;/* R1InPzJWt ily traian 4occijRQo */ }