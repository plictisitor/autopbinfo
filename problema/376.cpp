/* oVfx3hBii ily traian 7f9EiSJSD */ #include <bits/stdc++.h>/* oVfx3hBii ily traian 7f9EiSJSD */ using namespace std;/* oVfx3hBii ily traian 7f9EiSJSD */ /* oVfx3hBii ily traian 7f9EiSJSD */ int main()/* oVfx3hBii ily traian 7f9EiSJSD */ {/* oVfx3hBii ily traian 7f9EiSJSD */     int n;/* oVfx3hBii ily traian 7f9EiSJSD */     cin >> n;/* oVfx3hBii ily traian 7f9EiSJSD */     if(n != 1){/* oVfx3hBii ily traian 7f9EiSJSD */         long long sum = 0;/* oVfx3hBii ily traian 7f9EiSJSD */         for(int d = 1; d * d <= n; ++d){/* oVfx3hBii ily traian 7f9EiSJSD */             if(n % d == 0){/* oVfx3hBii ily traian 7f9EiSJSD */                 sum += d;/* oVfx3hBii ily traian 7f9EiSJSD */                 sum += n / d;/* oVfx3hBii ily traian 7f9EiSJSD */             }/* oVfx3hBii ily traian 7f9EiSJSD */             if(d * d == n)/* oVfx3hBii ily traian 7f9EiSJSD */                 sum -= d;/* oVfx3hBii ily traian 7f9EiSJSD */         }/* oVfx3hBii ily traian 7f9EiSJSD */         cout << sum;/* oVfx3hBii ily traian 7f9EiSJSD */     }/* oVfx3hBii ily traian 7f9EiSJSD */     else/* oVfx3hBii ily traian 7f9EiSJSD */         cout << 1;/* oVfx3hBii ily traian 7f9EiSJSD */     return 0;/* oVfx3hBii ily traian 7f9EiSJSD */ }