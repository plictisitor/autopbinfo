/* 02dBooHW6 ily traian OybpREuj1 */ #include <bits/stdc++.h>/* 02dBooHW6 ily traian OybpREuj1 */ /* 02dBooHW6 ily traian OybpREuj1 */ using namespace std;/* 02dBooHW6 ily traian OybpREuj1 */ /* 02dBooHW6 ily traian OybpREuj1 */ ifstream cin("serbare2.in");/* 02dBooHW6 ily traian OybpREuj1 */ ofstream cout("serbare2.out");/* 02dBooHW6 ily traian OybpREuj1 */ /* 02dBooHW6 ily traian OybpREuj1 */ int n , k , p[20] , x[11] , a[101][101] , maxi;/* 02dBooHW6 ily traian OybpREuj1 */ /* 02dBooHW6 ily traian OybpREuj1 */ int verifica(int p)/* 02dBooHW6 ily traian OybpREuj1 */ {/* 02dBooHW6 ily traian OybpREuj1 */     for(int i = 1 ; i < p ; i++)/* 02dBooHW6 ily traian OybpREuj1 */             if(a[x[i]][x[p]] == 0) return 0;/* 02dBooHW6 ily traian OybpREuj1 */     return 1;/* 02dBooHW6 ily traian OybpREuj1 */ }/* 02dBooHW6 ily traian OybpREuj1 */ /* 02dBooHW6 ily traian OybpREuj1 */ void back(int p)/* 02dBooHW6 ily traian OybpREuj1 */ {/* 02dBooHW6 ily traian OybpREuj1 */     for(int i = x[p - 1] + 1 ; i <= n && maxi <= k; i++)/* 02dBooHW6 ily traian OybpREuj1 */     {/* 02dBooHW6 ily traian OybpREuj1 */         x[p] = i;/* 02dBooHW6 ily traian OybpREuj1 */         if(verifica(p))/* 02dBooHW6 ily traian OybpREuj1 */         {/* 02dBooHW6 ily traian OybpREuj1 */             if(p > maxi) maxi = p;/* 02dBooHW6 ily traian OybpREuj1 */             back(p + 1);/* 02dBooHW6 ily traian OybpREuj1 */         }/* 02dBooHW6 ily traian OybpREuj1 */     }/* 02dBooHW6 ily traian OybpREuj1 */ }/* 02dBooHW6 ily traian OybpREuj1 */ /* 02dBooHW6 ily traian OybpREuj1 */ int main()/* 02dBooHW6 ily traian OybpREuj1 */ {/* 02dBooHW6 ily traian OybpREuj1 */     cin >> n >> k;/* 02dBooHW6 ily traian OybpREuj1 */     for(int i = 1 ; i <= n ; i++)/* 02dBooHW6 ily traian OybpREuj1 */         for(int j = 1 ; j <= n ; j++)/* 02dBooHW6 ily traian OybpREuj1 */             cin >> a[i][j];/* 02dBooHW6 ily traian OybpREuj1 */     back(1);/* 02dBooHW6 ily traian OybpREuj1 */     cout << maxi;/* 02dBooHW6 ily traian OybpREuj1 */ }