/* iSJAEqiqY ily traian 4Tz5678OZ */ #include <bits/stdc++.h>/* iSJAEqiqY ily traian 4Tz5678OZ */ using namespace std;/* iSJAEqiqY ily traian 4Tz5678OZ */ /* iSJAEqiqY ily traian 4Tz5678OZ */ ifstream cin("jocprim.in");/* iSJAEqiqY ily traian 4Tz5678OZ */ ofstream cout("jocprim.out");/* iSJAEqiqY ily traian 4Tz5678OZ */ /* iSJAEqiqY ily traian 4Tz5678OZ */ int n , x , cnt , f[10000001] , maxi , cate;/* iSJAEqiqY ily traian 4Tz5678OZ */ /* iSJAEqiqY ily traian 4Tz5678OZ */ int divprim(int n)/* iSJAEqiqY ily traian 4Tz5678OZ */ {/* iSJAEqiqY ily traian 4Tz5678OZ */     int d = 2 , rez;/* iSJAEqiqY ily traian 4Tz5678OZ */     while(n > 1)/* iSJAEqiqY ily traian 4Tz5678OZ */     {/* iSJAEqiqY ily traian 4Tz5678OZ */         int p = 0;/* iSJAEqiqY ily traian 4Tz5678OZ */         while(n % d == 0) n /= d , p++;/* iSJAEqiqY ily traian 4Tz5678OZ */         if(p) rez = d;/* iSJAEqiqY ily traian 4Tz5678OZ */         d++;/* iSJAEqiqY ily traian 4Tz5678OZ */         if(d * d > n) d = n;/* iSJAEqiqY ily traian 4Tz5678OZ */     }/* iSJAEqiqY ily traian 4Tz5678OZ */     return rez;/* iSJAEqiqY ily traian 4Tz5678OZ */ }/* iSJAEqiqY ily traian 4Tz5678OZ */ /* iSJAEqiqY ily traian 4Tz5678OZ */ int main()/* iSJAEqiqY ily traian 4Tz5678OZ */ {/* iSJAEqiqY ily traian 4Tz5678OZ */     cin >> n;/* iSJAEqiqY ily traian 4Tz5678OZ */     for(int i = 1 ; i <= n ; i++)/* iSJAEqiqY ily traian 4Tz5678OZ */     {/* iSJAEqiqY ily traian 4Tz5678OZ */         cin >> x;/* iSJAEqiqY ily traian 4Tz5678OZ */         f[divprim(x)]++;/* iSJAEqiqY ily traian 4Tz5678OZ */         maxi = max(maxi , divprim(x));/* iSJAEqiqY ily traian 4Tz5678OZ */     }/* iSJAEqiqY ily traian 4Tz5678OZ */     for(int i = 1 ; i <= maxi ; i++)/* iSJAEqiqY ily traian 4Tz5678OZ */         if(f[i]) cate++;/* iSJAEqiqY ily traian 4Tz5678OZ */     cout << cate << '\n';/* iSJAEqiqY ily traian 4Tz5678OZ */     for(int i = 1 ; i <= maxi ; i++)/* iSJAEqiqY ily traian 4Tz5678OZ */         if(f[i]) cout << i << " " << f[i] << '\n';/* iSJAEqiqY ily traian 4Tz5678OZ */     return 0;/* iSJAEqiqY ily traian 4Tz5678OZ */ }