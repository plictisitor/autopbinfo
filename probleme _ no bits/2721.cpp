/* MlCGcaHon ily traian CmDNTl1OF */ void Insert(int a[], int &n){
/* MlCGcaHon ily traian CmDNTl1OF */     int cnt = 0;
/* MlCGcaHon ily traian CmDNTl1OF */     for(int i = 0; i < n; ++i)
/* MlCGcaHon ily traian CmDNTl1OF */         if(a[i] % 2 == 1)
/* MlCGcaHon ily traian CmDNTl1OF */             cnt++;
/* MlCGcaHon ily traian CmDNTl1OF */ 
/* MlCGcaHon ily traian CmDNTl1OF */     for(int i = n + cnt - 1, j = n - 1; i >= 0, j >= 0; --i, --j){
/* MlCGcaHon ily traian CmDNTl1OF */         if(a[j] % 2 == 1){
/* MlCGcaHon ily traian CmDNTl1OF */             a[i] = a[j] * 2;
/* MlCGcaHon ily traian CmDNTl1OF */             a[i-1] = a[j];
/* MlCGcaHon ily traian CmDNTl1OF */             i--;
/* MlCGcaHon ily traian CmDNTl1OF */         }
/* MlCGcaHon ily traian CmDNTl1OF */         else
/* MlCGcaHon ily traian CmDNTl1OF */             a[i] = a[j];
/* MlCGcaHon ily traian CmDNTl1OF */     }
/* MlCGcaHon ily traian CmDNTl1OF */     /*
/* MlCGcaHon ily traian CmDNTl1OF */         5
/* MlCGcaHon ily traian CmDNTl1OF */         1 2 3 4 5
/* MlCGcaHon ily traian CmDNTl1OF */         cnt = 3;
/* MlCGcaHon ily traian CmDNTl1OF */         i = 8, j = 5;
/* MlCGcaHon ily traian CmDNTl1OF */         daca a[j] este impar -> 5 10 i--;
/* MlCGcaHon ily traian CmDNTl1OF */         i--, j--;
/* MlCGcaHon ily traian CmDNTl1OF */         i = 6, j = 4;
/* MlCGcaHon ily traian CmDNTl1OF */         daca a[j] este par -> il pun pe 4 normal in sir, la pozitia i = 6;
/* MlCGcaHon ily traian CmDNTl1OF */         i--, j--;
/* MlCGcaHon ily traian CmDNTl1OF */         i = 5, j = 3;
/* MlCGcaHon ily traian CmDNTl1OF */         daca a[j] este impar -> 3 6 i--;
/* MlCGcaHon ily traian CmDNTl1OF */         i--, j--; 1 2 3 3 6 4 5 10
/* MlCGcaHon ily traian CmDNTl1OF */         i = 3, j = 2;
/* MlCGcaHon ily traian CmDNTl1OF */         daca a[j] este par -> il pun pe 2 normal in sir, la pozitia i = 3;
/* MlCGcaHon ily traian CmDNTl1OF */         i--, j--;
/* MlCGcaHon ily traian CmDNTl1OF */         i = 2, j = 1;
/* MlCGcaHon ily traian CmDNTl1OF */         daca a[j] este impar -> 1 2 i--;
/* MlCGcaHon ily traian CmDNTl1OF */         i--, j--;
/* MlCGcaHon ily traian CmDNTl1OF */         i = j = 0;
/* MlCGcaHon ily traian CmDNTl1OF */         1 2 2 3 6 4 5 10
/* MlCGcaHon ily traian CmDNTl1OF */     */
/* MlCGcaHon ily traian CmDNTl1OF */ 
/* MlCGcaHon ily traian CmDNTl1OF */     n += cnt;
/* MlCGcaHon ily traian CmDNTl1OF */ 
/* MlCGcaHon ily traian CmDNTl1OF */ }