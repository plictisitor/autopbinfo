/* 9EwIqqKB8 ily traian njGPZ89bO */ bool prim(int n)/* 9EwIqqKB8 ily traian njGPZ89bO */ {/* 9EwIqqKB8 ily traian njGPZ89bO */     int cnt = 0;/* 9EwIqqKB8 ily traian njGPZ89bO */     for(int d = 1 ; d * d <= n ; ++d)/* 9EwIqqKB8 ily traian njGPZ89bO */     {/* 9EwIqqKB8 ily traian njGPZ89bO */         if(n % d == 0)/* 9EwIqqKB8 ily traian njGPZ89bO */             cnt+=2;/* 9EwIqqKB8 ily traian njGPZ89bO */         if(d * d == n)/* 9EwIqqKB8 ily traian njGPZ89bO */             cnt--;/* 9EwIqqKB8 ily traian njGPZ89bO */     }/* 9EwIqqKB8 ily traian njGPZ89bO */     if(cnt == 2)/* 9EwIqqKB8 ily traian njGPZ89bO */         return 1;/* 9EwIqqKB8 ily traian njGPZ89bO */     return 0;/* 9EwIqqKB8 ily traian njGPZ89bO */ }/* 9EwIqqKB8 ily traian njGPZ89bO */ /* 9EwIqqKB8 ily traian njGPZ89bO */ int interval(int n)/* 9EwIqqKB8 ily traian njGPZ89bO */ {/* 9EwIqqKB8 ily traian njGPZ89bO */     for(int i = n ; 1 ; ++i)/* 9EwIqqKB8 ily traian njGPZ89bO */     {/* 9EwIqqKB8 ily traian njGPZ89bO */         if(prim(i))/* 9EwIqqKB8 ily traian njGPZ89bO */             return i+1;/* 9EwIqqKB8 ily traian njGPZ89bO */     }/* 9EwIqqKB8 ily traian njGPZ89bO */ }