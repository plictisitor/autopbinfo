/* 2rOUy1gLj ily traian mT4xpHzhj */ int count(double a[], int n){
/* 2rOUy1gLj ily traian mT4xpHzhj */     double sum = 0;
/* 2rOUy1gLj ily traian mT4xpHzhj */     for(int i = 0; i < n; ++i)
/* 2rOUy1gLj ily traian mT4xpHzhj */         sum+=a[i];
/* 2rOUy1gLj ily traian mT4xpHzhj */     sum = (double)sum / n;
/* 2rOUy1gLj ily traian mT4xpHzhj */     int cnt = 0;
/* 2rOUy1gLj ily traian mT4xpHzhj */     for(int i = 0; i < n; ++i)
/* 2rOUy1gLj ily traian mT4xpHzhj */         if(a[i] >= sum)
/* 2rOUy1gLj ily traian mT4xpHzhj */             cnt++;
/* 2rOUy1gLj ily traian mT4xpHzhj */     return cnt;
/* 2rOUy1gLj ily traian mT4xpHzhj */ }