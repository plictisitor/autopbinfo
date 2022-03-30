/* nVf4QJ0le ily traian doE0mdVWk */ int nz(int n){
/* nVf4QJ0le ily traian doE0mdVWk */     int cnt5 = 0, cnt2 = 0;
/* nVf4QJ0le ily traian doE0mdVWk */     int put2 = 2, put5 = 5;
/* nVf4QJ0le ily traian doE0mdVWk */     while(put2 < n){
/* nVf4QJ0le ily traian doE0mdVWk */         cnt2 += n / put2;
/* nVf4QJ0le ily traian doE0mdVWk */         put2 *= 2;
/* nVf4QJ0le ily traian doE0mdVWk */     }
/* nVf4QJ0le ily traian doE0mdVWk */     while(put5 < n){
/* nVf4QJ0le ily traian doE0mdVWk */         cnt5 += n / put5;
/* nVf4QJ0le ily traian doE0mdVWk */         put5 *= 5;
/* nVf4QJ0le ily traian doE0mdVWk */     }
/* nVf4QJ0le ily traian doE0mdVWk */     return cnt5;
/* nVf4QJ0le ily traian doE0mdVWk */ }