/* lVst434FE ily traian iCALeX0CY */ #include <bits/stdc++.h>/* lVst434FE ily traian iCALeX0CY */ using namespace std;/* lVst434FE ily traian iCALeX0CY */ /* lVst434FE ily traian iCALeX0CY */ int main()/* lVst434FE ily traian iCALeX0CY */ {/* lVst434FE ily traian iCALeX0CY */     int n , m;/* lVst434FE ily traian iCALeX0CY */     long long int sx=0 , sy=0;/* lVst434FE ily traian iCALeX0CY */     cin >> n;/* lVst434FE ily traian iCALeX0CY */     long long int x , y;/* lVst434FE ily traian iCALeX0CY */     for(int i = 1 ; i <= n ; ++i)/* lVst434FE ily traian iCALeX0CY */         cin >> x >> y , sx+=x , sy+=y;/* lVst434FE ily traian iCALeX0CY */     cin >> m;/* lVst434FE ily traian iCALeX0CY */     long long int min = 1000000000000001;/* lVst434FE ily traian iCALeX0CY */     bool ok = false;/* lVst434FE ily traian iCALeX0CY */     for(int i = 1 ; i <= m ; ++i)/* lVst434FE ily traian iCALeX0CY */     {/* lVst434FE ily traian iCALeX0CY */         long long int cost;/* lVst434FE ily traian iCALeX0CY */         cin >> x >> y >> cost;/* lVst434FE ily traian iCALeX0CY */         if(x >= sx && y >= sx)/* lVst434FE ily traian iCALeX0CY */             if(cost < min)/* lVst434FE ily traian iCALeX0CY */                 min = cost , ok = true;/* lVst434FE ily traian iCALeX0CY */     }/* lVst434FE ily traian iCALeX0CY */     if(ok)/* lVst434FE ily traian iCALeX0CY */         cout << min;/* lVst434FE ily traian iCALeX0CY */     else/* lVst434FE ily traian iCALeX0CY */         cout << -1;/* lVst434FE ily traian iCALeX0CY */     return 0;/* lVst434FE ily traian iCALeX0CY */ }