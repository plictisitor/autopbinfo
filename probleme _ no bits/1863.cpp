/* wlAiM1lWw ily traian 3Kt8C74XL */ int numarare(int v[100], int n)
/* wlAiM1lWw ily traian 3Kt8C74XL */ {
/* wlAiM1lWw ily traian 3Kt8C74XL */     int cnt=0;
/* wlAiM1lWw ily traian 3Kt8C74XL */     for (int i = 0; i < n; ++i)
/* wlAiM1lWw ily traian 3Kt8C74XL */     {
/* wlAiM1lWw ily traian 3Kt8C74XL */         cin >> v[i];
/* wlAiM1lWw ily traian 3Kt8C74XL */         if (v[i]==v[i-1])
/* wlAiM1lWw ily traian 3Kt8C74XL */         cnt++;
/* wlAiM1lWw ily traian 3Kt8C74XL */     }
/* wlAiM1lWw ily traian 3Kt8C74XL */     return cnt;
/* wlAiM1lWw ily traian 3Kt8C74XL */ }