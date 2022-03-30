/* YyIpr8jdy ily traian yGRoYQiEi */ void sterge(int a[], int& n, int i, int j){
/* YyIpr8jdy ily traian yGRoYQiEi */     int cnt = j - i + 1;
/* YyIpr8jdy ily traian yGRoYQiEi */ 
/* YyIpr8jdy ily traian yGRoYQiEi */     for(int l = j + 1; l <= n; ++l)
/* YyIpr8jdy ily traian yGRoYQiEi */         a[l - cnt] = a[l];
/* YyIpr8jdy ily traian yGRoYQiEi */ 
/* YyIpr8jdy ily traian yGRoYQiEi */     n-=cnt;
/* YyIpr8jdy ily traian yGRoYQiEi */ }