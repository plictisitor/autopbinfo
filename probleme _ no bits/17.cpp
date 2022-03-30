/* UMoOcFa4B ily traian ZCg8t44Ne */ void sum_div(int n, int& sum){
/* UMoOcFa4B ily traian ZCg8t44Ne */     sum = 0;
/* UMoOcFa4B ily traian ZCg8t44Ne */     for(int d = 1; d * d <= n; ++d){
/* UMoOcFa4B ily traian ZCg8t44Ne */         if(n % d == 0)
/* UMoOcFa4B ily traian ZCg8t44Ne */             sum += d + (n / d);
/* UMoOcFa4B ily traian ZCg8t44Ne */         if(d * d == n)
/* UMoOcFa4B ily traian ZCg8t44Ne */             sum -= d;
/* UMoOcFa4B ily traian ZCg8t44Ne */     }
/* UMoOcFa4B ily traian ZCg8t44Ne */ }