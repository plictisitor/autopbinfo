/* YHlhs4Dxd ily traian tLaEoMFaD */ int nr_sa(int a[][100], int n, int m){
/* YHlhs4Dxd ily traian tLaEoMFaD */     int minlin[100], maxlin[100], mincol[100], maxcol[100];
/* YHlhs4Dxd ily traian tLaEoMFaD */     for(int i = 0; i < n; ++i){
/* YHlhs4Dxd ily traian tLaEoMFaD */         int mini = 2000000001;
/* YHlhs4Dxd ily traian tLaEoMFaD */         int maxi = 0;
/* YHlhs4Dxd ily traian tLaEoMFaD */         for(int j = 0; j < m; ++j){
/* YHlhs4Dxd ily traian tLaEoMFaD */             if(a[i][j] < mini)
/* YHlhs4Dxd ily traian tLaEoMFaD */                 mini = a[i][j];
/* YHlhs4Dxd ily traian tLaEoMFaD */             if(a[i][j] > maxi)
/* YHlhs4Dxd ily traian tLaEoMFaD */                 maxi = a[i][j];
/* YHlhs4Dxd ily traian tLaEoMFaD */         }
/* YHlhs4Dxd ily traian tLaEoMFaD */         minlin[i] = mini;
/* YHlhs4Dxd ily traian tLaEoMFaD */         maxlin[i] = maxi;
/* YHlhs4Dxd ily traian tLaEoMFaD */     }
/* YHlhs4Dxd ily traian tLaEoMFaD */     for(int j = 0; j < m; ++j){
/* YHlhs4Dxd ily traian tLaEoMFaD */         int mini = 2000000001;
/* YHlhs4Dxd ily traian tLaEoMFaD */         int maxi = 0;
/* YHlhs4Dxd ily traian tLaEoMFaD */         for(int i = 0; i < n; ++i){
/* YHlhs4Dxd ily traian tLaEoMFaD */             if(a[i][j] < mini)
/* YHlhs4Dxd ily traian tLaEoMFaD */                 mini = a[i][j];
/* YHlhs4Dxd ily traian tLaEoMFaD */             if(a[i][j] > maxi)
/* YHlhs4Dxd ily traian tLaEoMFaD */                 maxi = a[i][j];
/* YHlhs4Dxd ily traian tLaEoMFaD */         }
/* YHlhs4Dxd ily traian tLaEoMFaD */         maxcol[j] = maxi;
/* YHlhs4Dxd ily traian tLaEoMFaD */         mincol[j] = mini;
/* YHlhs4Dxd ily traian tLaEoMFaD */     }
/* YHlhs4Dxd ily traian tLaEoMFaD */     int cnt = 0;
/* YHlhs4Dxd ily traian tLaEoMFaD */     for(int i = 0; i < n; ++i)
/* YHlhs4Dxd ily traian tLaEoMFaD */         for(int j = 0; j < m; ++j)
/* YHlhs4Dxd ily traian tLaEoMFaD */             if((a[i][j] == maxlin[i] && a[i][j] == mincol[j]) ||
/* YHlhs4Dxd ily traian tLaEoMFaD */                (a[i][j] == minlin[i] && a[i][j] == maxcol[j]))
/* YHlhs4Dxd ily traian tLaEoMFaD */                 cnt++;
/* YHlhs4Dxd ily traian tLaEoMFaD */     return cnt;
/* YHlhs4Dxd ily traian tLaEoMFaD */ }