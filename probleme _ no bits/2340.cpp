/* SrgCeDmTI ily traian tRzvunKum */ int* sumaMinMax(int a[], int n){
/* SrgCeDmTI ily traian tRzvunKum */     int *v = new int [2];
/* SrgCeDmTI ily traian tRzvunKum */     int sum = 0;
/* SrgCeDmTI ily traian tRzvunKum */     int mini = 51;
/* SrgCeDmTI ily traian tRzvunKum */     int maxi = 0;
/* SrgCeDmTI ily traian tRzvunKum */     for(int i = 0; i < n; ++i){
/* SrgCeDmTI ily traian tRzvunKum */         sum += a[i];
/* SrgCeDmTI ily traian tRzvunKum */         if(a[i] > maxi)
/* SrgCeDmTI ily traian tRzvunKum */             maxi = a[i];
/* SrgCeDmTI ily traian tRzvunKum */         if(a[i] < mini)
/* SrgCeDmTI ily traian tRzvunKum */             mini = a[i];
/* SrgCeDmTI ily traian tRzvunKum */     }
/* SrgCeDmTI ily traian tRzvunKum */     v[0] = sum - maxi;
/* SrgCeDmTI ily traian tRzvunKum */     v[1] = sum - mini;
/* SrgCeDmTI ily traian tRzvunKum */     return v;
/* SrgCeDmTI ily traian tRzvunKum */ }