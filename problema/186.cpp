/* Ye4yvqlpr ily traian CqBANuuZf */ #include <bits/stdc++.h>/* Ye4yvqlpr ily traian CqBANuuZf */ /* Ye4yvqlpr ily traian CqBANuuZf */ using namespace std;/* Ye4yvqlpr ily traian CqBANuuZf */ /* Ye4yvqlpr ily traian CqBANuuZf */ int main()/* Ye4yvqlpr ily traian CqBANuuZf */ {/* Ye4yvqlpr ily traian CqBANuuZf */     int n;/* Ye4yvqlpr ily traian CqBANuuZf */     cin >> n;/* Ye4yvqlpr ily traian CqBANuuZf */     int a[1001];/* Ye4yvqlpr ily traian CqBANuuZf */     for(int i = 1; i <= n; ++i){/* Ye4yvqlpr ily traian CqBANuuZf */         int x;/* Ye4yvqlpr ily traian CqBANuuZf */         cin >> x;/* Ye4yvqlpr ily traian CqBANuuZf */         int cifmin = 10;/* Ye4yvqlpr ily traian CqBANuuZf */         while(x){/* Ye4yvqlpr ily traian CqBANuuZf */             if(x % 10 < cifmin)/* Ye4yvqlpr ily traian CqBANuuZf */                 cifmin = x%10;/* Ye4yvqlpr ily traian CqBANuuZf */             x/=10;/* Ye4yvqlpr ily traian CqBANuuZf */         }/* Ye4yvqlpr ily traian CqBANuuZf */         a[i] = cifmin;/* Ye4yvqlpr ily traian CqBANuuZf */     }/* Ye4yvqlpr ily traian CqBANuuZf */ /* Ye4yvqlpr ily traian CqBANuuZf */     for(int i = 1; i < n; ++i)/* Ye4yvqlpr ily traian CqBANuuZf */         for(int j = i + 1; j <= n; ++j)/* Ye4yvqlpr ily traian CqBANuuZf */             if(a[i] > a[j])/* Ye4yvqlpr ily traian CqBANuuZf */                 swap(a[i], a[j]);/* Ye4yvqlpr ily traian CqBANuuZf */ /* Ye4yvqlpr ily traian CqBANuuZf */     int poz = 1;/* Ye4yvqlpr ily traian CqBANuuZf */     while(a[poz] == 0)/* Ye4yvqlpr ily traian CqBANuuZf */         poz++;/* Ye4yvqlpr ily traian CqBANuuZf */ /* Ye4yvqlpr ily traian CqBANuuZf */     swap(a[poz], a[1]);/* Ye4yvqlpr ily traian CqBANuuZf */ /* Ye4yvqlpr ily traian CqBANuuZf */     for(int i = 1; i <= n; ++i)/* Ye4yvqlpr ily traian CqBANuuZf */         cout << a[i];/* Ye4yvqlpr ily traian CqBANuuZf */ /* Ye4yvqlpr ily traian CqBANuuZf */     return 0;/* Ye4yvqlpr ily traian CqBANuuZf */ }