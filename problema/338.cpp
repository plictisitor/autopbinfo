/* dQXGsaTXx ily traian 0PNbLeM4Q */ #include <bits/stdc++.h>/* dQXGsaTXx ily traian 0PNbLeM4Q */ using namespace std;/* dQXGsaTXx ily traian 0PNbLeM4Q */ /* dQXGsaTXx ily traian 0PNbLeM4Q */ int main()/* dQXGsaTXx ily traian 0PNbLeM4Q */ {/* dQXGsaTXx ily traian 0PNbLeM4Q */     int n;/* dQXGsaTXx ily traian 0PNbLeM4Q */     cin >> n;/* dQXGsaTXx ily traian 0PNbLeM4Q */     long long rez = 0;/* dQXGsaTXx ily traian 0PNbLeM4Q */     for(int i = 1; i <= n; ++i){/* dQXGsaTXx ily traian 0PNbLeM4Q */         long long pow = 1;/* dQXGsaTXx ily traian 0PNbLeM4Q */         for(int j = 1; j <= i; ++j)/* dQXGsaTXx ily traian 0PNbLeM4Q */             pow = 1LL * pow * i;/* dQXGsaTXx ily traian 0PNbLeM4Q */         rez += pow;/* dQXGsaTXx ily traian 0PNbLeM4Q */     }/* dQXGsaTXx ily traian 0PNbLeM4Q */     cout << "Rezultatul este " << rez;/* dQXGsaTXx ily traian 0PNbLeM4Q */     return 0;/* dQXGsaTXx ily traian 0PNbLeM4Q */ }/* dQXGsaTXx ily traian 0PNbLeM4Q */ 