/* 7JPZ8UCLy ily traian KJIa24SAL */ bool prim(int n){
/* 7JPZ8UCLy ily traian KJIa24SAL */     int d = 2, cnt = 1;
/* 7JPZ8UCLy ily traian KJIa24SAL */     while(n > 1){
/* 7JPZ8UCLy ily traian KJIa24SAL */         int p = 0;
/* 7JPZ8UCLy ily traian KJIa24SAL */         while(n % d == 0)
/* 7JPZ8UCLy ily traian KJIa24SAL */             n/=d, p++;
/* 7JPZ8UCLy ily traian KJIa24SAL */         cnt *= (p + 1);
/* 7JPZ8UCLy ily traian KJIa24SAL */         d++;
/* 7JPZ8UCLy ily traian KJIa24SAL */         if(d * d > n)
/* 7JPZ8UCLy ily traian KJIa24SAL */             d = n;
/* 7JPZ8UCLy ily traian KJIa24SAL */     }
/* 7JPZ8UCLy ily traian KJIa24SAL */     return cnt == 2;
/* 7JPZ8UCLy ily traian KJIa24SAL */ }
/* 7JPZ8UCLy ily traian KJIa24SAL */ 
/* 7JPZ8UCLy ily traian KJIa24SAL */ int i_prim(int n){
/* 7JPZ8UCLy ily traian KJIa24SAL */ 
/* 7JPZ8UCLy ily traian KJIa24SAL */     int p1 = n, p2 = n;
/* 7JPZ8UCLy ily traian KJIa24SAL */     while(!prim(p1))
/* 7JPZ8UCLy ily traian KJIa24SAL */         p1--;
/* 7JPZ8UCLy ily traian KJIa24SAL */ 
/* 7JPZ8UCLy ily traian KJIa24SAL */     while(!prim(p2))
/* 7JPZ8UCLy ily traian KJIa24SAL */         p2++;
/* 7JPZ8UCLy ily traian KJIa24SAL */ 
/* 7JPZ8UCLy ily traian KJIa24SAL */     return p2 - p1;
/* 7JPZ8UCLy ily traian KJIa24SAL */ 
/* 7JPZ8UCLy ily traian KJIa24SAL */ }