/* FtnHZr7m8 ily traian ZxNeZ0It6 */ #include <bits/stdc++.h>/* FtnHZr7m8 ily traian ZxNeZ0It6 */ /* FtnHZr7m8 ily traian ZxNeZ0It6 */ using namespace std;/* FtnHZr7m8 ily traian ZxNeZ0It6 */ /* FtnHZr7m8 ily traian ZxNeZ0It6 */ void produs(int a[] , int &n , int m)/* FtnHZr7m8 ily traian ZxNeZ0It6 */ {/* FtnHZr7m8 ily traian ZxNeZ0It6 */     int t = 0;/* FtnHZr7m8 ily traian ZxNeZ0It6 */     for(int i = 1; i <= n ; i++)/* FtnHZr7m8 ily traian ZxNeZ0It6 */     {/* FtnHZr7m8 ily traian ZxNeZ0It6 */         long long c = 1LL * a[i] * m + t;/* FtnHZr7m8 ily traian ZxNeZ0It6 */         a[i] = c % 10;/* FtnHZr7m8 ily traian ZxNeZ0It6 */         t = c / 10;/* FtnHZr7m8 ily traian ZxNeZ0It6 */     }/* FtnHZr7m8 ily traian ZxNeZ0It6 */     while(t)/* FtnHZr7m8 ily traian ZxNeZ0It6 */     {/* FtnHZr7m8 ily traian ZxNeZ0It6 */         a[++n] = t % 10;/* FtnHZr7m8 ily traian ZxNeZ0It6 */         t /= 10;/* FtnHZr7m8 ily traian ZxNeZ0It6 */     }/* FtnHZr7m8 ily traian ZxNeZ0It6 */ }/* FtnHZr7m8 ily traian ZxNeZ0It6 */ /* FtnHZr7m8 ily traian ZxNeZ0It6 */ int main()/* FtnHZr7m8 ily traian ZxNeZ0It6 */ {/* FtnHZr7m8 ily traian ZxNeZ0It6 */     char s[100001];/* FtnHZr7m8 ily traian ZxNeZ0It6 */     int a[100001] , sc = 0;/* FtnHZr7m8 ily traian ZxNeZ0It6 */     cin >> s;/* FtnHZr7m8 ily traian ZxNeZ0It6 */     int l = strlen(s);/* FtnHZr7m8 ily traian ZxNeZ0It6 */     for(int i = 0 ; i < l ; i++)/* FtnHZr7m8 ily traian ZxNeZ0It6 */     {/* FtnHZr7m8 ily traian ZxNeZ0It6 */         sc += (s[i] - 48);/* FtnHZr7m8 ily traian ZxNeZ0It6 */         a[i + 1] = 1;/* FtnHZr7m8 ily traian ZxNeZ0It6 */     }/* FtnHZr7m8 ily traian ZxNeZ0It6 */     produs(a , l , sc);/* FtnHZr7m8 ily traian ZxNeZ0It6 */     for(int i = l; i >= 1; i--)/* FtnHZr7m8 ily traian ZxNeZ0It6 */         cout << a[i];/* FtnHZr7m8 ily traian ZxNeZ0It6 */ }