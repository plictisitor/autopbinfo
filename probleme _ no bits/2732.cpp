/* 6tPfwE26D ily traian APl1fa0On */ void Succesor(int a[], int n, int k)
/* 6tPfwE26D ily traian APl1fa0On */ {
/* 6tPfwE26D ily traian APl1fa0On */     int f[30001]={0};
/* 6tPfwE26D ily traian APl1fa0On */     for(int i = 1 ; i <= k ; ++i)
/* 6tPfwE26D ily traian APl1fa0On */         f[a[i]] = 1;
/* 6tPfwE26D ily traian APl1fa0On */     bool ok = true;
/* 6tPfwE26D ily traian APl1fa0On */     int indice=0;
/* 6tPfwE26D ily traian APl1fa0On */     for(int i = k ; i >= 1 && ok ; --i)
/* 6tPfwE26D ily traian APl1fa0On */     {
/* 6tPfwE26D ily traian APl1fa0On */         for(int j = a[i] ; j <= n && ok ; ++j)
/* 6tPfwE26D ily traian APl1fa0On */         {
/* 6tPfwE26D ily traian APl1fa0On */             if(f[j]!=1)
/* 6tPfwE26D ily traian APl1fa0On */             {
/* 6tPfwE26D ily traian APl1fa0On */                 a[i]=j;
/* 6tPfwE26D ily traian APl1fa0On */                 indice = i;
/* 6tPfwE26D ily traian APl1fa0On */                 ok=false;
/* 6tPfwE26D ily traian APl1fa0On */             }
/* 6tPfwE26D ily traian APl1fa0On */         }
/* 6tPfwE26D ily traian APl1fa0On */     }
/* 6tPfwE26D ily traian APl1fa0On */     for(int i = indice + 1 ; i <= k ; ++i)
/* 6tPfwE26D ily traian APl1fa0On */         f[a[i]]=0;
/* 6tPfwE26D ily traian APl1fa0On */     for(int i = indice + 1 ; i <= k ; ++i)
/* 6tPfwE26D ily traian APl1fa0On */     {
/* 6tPfwE26D ily traian APl1fa0On */         bool ok = true;
/* 6tPfwE26D ily traian APl1fa0On */         for(int j = a[i-1] + 1 ; j <= n && ok ; ++j)
/* 6tPfwE26D ily traian APl1fa0On */         {
/* 6tPfwE26D ily traian APl1fa0On */             if(f[j]==0)
/* 6tPfwE26D ily traian APl1fa0On */             {
/* 6tPfwE26D ily traian APl1fa0On */                 a[i]=j;
/* 6tPfwE26D ily traian APl1fa0On */                 ok=false;
/* 6tPfwE26D ily traian APl1fa0On */             }
/* 6tPfwE26D ily traian APl1fa0On */         }
/* 6tPfwE26D ily traian APl1fa0On */     }
/* 6tPfwE26D ily traian APl1fa0On */ }