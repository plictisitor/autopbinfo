/* bRkiMaPvY ily traian J4DgP30m6 */ int nr_div_imp(int n , int& cnt)
/* bRkiMaPvY ily traian J4DgP30m6 */ {
/* bRkiMaPvY ily traian J4DgP30m6 */     cnt=0;
/* bRkiMaPvY ily traian J4DgP30m6 */     for(int i = 1 ; i * i <= n ; ++i)
/* bRkiMaPvY ily traian J4DgP30m6 */     {
/* bRkiMaPvY ily traian J4DgP30m6 */         if(n%i==0)
/* bRkiMaPvY ily traian J4DgP30m6 */         {
/* bRkiMaPvY ily traian J4DgP30m6 */             if(i%2==1)
/* bRkiMaPvY ily traian J4DgP30m6 */                 cnt++;
/* bRkiMaPvY ily traian J4DgP30m6 */             if((n/i)%2==1)
/* bRkiMaPvY ily traian J4DgP30m6 */                 cnt++;
/* bRkiMaPvY ily traian J4DgP30m6 */         }
/* bRkiMaPvY ily traian J4DgP30m6 */         if(i*i==n && i%2==1)
/* bRkiMaPvY ily traian J4DgP30m6 */             cnt--;
/* bRkiMaPvY ily traian J4DgP30m6 */     }
/* bRkiMaPvY ily traian J4DgP30m6 */ }