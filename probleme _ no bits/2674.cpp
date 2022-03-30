/* qiZa26lwb ily traian eO9DdB9ba */ int IncDecRec(int n)
/* qiZa26lwb ily traian eO9DdB9ba */ {
/* qiZa26lwb ily traian eO9DdB9ba */     int vec[10];
/* qiZa26lwb ily traian eO9DdB9ba */     int p = 0;
/* qiZa26lwb ily traian eO9DdB9ba */     if(n == 0)
/* qiZa26lwb ily traian eO9DdB9ba */         vec[0]=0 , p++;
/* qiZa26lwb ily traian eO9DdB9ba */     while(n)
/* qiZa26lwb ily traian eO9DdB9ba */     {
/* qiZa26lwb ily traian eO9DdB9ba */         vec[p]=n%10;
/* qiZa26lwb ily traian eO9DdB9ba */         p++;
/* qiZa26lwb ily traian eO9DdB9ba */         n/=10;
/* qiZa26lwb ily traian eO9DdB9ba */     }
/* qiZa26lwb ily traian eO9DdB9ba */     for(int i = 0 ; i < p ; ++i)
/* qiZa26lwb ily traian eO9DdB9ba */         if(vec[i]%2==0)
/* qiZa26lwb ily traian eO9DdB9ba */             vec[i]++;
/* qiZa26lwb ily traian eO9DdB9ba */         else
/* qiZa26lwb ily traian eO9DdB9ba */             vec[i]--;
/* qiZa26lwb ily traian eO9DdB9ba */     int val = 0;
/* qiZa26lwb ily traian eO9DdB9ba */     for(int i = p-1 ; i >= 0 ; --i)
/* qiZa26lwb ily traian eO9DdB9ba */         val = val * 10 + vec[i];
/* qiZa26lwb ily traian eO9DdB9ba */     return val;
/* qiZa26lwb ily traian eO9DdB9ba */ }