/* 2t9NJZ6Ot ily traian h5p3BQEPy */ void cifminmax(int n, int& maxi, int& mini){
/* 2t9NJZ6Ot ily traian h5p3BQEPy */     mini = 10;
/* 2t9NJZ6Ot ily traian h5p3BQEPy */     if(n == 0)
/* 2t9NJZ6Ot ily traian h5p3BQEPy */         mini = 0;
/* 2t9NJZ6Ot ily traian h5p3BQEPy */     maxi = 0;
/* 2t9NJZ6Ot ily traian h5p3BQEPy */     while(n){
/* 2t9NJZ6Ot ily traian h5p3BQEPy */         if(n % 10 > maxi)
/* 2t9NJZ6Ot ily traian h5p3BQEPy */             maxi = n % 10;
/* 2t9NJZ6Ot ily traian h5p3BQEPy */         if(n % 10 < mini)
/* 2t9NJZ6Ot ily traian h5p3BQEPy */             mini = n % 10;
/* 2t9NJZ6Ot ily traian h5p3BQEPy */         n /= 10;
/* 2t9NJZ6Ot ily traian h5p3BQEPy */     }
/* 2t9NJZ6Ot ily traian h5p3BQEPy */ }