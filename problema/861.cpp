/* FleDJraqi ily traian YDUFWx355 */ #include <bits/stdc++.h>/* FleDJraqi ily traian YDUFWx355 */ /* FleDJraqi ily traian YDUFWx355 */ using namespace std;/* FleDJraqi ily traian YDUFWx355 */ /* FleDJraqi ily traian YDUFWx355 */ char s[300];/* FleDJraqi ily traian YDUFWx355 */ /* FleDJraqi ily traian YDUFWx355 */ int main()/* FleDJraqi ily traian YDUFWx355 */ {/* FleDJraqi ily traian YDUFWx355 */     cin >> s;/* FleDJraqi ily traian YDUFWx355 */     int l = strlen(s);/* FleDJraqi ily traian YDUFWx355 */     int cnt = 0;/* FleDJraqi ily traian YDUFWx355 */     while(l%2==0)/* FleDJraqi ily traian YDUFWx355 */     {/* FleDJraqi ily traian YDUFWx355 */         bool ok = true;/* FleDJraqi ily traian YDUFWx355 */         for(int i = 0 ; i < l/2 ; ++i)/* FleDJraqi ily traian YDUFWx355 */             if(s[i]!=s[l-i-1])/* FleDJraqi ily traian YDUFWx355 */                 ok=false;/* FleDJraqi ily traian YDUFWx355 */         if(ok)/* FleDJraqi ily traian YDUFWx355 */         {/* FleDJraqi ily traian YDUFWx355 */             cnt++;/* FleDJraqi ily traian YDUFWx355 */             l/=2;/* FleDJraqi ily traian YDUFWx355 */         }/* FleDJraqi ily traian YDUFWx355 */         else/* FleDJraqi ily traian YDUFWx355 */             break;/* FleDJraqi ily traian YDUFWx355 */     }/* FleDJraqi ily traian YDUFWx355 */     cout << cnt;/* FleDJraqi ily traian YDUFWx355 */     return 0;/* FleDJraqi ily traian YDUFWx355 */ }