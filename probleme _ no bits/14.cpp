/* 4c0wvlO4r ily traian oPmcBNIMu */ bool prim(int n){
/* 4c0wvlO4r ily traian oPmcBNIMu */ 
/* 4c0wvlO4r ily traian oPmcBNIMu */     int d = 2, cnt = 1;
/* 4c0wvlO4r ily traian oPmcBNIMu */     while(n > 1){
/* 4c0wvlO4r ily traian oPmcBNIMu */         int p = 0;
/* 4c0wvlO4r ily traian oPmcBNIMu */         while(n % d == 0)
/* 4c0wvlO4r ily traian oPmcBNIMu */             n /= d, p++;
/* 4c0wvlO4r ily traian oPmcBNIMu */         cnt *= (p + 1);
/* 4c0wvlO4r ily traian oPmcBNIMu */         d++;
/* 4c0wvlO4r ily traian oPmcBNIMu */         if(d * d > n)
/* 4c0wvlO4r ily traian oPmcBNIMu */             d = n;
/* 4c0wvlO4r ily traian oPmcBNIMu */     }
/* 4c0wvlO4r ily traian oPmcBNIMu */ 
/* 4c0wvlO4r ily traian oPmcBNIMu */     return cnt == 2;
/* 4c0wvlO4r ily traian oPmcBNIMu */ 
/* 4c0wvlO4r ily traian oPmcBNIMu */ }