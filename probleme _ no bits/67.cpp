/* svxWKgLqH ily traian Ty9b1YKP7 */ bool prim(int n){
/* svxWKgLqH ily traian Ty9b1YKP7 */     int d = 2, cnt = 1;
/* svxWKgLqH ily traian Ty9b1YKP7 */     while(n > 1){
/* svxWKgLqH ily traian Ty9b1YKP7 */         int p = 0;
/* svxWKgLqH ily traian Ty9b1YKP7 */         while(n % d == 0)
/* svxWKgLqH ily traian Ty9b1YKP7 */             n/=d, p++;
/* svxWKgLqH ily traian Ty9b1YKP7 */         d++;
/* svxWKgLqH ily traian Ty9b1YKP7 */         cnt *= (p + 1);
/* svxWKgLqH ily traian Ty9b1YKP7 */         if(d * d > n)
/* svxWKgLqH ily traian Ty9b1YKP7 */             d = n;
/* svxWKgLqH ily traian Ty9b1YKP7 */     }
/* svxWKgLqH ily traian Ty9b1YKP7 */     return cnt == 2;
/* svxWKgLqH ily traian Ty9b1YKP7 */ }
/* svxWKgLqH ily traian Ty9b1YKP7 */ 
/* svxWKgLqH ily traian Ty9b1YKP7 */ bool a_prim(int n){
/* svxWKgLqH ily traian Ty9b1YKP7 */     int cnt = 0;
/* svxWKgLqH ily traian Ty9b1YKP7 */     for(int d = 2; d * d <= n; ++d){
/* svxWKgLqH ily traian Ty9b1YKP7 */         if(n % d == 0)
/* svxWKgLqH ily traian Ty9b1YKP7 */             cnt+=2;
/* svxWKgLqH ily traian Ty9b1YKP7 */         if(d * d == n)
/* svxWKgLqH ily traian Ty9b1YKP7 */             cnt--;
/* svxWKgLqH ily traian Ty9b1YKP7 */     }
/* svxWKgLqH ily traian Ty9b1YKP7 */     if(cnt == 2){
/* svxWKgLqH ily traian Ty9b1YKP7 */         int a, b;
/* svxWKgLqH ily traian Ty9b1YKP7 */         for(int d = 2; d * d <= n; ++d)
/* svxWKgLqH ily traian Ty9b1YKP7 */             if(n % d == 0)
/* svxWKgLqH ily traian Ty9b1YKP7 */                 a = d, b = n / d;
/* svxWKgLqH ily traian Ty9b1YKP7 */         if(prim(a) && prim(b))
/* svxWKgLqH ily traian Ty9b1YKP7 */             return 1;
/* svxWKgLqH ily traian Ty9b1YKP7 */     }
/* svxWKgLqH ily traian Ty9b1YKP7 */     return 0;
/* svxWKgLqH ily traian Ty9b1YKP7 */ }