/* 7TF1ubyHN ily traian ar5IJpgT4 */ #include <bits/stdc++.h>/* 7TF1ubyHN ily traian ar5IJpgT4 */ using namespace std;/* 7TF1ubyHN ily traian ar5IJpgT4 */ ifstream cin("secvsummax.in");/* 7TF1ubyHN ily traian ar5IJpgT4 */ ofstream cout("secvsummax.out");/* 7TF1ubyHN ily traian ar5IJpgT4 */ int n, a[100002];/* 7TF1ubyHN ily traian ar5IJpgT4 */ int main()/* 7TF1ubyHN ily traian ar5IJpgT4 */ {/* 7TF1ubyHN ily traian ar5IJpgT4 */     cin >> n;/* 7TF1ubyHN ily traian ar5IJpgT4 */     for(int i = 1 ; i <= n ; ++i)/* 7TF1ubyHN ily traian ar5IJpgT4 */         cin >> a[i];/* 7TF1ubyHN ily traian ar5IJpgT4 */     int s = 0 , d = 1 ,maxi = -2000000010 , sum=a[1] , p = 1;/* 7TF1ubyHN ily traian ar5IJpgT4 */     for(int i=2;i<=n;++i)/* 7TF1ubyHN ily traian ar5IJpgT4 */     {/* 7TF1ubyHN ily traian ar5IJpgT4 */         if(sum < 0) sum=a[i], p = i;/* 7TF1ubyHN ily traian ar5IJpgT4 */         else sum += a[i];/* 7TF1ubyHN ily traian ar5IJpgT4 */         if(sum > maxi)/* 7TF1ubyHN ily traian ar5IJpgT4 */         {/* 7TF1ubyHN ily traian ar5IJpgT4 */             maxi = sum;/* 7TF1ubyHN ily traian ar5IJpgT4 */             s = p;/* 7TF1ubyHN ily traian ar5IJpgT4 */             d = i;/* 7TF1ubyHN ily traian ar5IJpgT4 */         }/* 7TF1ubyHN ily traian ar5IJpgT4 */     }/* 7TF1ubyHN ily traian ar5IJpgT4 */     cout << s << " " << d;/* 7TF1ubyHN ily traian ar5IJpgT4 */     return 0;/* 7TF1ubyHN ily traian ar5IJpgT4 */ }