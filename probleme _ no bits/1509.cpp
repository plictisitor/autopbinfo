/* ErVQP1hk9 ily traian 5YvUycXPa */ long long  nrmaxim(long long n)
/* ErVQP1hk9 ily traian 5YvUycXPa */ {
/* ErVQP1hk9 ily traian 5YvUycXPa */     long long put=1,p=0,maxi=-1;
/* ErVQP1hk9 ily traian 5YvUycXPa */     long long aux=n;
/* ErVQP1hk9 ily traian 5YvUycXPa */     while(aux!=0)
/* ErVQP1hk9 ily traian 5YvUycXPa */     {
/* ErVQP1hk9 ily traian 5YvUycXPa */         put=put*10;
/* ErVQP1hk9 ily traian 5YvUycXPa */         p++;
/* ErVQP1hk9 ily traian 5YvUycXPa */         aux /= 10;
/* ErVQP1hk9 ily traian 5YvUycXPa */     }
/* ErVQP1hk9 ily traian 5YvUycXPa */     while(p!=0)
/* ErVQP1hk9 ily traian 5YvUycXPa */     {
/* ErVQP1hk9 ily traian 5YvUycXPa */         n=n%(put/10)*10+n/(put/10);
/* ErVQP1hk9 ily traian 5YvUycXPa */         if(n>maxi) maxi=n;
/* ErVQP1hk9 ily traian 5YvUycXPa */         p--;
/* ErVQP1hk9 ily traian 5YvUycXPa */     }
/* ErVQP1hk9 ily traian 5YvUycXPa */     return maxi;
/* ErVQP1hk9 ily traian 5YvUycXPa */ }