/* GzPSQkK8l ily traian VPCLjgNvM */ #include <bits/stdc++.h>/* GzPSQkK8l ily traian VPCLjgNvM */ using namespace std;/* GzPSQkK8l ily traian VPCLjgNvM */ /* GzPSQkK8l ily traian VPCLjgNvM */ int main ()/* GzPSQkK8l ily traian VPCLjgNvM */ {/* GzPSQkK8l ily traian VPCLjgNvM */     int n;/* GzPSQkK8l ily traian VPCLjgNvM */     cin >> n;/* GzPSQkK8l ily traian VPCLjgNvM */     int m=n;/* GzPSQkK8l ily traian VPCLjgNvM */     int a , b;/* GzPSQkK8l ily traian VPCLjgNvM */     int cnt=0;/* GzPSQkK8l ily traian VPCLjgNvM */     int p = 1;/* GzPSQkK8l ily traian VPCLjgNvM */     int r;/* GzPSQkK8l ily traian VPCLjgNvM */     while(n)/* GzPSQkK8l ily traian VPCLjgNvM */     {/* GzPSQkK8l ily traian VPCLjgNvM */         n/=10;/* GzPSQkK8l ily traian VPCLjgNvM */         cnt++;/* GzPSQkK8l ily traian VPCLjgNvM */     }/* GzPSQkK8l ily traian VPCLjgNvM */     for (int i = 1; i <= cnt/2; ++i)/* GzPSQkK8l ily traian VPCLjgNvM */         p*=10;/* GzPSQkK8l ily traian VPCLjgNvM */     if (cnt%2==0)/* GzPSQkK8l ily traian VPCLjgNvM */     {/* GzPSQkK8l ily traian VPCLjgNvM */         b = m % p;/* GzPSQkK8l ily traian VPCLjgNvM */         a = m / p;/* GzPSQkK8l ily traian VPCLjgNvM */     }/* GzPSQkK8l ily traian VPCLjgNvM */     else if (cnt%2==1)/* GzPSQkK8l ily traian VPCLjgNvM */     {/* GzPSQkK8l ily traian VPCLjgNvM */         b = m % p;/* GzPSQkK8l ily traian VPCLjgNvM */         a = m / (p*10);/* GzPSQkK8l ily traian VPCLjgNvM */     }/* GzPSQkK8l ily traian VPCLjgNvM */         while (b)/* GzPSQkK8l ily traian VPCLjgNvM */     {/* GzPSQkK8l ily traian VPCLjgNvM */         r=a%b;/* GzPSQkK8l ily traian VPCLjgNvM */         a=b;/* GzPSQkK8l ily traian VPCLjgNvM */         b=r;/* GzPSQkK8l ily traian VPCLjgNvM */     }/* GzPSQkK8l ily traian VPCLjgNvM */     cout << a;/* GzPSQkK8l ily traian VPCLjgNvM */     return 0;/* GzPSQkK8l ily traian VPCLjgNvM */ }