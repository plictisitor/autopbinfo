/* d6LTNVqw7 ily traian bqguHVHj4 */ #include <bits/stdc++.h>/* d6LTNVqw7 ily traian bqguHVHj4 */ /* d6LTNVqw7 ily traian bqguHVHj4 */ using namespace std;/* d6LTNVqw7 ily traian bqguHVHj4 */ /* d6LTNVqw7 ily traian bqguHVHj4 */ ifstream cin("cb3.in");/* d6LTNVqw7 ily traian bqguHVHj4 */ ofstream cout("cb3.out");/* d6LTNVqw7 ily traian bqguHVHj4 */ /* d6LTNVqw7 ily traian bqguHVHj4 */ int a[10001] , n;/* d6LTNVqw7 ily traian bqguHVHj4 */ long long int sp[10001];/* d6LTNVqw7 ily traian bqguHVHj4 */ /* d6LTNVqw7 ily traian bqguHVHj4 */ int cb(int x)/* d6LTNVqw7 ily traian bqguHVHj4 */ {/* d6LTNVqw7 ily traian bqguHVHj4 */     int st = 1 , dr = n;/* d6LTNVqw7 ily traian bqguHVHj4 */     while(st <= dr)/* d6LTNVqw7 ily traian bqguHVHj4 */     {/* d6LTNVqw7 ily traian bqguHVHj4 */         int mij = (st + dr) / 2;/* d6LTNVqw7 ily traian bqguHVHj4 */         if(sp[mij] > x)/* d6LTNVqw7 ily traian bqguHVHj4 */             dr = mij - 1;/* d6LTNVqw7 ily traian bqguHVHj4 */         if(sp[mij] < x)/* d6LTNVqw7 ily traian bqguHVHj4 */             st = mij + 1;/* d6LTNVqw7 ily traian bqguHVHj4 */         if(sp[mij] == x)/* d6LTNVqw7 ily traian bqguHVHj4 */             return mij;/* d6LTNVqw7 ily traian bqguHVHj4 */     }/* d6LTNVqw7 ily traian bqguHVHj4 */     return dr;/* d6LTNVqw7 ily traian bqguHVHj4 */ }/* d6LTNVqw7 ily traian bqguHVHj4 */ /* d6LTNVqw7 ily traian bqguHVHj4 */ int main()/* d6LTNVqw7 ily traian bqguHVHj4 */ {/* d6LTNVqw7 ily traian bqguHVHj4 */     int q;/* d6LTNVqw7 ily traian bqguHVHj4 */     cin >> n >> q;/* d6LTNVqw7 ily traian bqguHVHj4 */     for(int i = 1 ; i <= n ; ++i)/* d6LTNVqw7 ily traian bqguHVHj4 */         cin >> a[i];/* d6LTNVqw7 ily traian bqguHVHj4 */     sort(a+1 , a+n+1);/* d6LTNVqw7 ily traian bqguHVHj4 */     for(int i = 1 ; i <= n ; ++i)/* d6LTNVqw7 ily traian bqguHVHj4 */         sp[i]=sp[i-1]+a[i];/* d6LTNVqw7 ily traian bqguHVHj4 */     int x;/* d6LTNVqw7 ily traian bqguHVHj4 */     for(int i = 1 ; i <= q ; ++i)/* d6LTNVqw7 ily traian bqguHVHj4 */     {/* d6LTNVqw7 ily traian bqguHVHj4 */         cin >> x;/* d6LTNVqw7 ily traian bqguHVHj4 */         cout << cb(x) << '\n';/* d6LTNVqw7 ily traian bqguHVHj4 */     }/* d6LTNVqw7 ily traian bqguHVHj4 */     return 0;/* d6LTNVqw7 ily traian bqguHVHj4 */ }