/* cUwEFn2Jt ily traian 9krc5NdeN */ #include <bits/stdc++.h>/* cUwEFn2Jt ily traian 9krc5NdeN */ /* cUwEFn2Jt ily traian 9krc5NdeN */ using namespace std;/* cUwEFn2Jt ily traian 9krc5NdeN */ /* cUwEFn2Jt ily traian 9krc5NdeN */ int main()/* cUwEFn2Jt ily traian 9krc5NdeN */ {/* cUwEFn2Jt ily traian 9krc5NdeN */     int n;/* cUwEFn2Jt ily traian 9krc5NdeN */     cin >> n;/* cUwEFn2Jt ily traian 9krc5NdeN */     int cnt=0;/* cUwEFn2Jt ily traian 9krc5NdeN */     int a[1001];/* cUwEFn2Jt ily traian 9krc5NdeN */     for (int i = 0 ; i < n ; ++i)/* cUwEFn2Jt ily traian 9krc5NdeN */     cin >> a[i];/* cUwEFn2Jt ily traian 9krc5NdeN */     for (int i = 0 ; i < n ; ++i)/* cUwEFn2Jt ily traian 9krc5NdeN */     {/* cUwEFn2Jt ily traian 9krc5NdeN */         if ((a[i]>=a[0] && a[i]<=a[n-1])||(a[i]<=a[0] && a[i]>=a[n-1]))/* cUwEFn2Jt ily traian 9krc5NdeN */         cnt++;/* cUwEFn2Jt ily traian 9krc5NdeN */     }/* cUwEFn2Jt ily traian 9krc5NdeN */     if (cnt==n)/* cUwEFn2Jt ily traian 9krc5NdeN */     cout << "DA";/* cUwEFn2Jt ily traian 9krc5NdeN */     else/* cUwEFn2Jt ily traian 9krc5NdeN */     cout << "NU";/* cUwEFn2Jt ily traian 9krc5NdeN */     /* cUwEFn2Jt ily traian 9krc5NdeN */ }