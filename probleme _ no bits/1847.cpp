/* bOhDImX32 ily traian dE9Gz3kzX */ int P(int x[] , int n , int& sum)
/* bOhDImX32 ily traian dE9Gz3kzX */ {
/* bOhDImX32 ily traian dE9Gz3kzX */     sum=0;
/* bOhDImX32 ily traian dE9Gz3kzX */     for(int i = 0 ; i < n ; ++i)
/* bOhDImX32 ily traian dE9Gz3kzX */     {
/* bOhDImX32 ily traian dE9Gz3kzX */         int cnt=1;
/* bOhDImX32 ily traian dE9Gz3kzX */         int d=2;
/* bOhDImX32 ily traian dE9Gz3kzX */         int c=x[i];
/* bOhDImX32 ily traian dE9Gz3kzX */         while(x[i]>1)
/* bOhDImX32 ily traian dE9Gz3kzX */         {
/* bOhDImX32 ily traian dE9Gz3kzX */             int p = 0;
/* bOhDImX32 ily traian dE9Gz3kzX */             while(x[i]%d==0)
/* bOhDImX32 ily traian dE9Gz3kzX */                 x[i]/=d , p++;
/* bOhDImX32 ily traian dE9Gz3kzX */             if(p>0)
/* bOhDImX32 ily traian dE9Gz3kzX */                 cnt*=(p+1);
/* bOhDImX32 ily traian dE9Gz3kzX */             d++;
/* bOhDImX32 ily traian dE9Gz3kzX */             if(d*d>x[i])
/* bOhDImX32 ily traian dE9Gz3kzX */                 d=x[i];
/* bOhDImX32 ily traian dE9Gz3kzX */         }
/* bOhDImX32 ily traian dE9Gz3kzX */         if(cnt==2)
/* bOhDImX32 ily traian dE9Gz3kzX */             sum+=c;
/* bOhDImX32 ily traian dE9Gz3kzX */     }
/* bOhDImX32 ily traian dE9Gz3kzX */ }