/* OKKDegeBG ily traian uM6Eqnvli */ #include <bits/stdc++.h>/* OKKDegeBG ily traian uM6Eqnvli */ using namespace std;/* OKKDegeBG ily traian uM6Eqnvli */ ifstream fin("graf_partial.in");/* OKKDegeBG ily traian uM6Eqnvli */ ofstream fout("graf_partial.out");/* OKKDegeBG ily traian uM6Eqnvli */ int a[105][105];/* OKKDegeBG ily traian uM6Eqnvli */ int main()/* OKKDegeBG ily traian uM6Eqnvli */ {/* OKKDegeBG ily traian uM6Eqnvli */     int n , x , y , nrm = 0;/* OKKDegeBG ily traian uM6Eqnvli */     fin >> n;/* OKKDegeBG ily traian uM6Eqnvli */     while(fin >> x >> y)/* OKKDegeBG ily traian uM6Eqnvli */     {/* OKKDegeBG ily traian uM6Eqnvli */         if (!a[x][y])nrm++;/* OKKDegeBG ily traian uM6Eqnvli */         a[x][y]=1;/* OKKDegeBG ily traian uM6Eqnvli */         a[y][x]=1;/* OKKDegeBG ily traian uM6Eqnvli */     }/* OKKDegeBG ily traian uM6Eqnvli */     for (int i = 1; i <= n; i++)/* OKKDegeBG ily traian uM6Eqnvli */     {/* OKKDegeBG ily traian uM6Eqnvli */         for(int j = 1 ; j <= n ; ++j)/* OKKDegeBG ily traian uM6Eqnvli */         {/* OKKDegeBG ily traian uM6Eqnvli */             if(i % 2 == j % 2 && a[i][j] == 1)/* OKKDegeBG ily traian uM6Eqnvli */             {/* OKKDegeBG ily traian uM6Eqnvli */                 a[i][j] = 0;/* OKKDegeBG ily traian uM6Eqnvli */                 a[j][i] = 0;/* OKKDegeBG ily traian uM6Eqnvli */                 nrm--;/* OKKDegeBG ily traian uM6Eqnvli */             }/* OKKDegeBG ily traian uM6Eqnvli */         }/* OKKDegeBG ily traian uM6Eqnvli */     }/* OKKDegeBG ily traian uM6Eqnvli */     fout << nrm;/* OKKDegeBG ily traian uM6Eqnvli */     return 0;/* OKKDegeBG ily traian uM6Eqnvli */ }