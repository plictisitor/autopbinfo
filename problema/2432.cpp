/* LVHNiqgOP ily traian N673Aq296 */ #include <bits/stdc++.h>/* LVHNiqgOP ily traian N673Aq296 */ using namespace std;/* LVHNiqgOP ily traian N673Aq296 */ ifstream cin("cruce.in");/* LVHNiqgOP ily traian N673Aq296 */ ofstream cout("cruce.out");/* LVHNiqgOP ily traian N673Aq296 */ int n , m , k , a[501][501], imax , jmax;/* LVHNiqgOP ily traian N673Aq296 */ long long smax = -2000000000;/* LVHNiqgOP ily traian N673Aq296 */ int main()/* LVHNiqgOP ily traian N673Aq296 */ {/* LVHNiqgOP ily traian N673Aq296 */     cin >> n >> k;/* LVHNiqgOP ily traian N673Aq296 */     for(int i = 1 ; i <= n ; ++i)/* LVHNiqgOP ily traian N673Aq296 */         for(int j = 1 ; j <= n ; ++j)/* LVHNiqgOP ily traian N673Aq296 */         {/* LVHNiqgOP ily traian N673Aq296 */             cin >> a[i][j];/* LVHNiqgOP ily traian N673Aq296 */             a[i][j] = a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];/* LVHNiqgOP ily traian N673Aq296 */         }/* LVHNiqgOP ily traian N673Aq296 */ /* LVHNiqgOP ily traian N673Aq296 */     for(int x = 1; x <= n+1-k ; x++)/* LVHNiqgOP ily traian N673Aq296 */     {/* LVHNiqgOP ily traian N673Aq296 */         for(int y = 1 ; y <= n-k+1 ; y++)/* LVHNiqgOP ily traian N673Aq296 */         {/* LVHNiqgOP ily traian N673Aq296 */             long long s = a[x+k-1][n] - a[x-1][n] + a[n][y+k-1] - a[n][y-1];/* LVHNiqgOP ily traian N673Aq296 */             long long s1 = a[x+k-1][y+k-1] - a[x-1][y+k-1] - a[x+k-1][y-1] + a[x-1][y-1];/* LVHNiqgOP ily traian N673Aq296 */             if(s-s1 > smax) smax = s-s1 , imax = x , jmax = y;/* LVHNiqgOP ily traian N673Aq296 */         }/* LVHNiqgOP ily traian N673Aq296 */     }/* LVHNiqgOP ily traian N673Aq296 */     cout << smax << " "  << imax << " " << jmax;/* LVHNiqgOP ily traian N673Aq296 */     return 0;/* LVHNiqgOP ily traian N673Aq296 */ }