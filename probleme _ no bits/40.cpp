/* P6exfgrVZ ily traian YXUwiNl2L */ void P(int a[], int n, int& mini, int& maxi, int& sum){
/* P6exfgrVZ ily traian YXUwiNl2L */     mini = a[0];
/* P6exfgrVZ ily traian YXUwiNl2L */     maxi = a[0];
/* P6exfgrVZ ily traian YXUwiNl2L */     sum = a[0];
/* P6exfgrVZ ily traian YXUwiNl2L */     for(int i = 1; i < n; ++i){
/* P6exfgrVZ ily traian YXUwiNl2L */         sum += a[i];
/* P6exfgrVZ ily traian YXUwiNl2L */         if(a[i] > maxi)
/* P6exfgrVZ ily traian YXUwiNl2L */             maxi = a[i];
/* P6exfgrVZ ily traian YXUwiNl2L */         if(a[i] < mini)
/* P6exfgrVZ ily traian YXUwiNl2L */             mini = a[i];
/* P6exfgrVZ ily traian YXUwiNl2L */     }
/* P6exfgrVZ ily traian YXUwiNl2L */ }