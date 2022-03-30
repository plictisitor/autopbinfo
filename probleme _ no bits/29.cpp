/* IzZgjsaav ily traian h0lEK2Xj6 */ bool prim(int n){
/* IzZgjsaav ily traian h0lEK2Xj6 */     int d = 2, cnt = 1;
/* IzZgjsaav ily traian h0lEK2Xj6 */     while(n > 1){
/* IzZgjsaav ily traian h0lEK2Xj6 */         int p = 0;
/* IzZgjsaav ily traian h0lEK2Xj6 */         while(n % d == 0)
/* IzZgjsaav ily traian h0lEK2Xj6 */             n /= d, p++;
/* IzZgjsaav ily traian h0lEK2Xj6 */         cnt *= (p + 1);
/* IzZgjsaav ily traian h0lEK2Xj6 */         d++;
/* IzZgjsaav ily traian h0lEK2Xj6 */         if(d * d > n)
/* IzZgjsaav ily traian h0lEK2Xj6 */             d = n;
/* IzZgjsaav ily traian h0lEK2Xj6 */     }
/* IzZgjsaav ily traian h0lEK2Xj6 */     return cnt == 2;
/* IzZgjsaav ily traian h0lEK2Xj6 */ }
/* IzZgjsaav ily traian h0lEK2Xj6 */ 
/* IzZgjsaav ily traian h0lEK2Xj6 */ void sub(int n, int& a, int& b){
/* IzZgjsaav ily traian h0lEK2Xj6 */     a = -1, b = -1;
/* IzZgjsaav ily traian h0lEK2Xj6 */     n--;
/* IzZgjsaav ily traian h0lEK2Xj6 */     while(!prim(n))
/* IzZgjsaav ily traian h0lEK2Xj6 */         n--;
/* IzZgjsaav ily traian h0lEK2Xj6 */     a = n;
/* IzZgjsaav ily traian h0lEK2Xj6 */     n--;
/* IzZgjsaav ily traian h0lEK2Xj6 */     while(!prim(n))
/* IzZgjsaav ily traian h0lEK2Xj6 */         n--;
/* IzZgjsaav ily traian h0lEK2Xj6 */     b = n;
/* IzZgjsaav ily traian h0lEK2Xj6 */ }