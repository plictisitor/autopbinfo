/* XxGTQL9nx ily traian 67l2fiQTM */ #include <bits/stdc++.h>/* XxGTQL9nx ily traian 67l2fiQTM */ using namespace std;/* XxGTQL9nx ily traian 67l2fiQTM */ /* XxGTQL9nx ily traian 67l2fiQTM */ int main()/* XxGTQL9nx ily traian 67l2fiQTM */ {/* XxGTQL9nx ily traian 67l2fiQTM */     int n;/* XxGTQL9nx ily traian 67l2fiQTM */     cin >> n;/* XxGTQL9nx ily traian 67l2fiQTM */     int a[1001];/* XxGTQL9nx ily traian 67l2fiQTM */     for(int i = 1; i <= n; ++i)/* XxGTQL9nx ily traian 67l2fiQTM */         cin >> a[i];/* XxGTQL9nx ily traian 67l2fiQTM */ /* XxGTQL9nx ily traian 67l2fiQTM */     for(int i = 1; i <= n; ++i){/* XxGTQL9nx ily traian 67l2fiQTM */         int ca = a[i];/* XxGTQL9nx ily traian 67l2fiQTM */         int d = 2, cnt = 1;/* XxGTQL9nx ily traian 67l2fiQTM */         while(ca > 1){/* XxGTQL9nx ily traian 67l2fiQTM */             int p = 0;/* XxGTQL9nx ily traian 67l2fiQTM */             while(ca % d == 0)/* XxGTQL9nx ily traian 67l2fiQTM */                 ca /= d, p++;/* XxGTQL9nx ily traian 67l2fiQTM */             cnt *= (p + 1);/* XxGTQL9nx ily traian 67l2fiQTM */             d++;/* XxGTQL9nx ily traian 67l2fiQTM */             if(d * d > ca)/* XxGTQL9nx ily traian 67l2fiQTM */                 d = ca;/* XxGTQL9nx ily traian 67l2fiQTM */         }/* XxGTQL9nx ily traian 67l2fiQTM */         if(cnt == 2){/* XxGTQL9nx ily traian 67l2fiQTM */             for(int j = i + 1; j <= n; ++j)/* XxGTQL9nx ily traian 67l2fiQTM */                 a[j-1] = a[j];/* XxGTQL9nx ily traian 67l2fiQTM */             n--;/* XxGTQL9nx ily traian 67l2fiQTM */             i--;/* XxGTQL9nx ily traian 67l2fiQTM */         }/* XxGTQL9nx ily traian 67l2fiQTM */     }/* XxGTQL9nx ily traian 67l2fiQTM */ /* XxGTQL9nx ily traian 67l2fiQTM */     for(int i = 1; i <= n; ++i)/* XxGTQL9nx ily traian 67l2fiQTM */         cout << a[i] << " ";/* XxGTQL9nx ily traian 67l2fiQTM */ /* XxGTQL9nx ily traian 67l2fiQTM */     return 0;/* XxGTQL9nx ily traian 67l2fiQTM */ }