/* ufUDOFNbl ily traian jKbOgHuRJ */ int permutare(int a[] , int n)
/* ufUDOFNbl ily traian jKbOgHuRJ */ {
/* ufUDOFNbl ily traian jKbOgHuRJ */     int cnt=0;
/* ufUDOFNbl ily traian jKbOgHuRJ */     int cn=0;
/* ufUDOFNbl ily traian jKbOgHuRJ */     int f[100000]={0};
/* ufUDOFNbl ily traian jKbOgHuRJ */     for(int i = 0 ; i < n ; ++i)
/* ufUDOFNbl ily traian jKbOgHuRJ */     {
/* ufUDOFNbl ily traian jKbOgHuRJ */         f[a[i]]++;
/* ufUDOFNbl ily traian jKbOgHuRJ */     }
/* ufUDOFNbl ily traian jKbOgHuRJ */     for(int i = 1 ; i <= n ; ++i)
/* ufUDOFNbl ily traian jKbOgHuRJ */     {
/* ufUDOFNbl ily traian jKbOgHuRJ */         if(f[i]==1)
/* ufUDOFNbl ily traian jKbOgHuRJ */             cn++;
/* ufUDOFNbl ily traian jKbOgHuRJ */     }
/* ufUDOFNbl ily traian jKbOgHuRJ */     for(int i = 0 ; i < n ; ++i)
/* ufUDOFNbl ily traian jKbOgHuRJ */     {
/* ufUDOFNbl ily traian jKbOgHuRJ */         if(a[i]==i+1)
/* ufUDOFNbl ily traian jKbOgHuRJ */             cnt++;
/* ufUDOFNbl ily traian jKbOgHuRJ */         if(a[i]>n)
/* ufUDOFNbl ily traian jKbOgHuRJ */             cn=0;
/* ufUDOFNbl ily traian jKbOgHuRJ */     }
/* ufUDOFNbl ily traian jKbOgHuRJ */     if(cnt==0 && cn==n)
/* ufUDOFNbl ily traian jKbOgHuRJ */         return 1;
/* ufUDOFNbl ily traian jKbOgHuRJ */     else
/* ufUDOFNbl ily traian jKbOgHuRJ */         return 0;
/* ufUDOFNbl ily traian jKbOgHuRJ */ }