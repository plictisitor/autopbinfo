/* EtQF2DXsp ily traian iys5GwWfu */ #include <bits/stdc++.h>/* EtQF2DXsp ily traian iys5GwWfu */ /* EtQF2DXsp ily traian iys5GwWfu */ using namespace std;/* EtQF2DXsp ily traian iys5GwWfu */ /* EtQF2DXsp ily traian iys5GwWfu */ int main()/* EtQF2DXsp ily traian iys5GwWfu */ {/* EtQF2DXsp ily traian iys5GwWfu */     long long n, a[100001],s1=0,s2=0;/* EtQF2DXsp ily traian iys5GwWfu */     cin >> n;/* EtQF2DXsp ily traian iys5GwWfu */     for (int i = 1 ; i <= n; ++i)/* EtQF2DXsp ily traian iys5GwWfu */     {/* EtQF2DXsp ily traian iys5GwWfu */         cin >> a[i];/* EtQF2DXsp ily traian iys5GwWfu */     }/* EtQF2DXsp ily traian iys5GwWfu */     for (int i = 1 ; i <= n; ++i)/* EtQF2DXsp ily traian iys5GwWfu */     {/* EtQF2DXsp ily traian iys5GwWfu */         if (i <= n/2)/* EtQF2DXsp ily traian iys5GwWfu */             s1+=a[i];/* EtQF2DXsp ily traian iys5GwWfu */         else/* EtQF2DXsp ily traian iys5GwWfu */             s2+=a[i];/* EtQF2DXsp ily traian iys5GwWfu */     }/* EtQF2DXsp ily traian iys5GwWfu */     cout << s1*s2;/* EtQF2DXsp ily traian iys5GwWfu */     return 0;/* EtQF2DXsp ily traian iys5GwWfu */ }