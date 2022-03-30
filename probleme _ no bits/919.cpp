/* EfZw3YgLp ily traian 03TZO7Ael */ void nr_cif_zero(int a,int& nr)
/* EfZw3YgLp ily traian 03TZO7Ael */ {
/* EfZw3YgLp ily traian 03TZO7Ael */     int cnt=0;
/* EfZw3YgLp ily traian 03TZO7Ael */     if (a==0)
/* EfZw3YgLp ily traian 03TZO7Ael */         cnt++;
/* EfZw3YgLp ily traian 03TZO7Ael */     while (a)
/* EfZw3YgLp ily traian 03TZO7Ael */     {
/* EfZw3YgLp ily traian 03TZO7Ael */     if (a%10==0)
/* EfZw3YgLp ily traian 03TZO7Ael */     cnt++;
/* EfZw3YgLp ily traian 03TZO7Ael */     a/=10;
/* EfZw3YgLp ily traian 03TZO7Ael */     }
/* EfZw3YgLp ily traian 03TZO7Ael */     nr=cnt;
/* EfZw3YgLp ily traian 03TZO7Ael */ }