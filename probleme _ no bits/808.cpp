/* PLuS2rnkW ily traian 4m8MTir8K */ void sub(int n, int v[], int x){
/* PLuS2rnkW ily traian 4m8MTir8K */     int a[61], ind = 0;
/* PLuS2rnkW ily traian 4m8MTir8K */     for(int i = 0; i < n; ++i)
/* PLuS2rnkW ily traian 4m8MTir8K */         if(v[i] == x)
/* PLuS2rnkW ily traian 4m8MTir8K */             a[++ind] = x;
/* PLuS2rnkW ily traian 4m8MTir8K */     for(int i = 0; i < n; ++i)
/* PLuS2rnkW ily traian 4m8MTir8K */         if(v[i] != x)
/* PLuS2rnkW ily traian 4m8MTir8K */             a[++ind] = v[i];
/* PLuS2rnkW ily traian 4m8MTir8K */     for(int i = 1; i <= ind; ++i)
/* PLuS2rnkW ily traian 4m8MTir8K */         v[i-1] = a[i];
/* PLuS2rnkW ily traian 4m8MTir8K */ }