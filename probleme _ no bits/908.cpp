/* aiPrK8Ov9 ily traian tvTBXkZi7 */ bool prim(int n){
/* aiPrK8Ov9 ily traian tvTBXkZi7 */     int d = 2, cnt = 1;
/* aiPrK8Ov9 ily traian tvTBXkZi7 */     while(n > 1){
/* aiPrK8Ov9 ily traian tvTBXkZi7 */         int p = 0;
/* aiPrK8Ov9 ily traian tvTBXkZi7 */         while(n % d == 0)
/* aiPrK8Ov9 ily traian tvTBXkZi7 */             n /= d, p++;
/* aiPrK8Ov9 ily traian tvTBXkZi7 */         cnt *= (p + 1);
/* aiPrK8Ov9 ily traian tvTBXkZi7 */         d++;
/* aiPrK8Ov9 ily traian tvTBXkZi7 */         if(d * d > n)
/* aiPrK8Ov9 ily traian tvTBXkZi7 */             d = n;
/* aiPrK8Ov9 ily traian tvTBXkZi7 */     }
/* aiPrK8Ov9 ily traian tvTBXkZi7 */     return cnt == 2;
/* aiPrK8Ov9 ily traian tvTBXkZi7 */ }
/* aiPrK8Ov9 ily traian tvTBXkZi7 */ 
/* aiPrK8Ov9 ily traian tvTBXkZi7 */ void afisare(int a, int b){
/* aiPrK8Ov9 ily traian tvTBXkZi7 */     if(a > b)
/* aiPrK8Ov9 ily traian tvTBXkZi7 */         swap(a, b);
/* aiPrK8Ov9 ily traian tvTBXkZi7 */     for(int i = a; i <= b; ++i)
/* aiPrK8Ov9 ily traian tvTBXkZi7 */         if(prim(i))
/* aiPrK8Ov9 ily traian tvTBXkZi7 */             cout << i << ' ';
/* aiPrK8Ov9 ily traian tvTBXkZi7 */ }