/* nuo72M4mG ily traian zoAXr2q81 */ void ordon123(int n , int a[])
/* nuo72M4mG ily traian zoAXr2q81 */ {
/* nuo72M4mG ily traian zoAXr2q81 */     int cnt1=0 , cnt2=0 , cnt3=0;
/* nuo72M4mG ily traian zoAXr2q81 */     for(int i = 0 ; i < n ; ++i)
/* nuo72M4mG ily traian zoAXr2q81 */     {
/* nuo72M4mG ily traian zoAXr2q81 */         if(a[i]==1)
/* nuo72M4mG ily traian zoAXr2q81 */             cnt1++;
/* nuo72M4mG ily traian zoAXr2q81 */         if(a[i]==2)
/* nuo72M4mG ily traian zoAXr2q81 */             cnt2++;
/* nuo72M4mG ily traian zoAXr2q81 */         else
/* nuo72M4mG ily traian zoAXr2q81 */             cnt3++;
/* nuo72M4mG ily traian zoAXr2q81 */     }
/* nuo72M4mG ily traian zoAXr2q81 */     for(int i = 0 ; i < cnt1 ; ++i)
/* nuo72M4mG ily traian zoAXr2q81 */         a[i]=1;
/* nuo72M4mG ily traian zoAXr2q81 */     for(int i = cnt1 ; i < cnt1+cnt2 ; ++i)
/* nuo72M4mG ily traian zoAXr2q81 */         a[i]=2;
/* nuo72M4mG ily traian zoAXr2q81 */     for(int i = cnt1+cnt2 ; i < n ; ++i)
/* nuo72M4mG ily traian zoAXr2q81 */         a[i]=3;
/* nuo72M4mG ily traian zoAXr2q81 */ }