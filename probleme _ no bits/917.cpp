/* LzBVTzzLb ily traian 4CtIZk64D */ void cmmdc(int a, int b, int& r){
/* LzBVTzzLb ily traian 4CtIZk64D */     if(b == 0)
/* LzBVTzzLb ily traian 4CtIZk64D */         r = a;
/* LzBVTzzLb ily traian 4CtIZk64D */     else
/* LzBVTzzLb ily traian 4CtIZk64D */         cmmdc(b, a % b, r);
/* LzBVTzzLb ily traian 4CtIZk64D */ }