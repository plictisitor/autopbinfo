/* By8j4onfl ily traian XiVHIuu6J */ #include <bits/stdc++.h>/* By8j4onfl ily traian XiVHIuu6J */ using namespace std;/* By8j4onfl ily traian XiVHIuu6J */ /* By8j4onfl ily traian XiVHIuu6J */ ifstream cin("cifrazecmax.in");/* By8j4onfl ily traian XiVHIuu6J */ ofstream cout("cifrazecmax.out");/* By8j4onfl ily traian XiVHIuu6J */ /* By8j4onfl ily traian XiVHIuu6J */ int a[10001], c[10001];/* By8j4onfl ily traian XiVHIuu6J */ /* By8j4onfl ily traian XiVHIuu6J */ int main(){/* By8j4onfl ily traian XiVHIuu6J */     int i = 1;/* By8j4onfl ily traian XiVHIuu6J */     while(cin >> a[i]){/* By8j4onfl ily traian XiVHIuu6J */         c[i] = a[i] % 100 / 10;/* By8j4onfl ily traian XiVHIuu6J */         i++;/* By8j4onfl ily traian XiVHIuu6J */     }/* By8j4onfl ily traian XiVHIuu6J */     int maxi = 0, cmaxi, pozf;/* By8j4onfl ily traian XiVHIuu6J */     for(int k = 0; k <= 9; ++k){/* By8j4onfl ily traian XiVHIuu6J */         int cnt = 0, poz;/* By8j4onfl ily traian XiVHIuu6J */         for(int j = 1; j < i; ++j){/* By8j4onfl ily traian XiVHIuu6J */             if(c[j] == k)/* By8j4onfl ily traian XiVHIuu6J */                 ++cnt, poz = j;/* By8j4onfl ily traian XiVHIuu6J */         }/* By8j4onfl ily traian XiVHIuu6J */         if(cnt > maxi)/* By8j4onfl ily traian XiVHIuu6J */             maxi = cnt, cmaxi = k, pozf = poz;/* By8j4onfl ily traian XiVHIuu6J */         if(cnt == maxi && poz < pozf)/* By8j4onfl ily traian XiVHIuu6J */             pozf = poz;/* By8j4onfl ily traian XiVHIuu6J */     }/* By8j4onfl ily traian XiVHIuu6J */     cout << pozf;/* By8j4onfl ily traian XiVHIuu6J */     return 0;/* By8j4onfl ily traian XiVHIuu6J */ }