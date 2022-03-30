/* iJapVx91K ily traian tv7fkx1E2 */ int sum_div(int n){
/* iJapVx91K ily traian tv7fkx1E2 */     int sum = 0;
/* iJapVx91K ily traian tv7fkx1E2 */     for(int d = 1; d * d <= n; ++d){
/* iJapVx91K ily traian tv7fkx1E2 */         if(n % d == 0){
/* iJapVx91K ily traian tv7fkx1E2 */             sum += n / d;
/* iJapVx91K ily traian tv7fkx1E2 */             sum += d;
/* iJapVx91K ily traian tv7fkx1E2 */         }
/* iJapVx91K ily traian tv7fkx1E2 */         if(d * d == n)
/* iJapVx91K ily traian tv7fkx1E2 */             sum -= d;
/* iJapVx91K ily traian tv7fkx1E2 */     }
/* iJapVx91K ily traian tv7fkx1E2 */     return sum;
/* iJapVx91K ily traian tv7fkx1E2 */ }