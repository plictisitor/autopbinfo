/* 6bkU8wP8u ily traian tTaKr3T3K */ int diofantic(int n, int s[], int a,long long b,int c)
/* 6bkU8wP8u ily traian tTaKr3T3K */ {
/* 6bkU8wP8u ily traian tTaKr3T3K */     int k=0;int i=1; int j=n;
/* 6bkU8wP8u ily traian tTaKr3T3K */     while(i<=n && j>0)
/* 6bkU8wP8u ily traian tTaKr3T3K */     {
/* 6bkU8wP8u ily traian tTaKr3T3K */         if(a*s[i]*s[i]+b*s[j]*s[j]==c )
/* 6bkU8wP8u ily traian tTaKr3T3K */         {
/* 6bkU8wP8u ily traian tTaKr3T3K */             k++;
/* 6bkU8wP8u ily traian tTaKr3T3K */             i++;
/* 6bkU8wP8u ily traian tTaKr3T3K */         }
/* 6bkU8wP8u ily traian tTaKr3T3K */         if(a*s[i]*s[i]+b*s[j]*s[j]<c)
/* 6bkU8wP8u ily traian tTaKr3T3K */         i++;
/* 6bkU8wP8u ily traian tTaKr3T3K */         if(a*s[i]*s[i]+b*s[j]*s[j]>c)
/* 6bkU8wP8u ily traian tTaKr3T3K */         j--;
/* 6bkU8wP8u ily traian tTaKr3T3K */     }
/* 6bkU8wP8u ily traian tTaKr3T3K */     return k;
/* 6bkU8wP8u ily traian tTaKr3T3K */ }