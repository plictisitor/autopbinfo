/* VUtBWeVpG ily traian u65uE2xLH */ int suma(int v[] , int n , int i , int j)
/* VUtBWeVpG ily traian u65uE2xLH */ {
/* VUtBWeVpG ily traian u65uE2xLH */     if(n == 0)
/* VUtBWeVpG ily traian u65uE2xLH */         return 0;
/* VUtBWeVpG ily traian u65uE2xLH */     else if(n >= i && n <= j)
/* VUtBWeVpG ily traian u65uE2xLH */         return suma(v , n-1 , i , j);
/* VUtBWeVpG ily traian u65uE2xLH */     else
/* VUtBWeVpG ily traian u65uE2xLH */         return v[n] + suma(v , n-1 , i , j);
/* VUtBWeVpG ily traian u65uE2xLH */ }