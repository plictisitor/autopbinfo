/* kIwy8Nod9 ily traian h6fVy9syL */ #include <bits/stdc++.h>/* kIwy8Nod9 ily traian h6fVy9syL */ using namespace std;/* kIwy8Nod9 ily traian h6fVy9syL */ /* kIwy8Nod9 ily traian h6fVy9syL */ ifstream cin("lsq.in");/* kIwy8Nod9 ily traian h6fVy9syL */ ofstream cout("lsq.out");/* kIwy8Nod9 ily traian h6fVy9syL */ /* kIwy8Nod9 ily traian h6fVy9syL */ int nord[1002][1002] , vest[1002][1002] , n , m , lmax;/* kIwy8Nod9 ily traian h6fVy9syL */ char a[1002][1002];/* kIwy8Nod9 ily traian h6fVy9syL */ /* kIwy8Nod9 ily traian h6fVy9syL */ int main()/* kIwy8Nod9 ily traian h6fVy9syL */ {/* kIwy8Nod9 ily traian h6fVy9syL */     cin >> n >> m;/* kIwy8Nod9 ily traian h6fVy9syL */     for(int i = 1 ; i <= n ; i++)/* kIwy8Nod9 ily traian h6fVy9syL */         for(int j = 1 ; j <= m ; j++)/* kIwy8Nod9 ily traian h6fVy9syL */         {/* kIwy8Nod9 ily traian h6fVy9syL */             cin >> a[i][j];/* kIwy8Nod9 ily traian h6fVy9syL */             if(a[i][j] == '1')/* kIwy8Nod9 ily traian h6fVy9syL */             {/* kIwy8Nod9 ily traian h6fVy9syL */                 nord[i][j] = a[i][j] - '0' + nord[i-1][j];/* kIwy8Nod9 ily traian h6fVy9syL */                 vest[i][j] = a[i][j] - '0' + vest[i][j-1];/* kIwy8Nod9 ily traian h6fVy9syL */             }/* kIwy8Nod9 ily traian h6fVy9syL */         }/* kIwy8Nod9 ily traian h6fVy9syL */     for(int i = 1 ; i <= n ; i++)/* kIwy8Nod9 ily traian h6fVy9syL */         for(int j = 1 ; j <= m ; j++)/* kIwy8Nod9 ily traian h6fVy9syL */             for(int k = max(lmax , 1) ; k <= m - j + 1 && k <= n - i + 1; k++)/* kIwy8Nod9 ily traian h6fVy9syL */             if(vest[i][j + k - 1] - vest[i][j] + 1 == k && vest[i + k - 1][j + k - 1] - vest[i + k - 1][j] + 1 == k && ///sus si jos/* kIwy8Nod9 ily traian h6fVy9syL */                nord[i + k - 1][j] - nord[i][j] + 1 == k && nord[i + k - 1][j + k - 1] - nord[i][j + k - 1] + 1 == k)///stanga si dreapta/* kIwy8Nod9 ily traian h6fVy9syL */                 if(k > lmax) lmax = k;/* kIwy8Nod9 ily traian h6fVy9syL */ /* kIwy8Nod9 ily traian h6fVy9syL */     cout << lmax;/* kIwy8Nod9 ily traian h6fVy9syL */ }