/* VNuzNvcJ9 ily traian RW4Z4Hucw */ #include <bits/stdc++.h>/* VNuzNvcJ9 ily traian RW4Z4Hucw */ using namespace std;/* VNuzNvcJ9 ily traian RW4Z4Hucw */ /* VNuzNvcJ9 ily traian RW4Z4Hucw */ int main()/* VNuzNvcJ9 ily traian RW4Z4Hucw */ {/* VNuzNvcJ9 ily traian RW4Z4Hucw */     int n, x , y , p;/* VNuzNvcJ9 ily traian RW4Z4Hucw */     cin >> n >> x >> y >> p;/* VNuzNvcJ9 ily traian RW4Z4Hucw */     if(p == 1)/* VNuzNvcJ9 ily traian RW4Z4Hucw */     {/* VNuzNvcJ9 ily traian RW4Z4Hucw */         int u=0, c=0;/* VNuzNvcJ9 ily traian RW4Z4Hucw */         for(int i = 1 ; i <= n; ++i)/* VNuzNvcJ9 ily traian RW4Z4Hucw */             cin >> x >> y, u += x, c += y;/* VNuzNvcJ9 ily traian RW4Z4Hucw */         cout << u << ' ' << c << ' ' << u-c;/* VNuzNvcJ9 ily traian RW4Z4Hucw */     }/* VNuzNvcJ9 ily traian RW4Z4Hucw */     else/* VNuzNvcJ9 ily traian RW4Z4Hucw */     {/* VNuzNvcJ9 ily traian RW4Z4Hucw */         int a, b, u = 0;/* VNuzNvcJ9 ily traian RW4Z4Hucw */         for(int i = 1; i < x; ++i)/* VNuzNvcJ9 ily traian RW4Z4Hucw */             cin >> a >> b, u+=a, u-=b;/* VNuzNvcJ9 ily traian RW4Z4Hucw */         for(int i = x; i <= n; ++i)/* VNuzNvcJ9 ily traian RW4Z4Hucw */             cin >> a >> b;/* VNuzNvcJ9 ily traian RW4Z4Hucw */         if(u < y)/* VNuzNvcJ9 ily traian RW4Z4Hucw */             cout << "NU";/* VNuzNvcJ9 ily traian RW4Z4Hucw */         else/* VNuzNvcJ9 ily traian RW4Z4Hucw */             cout << "DA";/* VNuzNvcJ9 ily traian RW4Z4Hucw */     }/* VNuzNvcJ9 ily traian RW4Z4Hucw */     return 0;/* VNuzNvcJ9 ily traian RW4Z4Hucw */ }