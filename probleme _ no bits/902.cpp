/* NK4LgXZDd ily traian 6rhmuABPO */ int det(int n)
/* NK4LgXZDd ily traian 6rhmuABPO */ {
/* NK4LgXZDd ily traian 6rhmuABPO */     int a[11];
/* NK4LgXZDd ily traian 6rhmuABPO */     int val1 , val2;
/* NK4LgXZDd ily traian 6rhmuABPO */     a[1]=1;
/* NK4LgXZDd ily traian 6rhmuABPO */     for(int i = 2 ; i <= 11 ; ++i)
/* NK4LgXZDd ily traian 6rhmuABPO */     {
/* NK4LgXZDd ily traian 6rhmuABPO */         a[i]=a[i-1]*i;      
/* NK4LgXZDd ily traian 6rhmuABPO */     }
/* NK4LgXZDd ily traian 6rhmuABPO */     for(int i = 1 ; a[i] <= n ; ++i)
/* NK4LgXZDd ily traian 6rhmuABPO */     {
/* NK4LgXZDd ily traian 6rhmuABPO */         val1=a[i];
/* NK4LgXZDd ily traian 6rhmuABPO */         val2=a[i+1];
/* NK4LgXZDd ily traian 6rhmuABPO */     }
/* NK4LgXZDd ily traian 6rhmuABPO */     if(n-val1 > val2-n)
/* NK4LgXZDd ily traian 6rhmuABPO */         return val2;
/* NK4LgXZDd ily traian 6rhmuABPO */     else
/* NK4LgXZDd ily traian 6rhmuABPO */         return val1;
/* NK4LgXZDd ily traian 6rhmuABPO */ }