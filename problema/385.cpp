/* g6BEuhAqQ ily traian P7DI1JDsq */ #include <bits/stdc++.h>/* g6BEuhAqQ ily traian P7DI1JDsq */ using namespace std;/* g6BEuhAqQ ily traian P7DI1JDsq */ /* g6BEuhAqQ ily traian P7DI1JDsq */ ifstream cin("sumtri.in");/* g6BEuhAqQ ily traian P7DI1JDsq */ ofstream cout("sumtri.out");/* g6BEuhAqQ ily traian P7DI1JDsq */ /* g6BEuhAqQ ily traian P7DI1JDsq */ int n , a[101][101] , maxi;/* g6BEuhAqQ ily traian P7DI1JDsq */ /* g6BEuhAqQ ily traian P7DI1JDsq */ int main()/* g6BEuhAqQ ily traian P7DI1JDsq */ {/* g6BEuhAqQ ily traian P7DI1JDsq */     cin >> n;/* g6BEuhAqQ ily traian P7DI1JDsq */     for(int i = 1 ; i <= n ; i++)/* g6BEuhAqQ ily traian P7DI1JDsq */     {/* g6BEuhAqQ ily traian P7DI1JDsq */         for(int j = 1 ; j <= i ; j++)/* g6BEuhAqQ ily traian P7DI1JDsq */             cin >> a[i][j];/* g6BEuhAqQ ily traian P7DI1JDsq */     }/* g6BEuhAqQ ily traian P7DI1JDsq */     for(int i = 1 ; i <= n ; i++)/* g6BEuhAqQ ily traian P7DI1JDsq */     {/* g6BEuhAqQ ily traian P7DI1JDsq */         for(int j = 1 ; j <= i ; j++)/* g6BEuhAqQ ily traian P7DI1JDsq */             a[i][j] += max(a[i - 1][j] , a[i - 1][j - 1]);/* g6BEuhAqQ ily traian P7DI1JDsq */     }/* g6BEuhAqQ ily traian P7DI1JDsq */     for(int i = 1 ; i <= n ; i++)/* g6BEuhAqQ ily traian P7DI1JDsq */         maxi = max(a[n][i] , maxi);/* g6BEuhAqQ ily traian P7DI1JDsq */ /* g6BEuhAqQ ily traian P7DI1JDsq */     cout << maxi;/* g6BEuhAqQ ily traian P7DI1JDsq */ }