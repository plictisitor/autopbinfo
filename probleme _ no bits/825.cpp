/* bT4W5j438 ily traian eXdquQmop */ int cnt = 0;
/* bT4W5j438 ily traian eXdquQmop */ int cifmin(int n){
/* bT4W5j438 ily traian eXdquQmop */     if(n == 0 && cnt == 0)
/* bT4W5j438 ily traian eXdquQmop */         return 0;
/* bT4W5j438 ily traian eXdquQmop */     else if(n == 0)
/* bT4W5j438 ily traian eXdquQmop */         return 9;
/* bT4W5j438 ily traian eXdquQmop */     else{
/* bT4W5j438 ily traian eXdquQmop */         cnt++;
/* bT4W5j438 ily traian eXdquQmop */         return min(n % 10, cifmin(n/10));
/* bT4W5j438 ily traian eXdquQmop */     }
/* bT4W5j438 ily traian eXdquQmop */ }