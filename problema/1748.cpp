/* UtlCxRgwc ily traian XRHocRuA2 */ #include <bits/stdc++.h>/* UtlCxRgwc ily traian XRHocRuA2 */ using namespace std;/* UtlCxRgwc ily traian XRHocRuA2 */ /* UtlCxRgwc ily traian XRHocRuA2 */ int a[501][501];/* UtlCxRgwc ily traian XRHocRuA2 */ /* UtlCxRgwc ily traian XRHocRuA2 */ bool prim(int n)/* UtlCxRgwc ily traian XRHocRuA2 */ {/* UtlCxRgwc ily traian XRHocRuA2 */     int cnt = 0;/* UtlCxRgwc ily traian XRHocRuA2 */     for(int i = 1 ; i * i <= n ; ++i)/* UtlCxRgwc ily traian XRHocRuA2 */         if(n % i == 0 && i * i != n)/* UtlCxRgwc ily traian XRHocRuA2 */             cnt+=2;/* UtlCxRgwc ily traian XRHocRuA2 */         else if(i * i == n)/* UtlCxRgwc ily traian XRHocRuA2 */             cnt++;/* UtlCxRgwc ily traian XRHocRuA2 */     if(cnt==2)/* UtlCxRgwc ily traian XRHocRuA2 */         return 1;/* UtlCxRgwc ily traian XRHocRuA2 */     return 0;/* UtlCxRgwc ily traian XRHocRuA2 */ }/* UtlCxRgwc ily traian XRHocRuA2 */ /* UtlCxRgwc ily traian XRHocRuA2 */ bool perfect(int n)/* UtlCxRgwc ily traian XRHocRuA2 */ {/* UtlCxRgwc ily traian XRHocRuA2 */     int s=0;/* UtlCxRgwc ily traian XRHocRuA2 */     while(n)/* UtlCxRgwc ily traian XRHocRuA2 */         s+=n%10 , n/=10;/* UtlCxRgwc ily traian XRHocRuA2 */     if(prim(s))/* UtlCxRgwc ily traian XRHocRuA2 */         return 1;/* UtlCxRgwc ily traian XRHocRuA2 */     return 0;/* UtlCxRgwc ily traian XRHocRuA2 */ }/* UtlCxRgwc ily traian XRHocRuA2 */ /* UtlCxRgwc ily traian XRHocRuA2 */ int main()/* UtlCxRgwc ily traian XRHocRuA2 */ {/* UtlCxRgwc ily traian XRHocRuA2 */     int n , m;/* UtlCxRgwc ily traian XRHocRuA2 */     cin >> n >> m;/* UtlCxRgwc ily traian XRHocRuA2 */     for(int i = 1 ; i <= n ; ++i)/* UtlCxRgwc ily traian XRHocRuA2 */         for(int j = 1 ; j <= m ; ++j)/* UtlCxRgwc ily traian XRHocRuA2 */             cin >> a[i][j];/* UtlCxRgwc ily traian XRHocRuA2 */     int cnt=0;/* UtlCxRgwc ily traian XRHocRuA2 */     for(int i = 1 ; i <= n ; ++i)/* UtlCxRgwc ily traian XRHocRuA2 */     {/* UtlCxRgwc ily traian XRHocRuA2 */         for(int j = 1 ; j <= m ; ++j)/* UtlCxRgwc ily traian XRHocRuA2 */         {/* UtlCxRgwc ily traian XRHocRuA2 */             if(prim(a[i][j]))/* UtlCxRgwc ily traian XRHocRuA2 */             {/* UtlCxRgwc ily traian XRHocRuA2 */                 cnt+=2;/* UtlCxRgwc ily traian XRHocRuA2 */                 a[i][j]=1;/* UtlCxRgwc ily traian XRHocRuA2 */                 if(i-1 > 0)/* UtlCxRgwc ily traian XRHocRuA2 */                     i--;/* UtlCxRgwc ily traian XRHocRuA2 */                 if(j-1 > 0)/* UtlCxRgwc ily traian XRHocRuA2 */                     j--;/* UtlCxRgwc ily traian XRHocRuA2 */             }/* UtlCxRgwc ily traian XRHocRuA2 */             else if(perfect(a[i][j]))/* UtlCxRgwc ily traian XRHocRuA2 */             {/* UtlCxRgwc ily traian XRHocRuA2 */                 cnt+=2;/* UtlCxRgwc ily traian XRHocRuA2 */                 a[i][j]=1;/* UtlCxRgwc ily traian XRHocRuA2 */                 if(i+1<=n)/* UtlCxRgwc ily traian XRHocRuA2 */                     i++;/* UtlCxRgwc ily traian XRHocRuA2 */                 if(j+1<=m)/* UtlCxRgwc ily traian XRHocRuA2 */                     j++;/* UtlCxRgwc ily traian XRHocRuA2 */             }/* UtlCxRgwc ily traian XRHocRuA2 */             else/* UtlCxRgwc ily traian XRHocRuA2 */                 cnt++;/* UtlCxRgwc ily traian XRHocRuA2 */         }/* UtlCxRgwc ily traian XRHocRuA2 */     }/* UtlCxRgwc ily traian XRHocRuA2 */     cout << cnt;/* UtlCxRgwc ily traian XRHocRuA2 */     return 0;/* UtlCxRgwc ily traian XRHocRuA2 */ }