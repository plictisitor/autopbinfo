/* p8bQcmMn6 ily traian z65twW8GC */ #include <bits/stdc++.h>/* p8bQcmMn6 ily traian z65twW8GC */ using namespace std;/* p8bQcmMn6 ily traian z65twW8GC */ /* p8bQcmMn6 ily traian z65twW8GC */ ifstream cin("detdrum1.in");/* p8bQcmMn6 ily traian z65twW8GC */ ofstream cout("detdrum1.out");/* p8bQcmMn6 ily traian z65twW8GC */ /* p8bQcmMn6 ily traian z65twW8GC */ int t[101], n, k , rez[101] , cnt;/* p8bQcmMn6 ily traian z65twW8GC */ /* p8bQcmMn6 ily traian z65twW8GC */ int main()/* p8bQcmMn6 ily traian z65twW8GC */ {/* p8bQcmMn6 ily traian z65twW8GC */     cin >> n >> k;/* p8bQcmMn6 ily traian z65twW8GC */     for(int i = 1 ; i <= n ; i++)/* p8bQcmMn6 ily traian z65twW8GC */         cin >> t[i];/* p8bQcmMn6 ily traian z65twW8GC */     while(k)/* p8bQcmMn6 ily traian z65twW8GC */     {/* p8bQcmMn6 ily traian z65twW8GC */         rez[++cnt] = k;/* p8bQcmMn6 ily traian z65twW8GC */         k = t[k];/* p8bQcmMn6 ily traian z65twW8GC */     }/* p8bQcmMn6 ily traian z65twW8GC */     for(int i = cnt ; i >= 1 ; i--)/* p8bQcmMn6 ily traian z65twW8GC */         cout << rez[i] << " ";/* p8bQcmMn6 ily traian z65twW8GC */ }