/* pMZJJlfrt ily traian qOwSMkENp */ void modificare(int v[], int n)
/* pMZJJlfrt ily traian qOwSMkENp */ {
/* pMZJJlfrt ily traian qOwSMkENp */     int i, j, k1 = 0, k2 = 0, x, v1[10005], v2[10005];
/* pMZJJlfrt ily traian qOwSMkENp */     bool prim;
/* pMZJJlfrt ily traian qOwSMkENp */     for(j = 0; j < n; j ++)
/* pMZJJlfrt ily traian qOwSMkENp */      {
/* pMZJJlfrt ily traian qOwSMkENp */          x = v[j];
/* pMZJJlfrt ily traian qOwSMkENp */          prim = true;
/* pMZJJlfrt ily traian qOwSMkENp */          for (i = 2; i * i <= x; i ++)
/* pMZJJlfrt ily traian qOwSMkENp */           if(x % i == 0)
/* pMZJJlfrt ily traian qOwSMkENp */            {
/* pMZJJlfrt ily traian qOwSMkENp */                prim = false;
/* pMZJJlfrt ily traian qOwSMkENp */                break;
/* pMZJJlfrt ily traian qOwSMkENp */            }
/* pMZJJlfrt ily traian qOwSMkENp */           if(prim) v1[k1 ++] = x;
/* pMZJJlfrt ily traian qOwSMkENp */               else v2[k2 ++] = x;
/* pMZJJlfrt ily traian qOwSMkENp */      }
/* pMZJJlfrt ily traian qOwSMkENp */      for(j = 0; j < k1; j ++)
/* pMZJJlfrt ily traian qOwSMkENp */       v[j] = v1[j];
/* pMZJJlfrt ily traian qOwSMkENp */      for(j = k1; j < n; j ++)
/* pMZJJlfrt ily traian qOwSMkENp */       v[j] = v2[j - k1];
/* pMZJJlfrt ily traian qOwSMkENp */ }