/* 8tck4enJ0 ily traian gk1Flwe3x */ int UCP(int n){
/* 8tck4enJ0 ily traian gk1Flwe3x */     if(n == 0)
/* 8tck4enJ0 ily traian gk1Flwe3x */         return 0;
/* 8tck4enJ0 ily traian gk1Flwe3x */     while(n){
/* 8tck4enJ0 ily traian gk1Flwe3x */         int c = n % 10;
/* 8tck4enJ0 ily traian gk1Flwe3x */         if(c % 2 == 0)
/* 8tck4enJ0 ily traian gk1Flwe3x */             return c;
/* 8tck4enJ0 ily traian gk1Flwe3x */         n/=10;
/* 8tck4enJ0 ily traian gk1Flwe3x */     }
/* 8tck4enJ0 ily traian gk1Flwe3x */     return -1;
/* 8tck4enJ0 ily traian gk1Flwe3x */ }