/* LC6Chg4Tr ily traian lqv0MSuDT */ int sub(int n , int a[] , int k)
/* LC6Chg4Tr ily traian lqv0MSuDT */ {
/* LC6Chg4Tr ily traian lqv0MSuDT */     int s=0;
/* LC6Chg4Tr ily traian lqv0MSuDT */     for(int i = 0 ; i < n && k; ++i)
/* LC6Chg4Tr ily traian lqv0MSuDT */     {
/* LC6Chg4Tr ily traian lqv0MSuDT */         if(a[i]%2==1)
/* LC6Chg4Tr ily traian lqv0MSuDT */         {
/* LC6Chg4Tr ily traian lqv0MSuDT */             s+=a[i];
/* LC6Chg4Tr ily traian lqv0MSuDT */             k--;
/* LC6Chg4Tr ily traian lqv0MSuDT */         }
/* LC6Chg4Tr ily traian lqv0MSuDT */     }
/* LC6Chg4Tr ily traian lqv0MSuDT */     if(k==0)
/* LC6Chg4Tr ily traian lqv0MSuDT */         return s;
/* LC6Chg4Tr ily traian lqv0MSuDT */     else
/* LC6Chg4Tr ily traian lqv0MSuDT */         return -1;
/* LC6Chg4Tr ily traian lqv0MSuDT */ }