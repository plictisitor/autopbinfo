/* GhEnbdWhP ily traian mTRyKcq8X */ #include <bits/stdc++.h>/* GhEnbdWhP ily traian mTRyKcq8X */ using namespace std;/* GhEnbdWhP ily traian mTRyKcq8X */ /* GhEnbdWhP ily traian mTRyKcq8X */ ifstream cin("summax.in");/* GhEnbdWhP ily traian mTRyKcq8X */ ofstream cout("summax.out");/* GhEnbdWhP ily traian mTRyKcq8X */ /* GhEnbdWhP ily traian mTRyKcq8X */ int x[11] , p[11] , a[11][11] , n , smax , s;/* GhEnbdWhP ily traian mTRyKcq8X */ /* GhEnbdWhP ily traian mTRyKcq8X */ /* GhEnbdWhP ily traian mTRyKcq8X */ void back(int k)/* GhEnbdWhP ily traian mTRyKcq8X */ {/* GhEnbdWhP ily traian mTRyKcq8X */     for(int i = 1 ; i <= n ; ++i)/* GhEnbdWhP ily traian mTRyKcq8X */         if(!p[i])/* GhEnbdWhP ily traian mTRyKcq8X */         {/* GhEnbdWhP ily traian mTRyKcq8X */             p[i] = 1;/* GhEnbdWhP ily traian mTRyKcq8X */             x[k] = i;/* GhEnbdWhP ily traian mTRyKcq8X */             if(k == n)/* GhEnbdWhP ily traian mTRyKcq8X */             {/* GhEnbdWhP ily traian mTRyKcq8X */                 s = 0;/* GhEnbdWhP ily traian mTRyKcq8X */                 for(int j = 1 ; j <= n ; j++)/* GhEnbdWhP ily traian mTRyKcq8X */                     s += a[j][x[j]];/* GhEnbdWhP ily traian mTRyKcq8X */                 if(s>smax) smax = s;/* GhEnbdWhP ily traian mTRyKcq8X */             }/* GhEnbdWhP ily traian mTRyKcq8X */             else back(k + 1);/* GhEnbdWhP ily traian mTRyKcq8X */             p[i] = 0;/* GhEnbdWhP ily traian mTRyKcq8X */         }/* GhEnbdWhP ily traian mTRyKcq8X */ }/* GhEnbdWhP ily traian mTRyKcq8X */ int main()/* GhEnbdWhP ily traian mTRyKcq8X */ {/* GhEnbdWhP ily traian mTRyKcq8X */     cin >> n;/* GhEnbdWhP ily traian mTRyKcq8X */     for(int i = 1 ; i <= n ; ++i)/* GhEnbdWhP ily traian mTRyKcq8X */         for(int j = 1 ; j <= n ; ++j)/* GhEnbdWhP ily traian mTRyKcq8X */             cin >> a[i][j];/* GhEnbdWhP ily traian mTRyKcq8X */     back(1);/* GhEnbdWhP ily traian mTRyKcq8X */     cout << smax;/* GhEnbdWhP ily traian mTRyKcq8X */     return 0;/* GhEnbdWhP ily traian mTRyKcq8X */ }