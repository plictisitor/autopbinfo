/* KlumTNXgi ily traian UyVJTQM21 */ int cifreImpare(int n)
/* KlumTNXgi ily traian UyVJTQM21 */ {
/* KlumTNXgi ily traian UyVJTQM21 */     int a[11] , p = 1;
/* KlumTNXgi ily traian UyVJTQM21 */     int cn = n;
/* KlumTNXgi ily traian UyVJTQM21 */     while(n)
/* KlumTNXgi ily traian UyVJTQM21 */     {
/* KlumTNXgi ily traian UyVJTQM21 */         a[p]=n%10;
/* KlumTNXgi ily traian UyVJTQM21 */         n/=10;
/* KlumTNXgi ily traian UyVJTQM21 */         p++;
/* KlumTNXgi ily traian UyVJTQM21 */     }
/* KlumTNXgi ily traian UyVJTQM21 */     p--;
/* KlumTNXgi ily traian UyVJTQM21 */     int nr = 0;
/* KlumTNXgi ily traian UyVJTQM21 */     for(int i = p ; i >= 1 ; --i)
/* KlumTNXgi ily traian UyVJTQM21 */         if(a[i]%2==0)
/* KlumTNXgi ily traian UyVJTQM21 */         nr = nr * 10 + a[i];
/* KlumTNXgi ily traian UyVJTQM21 */     if(nr == 0 || nr == cn)
/* KlumTNXgi ily traian UyVJTQM21 */         return -1;
/* KlumTNXgi ily traian UyVJTQM21 */     return nr;
/* KlumTNXgi ily traian UyVJTQM21 */ }