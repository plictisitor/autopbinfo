/* Tp7HNHoyl ily traian fOajoOntv */ void shift(int a[] , int n)
/* Tp7HNHoyl ily traian fOajoOntv */ {
/* Tp7HNHoyl ily traian fOajoOntv */     int b=a[0];
/* Tp7HNHoyl ily traian fOajoOntv */     for(int i = 1 ; i < n ; ++i)
/* Tp7HNHoyl ily traian fOajoOntv */     {
/* Tp7HNHoyl ily traian fOajoOntv */         a[i-1]=a[i];
/* Tp7HNHoyl ily traian fOajoOntv */     }
/* Tp7HNHoyl ily traian fOajoOntv */     a[n-1]=b;
/* Tp7HNHoyl ily traian fOajoOntv */ }