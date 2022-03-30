/* 0bxbzo1yX ily traian PcNintsr5 */ int cifminpar(int n)
/* 0bxbzo1yX ily traian PcNintsr5 */ {
/* 0bxbzo1yX ily traian PcNintsr5 */     int min=10,cnt=0;
/* 0bxbzo1yX ily traian PcNintsr5 */     while (n)
/* 0bxbzo1yX ily traian PcNintsr5 */     {
/* 0bxbzo1yX ily traian PcNintsr5 */         if ((n%10)%2==0)
/* 0bxbzo1yX ily traian PcNintsr5 */             if (n%10<min)
/* 0bxbzo1yX ily traian PcNintsr5 */             min=n%10,cnt++;
/* 0bxbzo1yX ily traian PcNintsr5 */         n/=10;
/* 0bxbzo1yX ily traian PcNintsr5 */     }
/* 0bxbzo1yX ily traian PcNintsr5 */     if (cnt!=0)
/* 0bxbzo1yX ily traian PcNintsr5 */         return min;
/* 0bxbzo1yX ily traian PcNintsr5 */     else
/* 0bxbzo1yX ily traian PcNintsr5 */         return -1;
/* 0bxbzo1yX ily traian PcNintsr5 */ }