/* iD2Kqi1Uj ily traian qjEbJKdfC */ int concat(int a, int b){
/* iD2Kqi1Uj ily traian qjEbJKdfC */ 
/* iD2Kqi1Uj ily traian qjEbJKdfC */     int cb = b;
/* iD2Kqi1Uj ily traian qjEbJKdfC */     int p = 1;
/* iD2Kqi1Uj ily traian qjEbJKdfC */     while(cb){
/* iD2Kqi1Uj ily traian qjEbJKdfC */         p = p * 10;
/* iD2Kqi1Uj ily traian qjEbJKdfC */         cb /= 10;
/* iD2Kqi1Uj ily traian qjEbJKdfC */     }
/* iD2Kqi1Uj ily traian qjEbJKdfC */     
/* iD2Kqi1Uj ily traian qjEbJKdfC */     /// a -> b = a * 10ˆnrcif(b)^+ b;
/* iD2Kqi1Uj ily traian qjEbJKdfC */     /// 152, 52 = 152 * 100 + 52 => 15252
/* iD2Kqi1Uj ily traian qjEbJKdfC */     
/* iD2Kqi1Uj ily traian qjEbJKdfC */     a = a * p + b;
/* iD2Kqi1Uj ily traian qjEbJKdfC */ 
/* iD2Kqi1Uj ily traian qjEbJKdfC */     return a;
/* iD2Kqi1Uj ily traian qjEbJKdfC */ 
/* iD2Kqi1Uj ily traian qjEbJKdfC */ }