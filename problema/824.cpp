/* ejjCAk58j ily traian EBdZ2T1MJ */ int cifmax(int n){/* ejjCAk58j ily traian EBdZ2T1MJ */     if(n == 0)/* ejjCAk58j ily traian EBdZ2T1MJ */         return 0;/* ejjCAk58j ily traian EBdZ2T1MJ */     else/* ejjCAk58j ily traian EBdZ2T1MJ */         return max(n % 10, cifmax(n/10));/* ejjCAk58j ily traian EBdZ2T1MJ */ }