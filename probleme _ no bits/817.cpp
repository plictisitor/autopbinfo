/* uRzWl4dTp ily traian iuASGT56i */ void zero(int n, int a[]){
/* uRzWl4dTp ily traian iuASGT56i */     int par[51], imp[51], ip = 0, ii = 0;
/* uRzWl4dTp ily traian iuASGT56i */     for(int i = 1; i <= 2 * n; ++i)
/* uRzWl4dTp ily traian iuASGT56i */         if(a[i] % 2 == 0)
/* uRzWl4dTp ily traian iuASGT56i */             par[++ip] = a[i];
/* uRzWl4dTp ily traian iuASGT56i */         else
/* uRzWl4dTp ily traian iuASGT56i */             imp[++ii] = a[i];
/* uRzWl4dTp ily traian iuASGT56i */     ip = 1;
/* uRzWl4dTp ily traian iuASGT56i */     ii = 1;
/* uRzWl4dTp ily traian iuASGT56i */     for(int i = 1; i <= 2 * n; ++i)
/* uRzWl4dTp ily traian iuASGT56i */         if(i % 2 == 0)
/* uRzWl4dTp ily traian iuASGT56i */             a[i] = par[ip], ip++;
/* uRzWl4dTp ily traian iuASGT56i */         else
/* uRzWl4dTp ily traian iuASGT56i */             a[i] = imp[ii], ii++;
/* uRzWl4dTp ily traian iuASGT56i */ }