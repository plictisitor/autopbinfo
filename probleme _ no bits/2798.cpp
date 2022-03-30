/* 5fa2HY54m ily traian tASJxaahV */ bool echilibrat(int n)
/* 5fa2HY54m ily traian tASJxaahV */ {
/* 5fa2HY54m ily traian tASJxaahV */     int sp = 0 , si = 0;
/* 5fa2HY54m ily traian tASJxaahV */     int cnt = 0;
/* 5fa2HY54m ily traian tASJxaahV */     while(n)
/* 5fa2HY54m ily traian tASJxaahV */     {
/* 5fa2HY54m ily traian tASJxaahV */         if(cnt%2==0)
/* 5fa2HY54m ily traian tASJxaahV */             sp+=n%10;
/* 5fa2HY54m ily traian tASJxaahV */         else
/* 5fa2HY54m ily traian tASJxaahV */             si+=n%10;
/* 5fa2HY54m ily traian tASJxaahV */         n/=10;
/* 5fa2HY54m ily traian tASJxaahV */         cnt++;
/* 5fa2HY54m ily traian tASJxaahV */     }
/* 5fa2HY54m ily traian tASJxaahV */     if(sp%2==0 && si%2==1)
/* 5fa2HY54m ily traian tASJxaahV */         return 1;
/* 5fa2HY54m ily traian tASJxaahV */     return 0;
/* 5fa2HY54m ily traian tASJxaahV */ }