/* ocOgl1yRp ily traian O2Ozx2hgY */ #include <bits/stdc++.h>/* ocOgl1yRp ily traian O2Ozx2hgY */ using namespace std;/* ocOgl1yRp ily traian O2Ozx2hgY */ int n , a[101][101];/* ocOgl1yRp ily traian O2Ozx2hgY */ int sort(int col)/* ocOgl1yRp ily traian O2Ozx2hgY */ {/* ocOgl1yRp ily traian O2Ozx2hgY */     for(int i = 0 ; i < n ; ++i)/* ocOgl1yRp ily traian O2Ozx2hgY */         for(int j= i+1; j < n; ++j)/* ocOgl1yRp ily traian O2Ozx2hgY */         {/* ocOgl1yRp ily traian O2Ozx2hgY */             if(a[i][col] > a[j][col])/* ocOgl1yRp ily traian O2Ozx2hgY */             {/* ocOgl1yRp ily traian O2Ozx2hgY */                 int aux = a[i][col];/* ocOgl1yRp ily traian O2Ozx2hgY */                 a[i][col] = a[j][col];/* ocOgl1yRp ily traian O2Ozx2hgY */                 a[j][col] = aux;/* ocOgl1yRp ily traian O2Ozx2hgY */             }/* ocOgl1yRp ily traian O2Ozx2hgY */         }/* ocOgl1yRp ily traian O2Ozx2hgY */ }/* ocOgl1yRp ily traian O2Ozx2hgY */ int main()/* ocOgl1yRp ily traian O2Ozx2hgY */ {/* ocOgl1yRp ily traian O2Ozx2hgY */     int m , cnt = 0 , cate=0;/* ocOgl1yRp ily traian O2Ozx2hgY */     cin >> n >> m;/* ocOgl1yRp ily traian O2Ozx2hgY */     for(int i = 0 ; i < n ; ++i)/* ocOgl1yRp ily traian O2Ozx2hgY */         for(int j= 0; j < m; ++j)  cin >> a[i][j];/* ocOgl1yRp ily traian O2Ozx2hgY */     for(int j = 0 ; j < m ; ++j)/* ocOgl1yRp ily traian O2Ozx2hgY */     {/* ocOgl1yRp ily traian O2Ozx2hgY */         sort(j);/* ocOgl1yRp ily traian O2Ozx2hgY */         int ok = 1;/* ocOgl1yRp ily traian O2Ozx2hgY */         for(int i = 0; i < n; ++i)/* ocOgl1yRp ily traian O2Ozx2hgY */         {/* ocOgl1yRp ily traian O2Ozx2hgY */             if (a[i][j] == a[i-1][j]) ok = 0;/* ocOgl1yRp ily traian O2Ozx2hgY */         }/* ocOgl1yRp ily traian O2Ozx2hgY */         if(ok) cate++;/* ocOgl1yRp ily traian O2Ozx2hgY */     }/* ocOgl1yRp ily traian O2Ozx2hgY */     cout << cate;/* ocOgl1yRp ily traian O2Ozx2hgY */     return 0;/* ocOgl1yRp ily traian O2Ozx2hgY */ }