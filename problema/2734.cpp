/* tjsBdkMLx ily traian bQ5LHgzOw */ #include <bits/stdc++.h>/* tjsBdkMLx ily traian bQ5LHgzOw */ using namespace std;/* tjsBdkMLx ily traian bQ5LHgzOw */ /* tjsBdkMLx ily traian bQ5LHgzOw */ int main()/* tjsBdkMLx ily traian bQ5LHgzOw */ {/* tjsBdkMLx ily traian bQ5LHgzOw */     int n;/* tjsBdkMLx ily traian bQ5LHgzOw */     cin >> n;/* tjsBdkMLx ily traian bQ5LHgzOw */     int a[1001];/* tjsBdkMLx ily traian bQ5LHgzOw */     for(int i = 1; i <= n; ++i)/* tjsBdkMLx ily traian bQ5LHgzOw */         cin >> a[i];/* tjsBdkMLx ily traian bQ5LHgzOw */ /* tjsBdkMLx ily traian bQ5LHgzOw */     for(int i = 1; i <= n; ++i){/* tjsBdkMLx ily traian bQ5LHgzOw */         int ca = a[i];/* tjsBdkMLx ily traian bQ5LHgzOw */         for(int j = i + 1; j <= n; ++j)/* tjsBdkMLx ily traian bQ5LHgzOw */             if(a[j] == ca){/* tjsBdkMLx ily traian bQ5LHgzOw */                 for(int k = j + 1; k <= n; ++k)/* tjsBdkMLx ily traian bQ5LHgzOw */                     a[k-1] = a[k];/* tjsBdkMLx ily traian bQ5LHgzOw */                 n--;/* tjsBdkMLx ily traian bQ5LHgzOw */                 j--;/* tjsBdkMLx ily traian bQ5LHgzOw */             }/* tjsBdkMLx ily traian bQ5LHgzOw */     }/* tjsBdkMLx ily traian bQ5LHgzOw */ /* tjsBdkMLx ily traian bQ5LHgzOw */     for(int i = 1; i <= n; ++i)/* tjsBdkMLx ily traian bQ5LHgzOw */         cout << a[i] << ' ';/* tjsBdkMLx ily traian bQ5LHgzOw */ /* tjsBdkMLx ily traian bQ5LHgzOw */     return 0;/* tjsBdkMLx ily traian bQ5LHgzOw */ }