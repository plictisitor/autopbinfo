/* v7ErDMTui ily traian Gju04PKs3 */ #include <bits/stdc++.h>/* v7ErDMTui ily traian Gju04PKs3 */ using namespace std;/* v7ErDMTui ily traian Gju04PKs3 */ ifstream cin("numere9.in");/* v7ErDMTui ily traian Gju04PKs3 */ ofstream cout("numere9.out");/* v7ErDMTui ily traian Gju04PKs3 */ int main()/* v7ErDMTui ily traian Gju04PKs3 */ {/* v7ErDMTui ily traian Gju04PKs3 */     int n , x , p = 0 , f[60000]={0} , ok = 0 , nr1 , nr2;/* v7ErDMTui ily traian Gju04PKs3 */     cin >> n;/* v7ErDMTui ily traian Gju04PKs3 */     for(int i = 0 ; i < n ; ++i)/* v7ErDMTui ily traian Gju04PKs3 */     {/* v7ErDMTui ily traian Gju04PKs3 */         for(int j = 0 ; j < n ; ++j)/* v7ErDMTui ily traian Gju04PKs3 */         {/* v7ErDMTui ily traian Gju04PKs3 */             cin >> x;/* v7ErDMTui ily traian Gju04PKs3 */             if(x > p && x<= 60000) p = x;/* v7ErDMTui ily traian Gju04PKs3 */             if(x <= 60000)f[x]++;/* v7ErDMTui ily traian Gju04PKs3 */         }/* v7ErDMTui ily traian Gju04PKs3 */     }/* v7ErDMTui ily traian Gju04PKs3 */     if(p < n * n && p != 60000) p = n * n;/* v7ErDMTui ily traian Gju04PKs3 */     for(int i = 1 ; i <= p ; ++i)/* v7ErDMTui ily traian Gju04PKs3 */     {/* v7ErDMTui ily traian Gju04PKs3 */         if(f[i]==0 && ok==0)/* v7ErDMTui ily traian Gju04PKs3 */         {/* v7ErDMTui ily traian Gju04PKs3 */             nr1 = i;/* v7ErDMTui ily traian Gju04PKs3 */             ok++;/* v7ErDMTui ily traian Gju04PKs3 */         }/* v7ErDMTui ily traian Gju04PKs3 */         if(f[i]==0) nr2 = i;/* v7ErDMTui ily traian Gju04PKs3 */     }/* v7ErDMTui ily traian Gju04PKs3 */     cout << nr1 << " " << nr2;/* v7ErDMTui ily traian Gju04PKs3 */ }