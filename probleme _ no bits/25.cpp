/* cva31T5MD ily traian zGf9KMqti */ int cmmnr(int n){
/* cva31T5MD ily traian zGf9KMqti */ 
/* cva31T5MD ily traian zGf9KMqti */     int a[11], ind = 0;
/* cva31T5MD ily traian zGf9KMqti */     while(n){
/* cva31T5MD ily traian zGf9KMqti */         a[++ind] = n % 10;
/* cva31T5MD ily traian zGf9KMqti */         n/=10;
/* cva31T5MD ily traian zGf9KMqti */     }
/* cva31T5MD ily traian zGf9KMqti */ 
/* cva31T5MD ily traian zGf9KMqti */     for(int i = 1; i < ind; ++i)
/* cva31T5MD ily traian zGf9KMqti */         for(int j = i + 1; j <= ind; ++j)
/* cva31T5MD ily traian zGf9KMqti */             if(a[i] < a[j])
/* cva31T5MD ily traian zGf9KMqti */                 swap(a[i], a[j]);
/* cva31T5MD ily traian zGf9KMqti */ 
/* cva31T5MD ily traian zGf9KMqti */     for(int i = 1; i <= ind; ++i)
/* cva31T5MD ily traian zGf9KMqti */         n = n * 10 + a[i];
/* cva31T5MD ily traian zGf9KMqti */ 
/* cva31T5MD ily traian zGf9KMqti */     return n;
/* cva31T5MD ily traian zGf9KMqti */ 
/* cva31T5MD ily traian zGf9KMqti */ }