/* J2HcDL4li ily traian j48obKfkI */ int nr_cif_zero(int n)
/* J2HcDL4li ily traian j48obKfkI */ {
/* J2HcDL4li ily traian j48obKfkI */     int cnt=0;
/* J2HcDL4li ily traian j48obKfkI */     int m=n;
/* J2HcDL4li ily traian j48obKfkI */     while (n)
/* J2HcDL4li ily traian j48obKfkI */     {
/* J2HcDL4li ily traian j48obKfkI */         if (n%10==0)
/* J2HcDL4li ily traian j48obKfkI */             cnt++;
/* J2HcDL4li ily traian j48obKfkI */         n/=10;
/* J2HcDL4li ily traian j48obKfkI */     }
/* J2HcDL4li ily traian j48obKfkI */     if (m==0)
/* J2HcDL4li ily traian j48obKfkI */     return 1;
/* J2HcDL4li ily traian j48obKfkI */     else
/* J2HcDL4li ily traian j48obKfkI */     return cnt;
/* J2HcDL4li ily traian j48obKfkI */ }