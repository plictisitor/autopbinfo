/* rWeXcMCKt ily traian b0uBckR3G */ int cmmdc (int a, int b)
/* rWeXcMCKt ily traian b0uBckR3G */ {
/* rWeXcMCKt ily traian b0uBckR3G */     while(b)
/* rWeXcMCKt ily traian b0uBckR3G */     {
/* rWeXcMCKt ily traian b0uBckR3G */         int r = a % b;
/* rWeXcMCKt ily traian b0uBckR3G */         a = b;
/* rWeXcMCKt ily traian b0uBckR3G */         b = r;
/* rWeXcMCKt ily traian b0uBckR3G */     }
/* rWeXcMCKt ily traian b0uBckR3G */     return a;
/* rWeXcMCKt ily traian b0uBckR3G */ 
/* rWeXcMCKt ily traian b0uBckR3G */ }
/* rWeXcMCKt ily traian b0uBckR3G */ 
/* rWeXcMCKt ily traian b0uBckR3G */ int cmmmc (int a , int b)
/* rWeXcMCKt ily traian b0uBckR3G */ {
/* rWeXcMCKt ily traian b0uBckR3G */     return a * b / cmmdc(a, b);
/* rWeXcMCKt ily traian b0uBckR3G */ }
/* rWeXcMCKt ily traian b0uBckR3G */ 
/* rWeXcMCKt ily traian b0uBckR3G */ int resturi(int n , int x , int y , int r)
/* rWeXcMCKt ily traian b0uBckR3G */ {
/* rWeXcMCKt ily traian b0uBckR3G */     int val = cmmmc(x , y);
/* rWeXcMCKt ily traian b0uBckR3G */     n-=r;
/* rWeXcMCKt ily traian b0uBckR3G */     return n / val + 1;
/* rWeXcMCKt ily traian b0uBckR3G */ }