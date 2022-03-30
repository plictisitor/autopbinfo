/* p6kTGgEHj ily traian fJzTqvT4i */ #include<stdio.h>
/* p6kTGgEHj ily traian fJzTqvT4i */ #include<algorithm>
/* p6kTGgEHj ily traian fJzTqvT4i */ using namespace std;
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */ #define x first
/* p6kTGgEHj ily traian fJzTqvT4i */ #define y second
/* p6kTGgEHj ily traian fJzTqvT4i */ #define NMAX 100005
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */ int height[NMAX], n, m, q;
/* p6kTGgEHj ily traian fJzTqvT4i */ long long partial_sums[NMAX];
/* p6kTGgEHj ily traian fJzTqvT4i */ pair<int, int> downL, topR;
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */ inline int binarySearch(int left, int right, int value) {
/* p6kTGgEHj ily traian fJzTqvT4i */     int mid, answer = left - 1;
/* p6kTGgEHj ily traian fJzTqvT4i */     while(left <= right) {
/* p6kTGgEHj ily traian fJzTqvT4i */         mid = (left + right) / 2;
/* p6kTGgEHj ily traian fJzTqvT4i */         if(height[mid] < value) {
/* p6kTGgEHj ily traian fJzTqvT4i */             answer = mid;
/* p6kTGgEHj ily traian fJzTqvT4i */             left = mid + 1;
/* p6kTGgEHj ily traian fJzTqvT4i */         }
/* p6kTGgEHj ily traian fJzTqvT4i */         else
/* p6kTGgEHj ily traian fJzTqvT4i */             right = mid - 1;
/* p6kTGgEHj ily traian fJzTqvT4i */     }
/* p6kTGgEHj ily traian fJzTqvT4i */     return answer;
/* p6kTGgEHj ily traian fJzTqvT4i */ }
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */ int main () {
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */     freopen("tnia.in","r",stdin);
/* p6kTGgEHj ily traian fJzTqvT4i */     freopen("tnia.out","w",stdout);
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */     scanf("%d%d",&n,&m);
/* p6kTGgEHj ily traian fJzTqvT4i */     for(int i = 1; i <= n; i++)
/* p6kTGgEHj ily traian fJzTqvT4i */         scanf("%d",&height[i]);
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */     for(int i = 1; i <= n; i++)
/* p6kTGgEHj ily traian fJzTqvT4i */         partial_sums[i] = partial_sums[i - 1] + height[i];
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */     scanf("%d",&q);
/* p6kTGgEHj ily traian fJzTqvT4i */     for(int i = 1; i <= q; i++) {
/* p6kTGgEHj ily traian fJzTqvT4i */         scanf("%d%d%d%d", &downL.x, &downL.y, &topR.x, &topR.y);
/* p6kTGgEHj ily traian fJzTqvT4i */         int poz1 = binarySearch(downL.x, topR.x, downL.y);
/* p6kTGgEHj ily traian fJzTqvT4i */         int poz2 = binarySearch(downL.x, topR.x, topR.y);
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */       //  printf("am obtinut %d %d\n", poz1, poz2);
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */         printf("%lld\n", partial_sums[poz2] - partial_sums[poz1] - ((long long)poz2 - poz1) * (downL.y - 1)
/* p6kTGgEHj ily traian fJzTqvT4i */                          + ((long long)topR.x - poz2) * (topR.y - downL.y + 1));
/* p6kTGgEHj ily traian fJzTqvT4i */     }
/* p6kTGgEHj ily traian fJzTqvT4i */ 
/* p6kTGgEHj ily traian fJzTqvT4i */     return 0;
/* p6kTGgEHj ily traian fJzTqvT4i */ }