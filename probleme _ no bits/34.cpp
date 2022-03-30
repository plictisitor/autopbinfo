/* UzM25zDbj ily traian J5M2Q366R */ int interval(int a[], int n){
/* UzM25zDbj ily traian J5M2Q366R */     int mini = a[0];
/* UzM25zDbj ily traian J5M2Q366R */     int maxi = a[n-1];
/* UzM25zDbj ily traian J5M2Q366R */     if(mini > maxi)
/* UzM25zDbj ily traian J5M2Q366R */         swap(mini, maxi);
/* UzM25zDbj ily traian J5M2Q366R */     int cnt = 0;
/* UzM25zDbj ily traian J5M2Q366R */     for(int i = 0; i < n; ++i)
/* UzM25zDbj ily traian J5M2Q366R */         if(a[i] >= mini && a[i] <= maxi)
/* UzM25zDbj ily traian J5M2Q366R */             cnt++;
/* UzM25zDbj ily traian J5M2Q366R */     return cnt;
/* UzM25zDbj ily traian J5M2Q366R */ }