/* Z9E2EQTSi ily traian KfSdEnT7y */ int magic(unsigned long long val)
/* Z9E2EQTSi ily traian KfSdEnT7y */ {
/* Z9E2EQTSi ily traian KfSdEnT7y */     unsigned long long dr = 1000000 , st = 0, m , n = 0;
/* Z9E2EQTSi ily traian KfSdEnT7y */     if(val < 15) n = 0;
/* Z9E2EQTSi ily traian KfSdEnT7y */     else
/* Z9E2EQTSi ily traian KfSdEnT7y */     {
/* Z9E2EQTSi ily traian KfSdEnT7y */         while(st <= dr && n == 0)
/* Z9E2EQTSi ily traian KfSdEnT7y */         {
/* Z9E2EQTSi ily traian KfSdEnT7y */             m = (st + dr) / 2;
/* Z9E2EQTSi ily traian KfSdEnT7y */             if((m * m * m + m) / 2 == val) n = m;
/* Z9E2EQTSi ily traian KfSdEnT7y */             else if((m * m * m + m) / 2 < val) st = m + 1;
/* Z9E2EQTSi ily traian KfSdEnT7y */             else dr = m - 1;
/* Z9E2EQTSi ily traian KfSdEnT7y */         }
/* Z9E2EQTSi ily traian KfSdEnT7y */     }
/* Z9E2EQTSi ily traian KfSdEnT7y */     return n;
/* Z9E2EQTSi ily traian KfSdEnT7y */ }