/* FpByU2Rzy ily traian o8KnEQzeR */ void duplicare(int &n)
/* FpByU2Rzy ily traian o8KnEQzeR */ {
/* FpByU2Rzy ily traian o8KnEQzeR */     int a[30] , p = 1;
/* FpByU2Rzy ily traian o8KnEQzeR */     while(n)
/* FpByU2Rzy ily traian o8KnEQzeR */     {
/* FpByU2Rzy ily traian o8KnEQzeR */         a[p]=n%10;
/* FpByU2Rzy ily traian o8KnEQzeR */         n/=10;
/* FpByU2Rzy ily traian o8KnEQzeR */         p++;
/* FpByU2Rzy ily traian o8KnEQzeR */     }
/* FpByU2Rzy ily traian o8KnEQzeR */     p--;
/* FpByU2Rzy ily traian o8KnEQzeR */     for(int i = p ; i >= 1 ; --i)
/* FpByU2Rzy ily traian o8KnEQzeR */     {
/* FpByU2Rzy ily traian o8KnEQzeR */         if(a[i] % 2 == 0)
/* FpByU2Rzy ily traian o8KnEQzeR */             n = n * 10 + a[i] , n = n * 10 + a[i]/2;
/* FpByU2Rzy ily traian o8KnEQzeR */         else
/* FpByU2Rzy ily traian o8KnEQzeR */             n = n * 10 + a[i];
/* FpByU2Rzy ily traian o8KnEQzeR */     }
/* FpByU2Rzy ily traian o8KnEQzeR */ }