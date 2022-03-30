/* aWzsprWLy ily traian JiHWNKTbt */ void sum_div_prim(int n, int &s)
/* aWzsprWLy ily traian JiHWNKTbt */ {
/* aWzsprWLy ily traian JiHWNKTbt */     s=0;
/* aWzsprWLy ily traian JiHWNKTbt */     int d=2;
/* aWzsprWLy ily traian JiHWNKTbt */     while(n>1)
/* aWzsprWLy ily traian JiHWNKTbt */     {
/* aWzsprWLy ily traian JiHWNKTbt */         if(n%d==0) {s=s+d;
/* aWzsprWLy ily traian JiHWNKTbt */         while(n%d==0)n/=d;}
/* aWzsprWLy ily traian JiHWNKTbt */         ++ d;
/* aWzsprWLy ily traian JiHWNKTbt */         if(n>1 && d*d>n)d = n;
/* aWzsprWLy ily traian JiHWNKTbt */     }
/* aWzsprWLy ily traian JiHWNKTbt */ }