/* Bysfla5UN ily traian povxJV1zL */ #include <bits/stdc++.h>/* Bysfla5UN ily traian povxJV1zL */ void ordonare(int a[] , int n)/* Bysfla5UN ily traian povxJV1zL */ {/* Bysfla5UN ily traian povxJV1zL */     int b[1000];/* Bysfla5UN ily traian povxJV1zL */     for(int i = 0 ; i < n ; ++i)/* Bysfla5UN ily traian povxJV1zL */     {/* Bysfla5UN ily traian povxJV1zL */         b[i]=a[i];/* Bysfla5UN ily traian povxJV1zL */     }/* Bysfla5UN ily traian povxJV1zL */     sort(b , b+n);/* Bysfla5UN ily traian povxJV1zL */     int p=0;/* Bysfla5UN ily traian povxJV1zL */     for(int i = n-1 ; i >= 0 ; --i)/* Bysfla5UN ily traian povxJV1zL */     {/* Bysfla5UN ily traian povxJV1zL */         a[p]=b[i];/* Bysfla5UN ily traian povxJV1zL */         p++;/* Bysfla5UN ily traian povxJV1zL */     }/* Bysfla5UN ily traian povxJV1zL */ }