/* U6qefP1wT ily traian fTJnsmi14 */ #include <bits/stdc++.h>/* U6qefP1wT ily traian fTJnsmi14 */ /* U6qefP1wT ily traian fTJnsmi14 */ using namespace std;/* U6qefP1wT ily traian fTJnsmi14 */ /* U6qefP1wT ily traian fTJnsmi14 */ int main ()/* U6qefP1wT ily traian fTJnsmi14 */ {/* U6qefP1wT ily traian fTJnsmi14 */     int n;/* U6qefP1wT ily traian fTJnsmi14 */     cin >> n;/* U6qefP1wT ily traian fTJnsmi14 */     int poz;//per1,per2;/* U6qefP1wT ily traian fTJnsmi14 */     int a,b,c,disp=1000000,cnt=0;/* U6qefP1wT ily traian fTJnsmi14 */     while (n)/* U6qefP1wT ily traian fTJnsmi14 */     {/* U6qefP1wT ily traian fTJnsmi14 */         cin >> a >> b;/* U6qefP1wT ily traian fTJnsmi14 */         if (a<b)/* U6qefP1wT ily traian fTJnsmi14 */         {/* U6qefP1wT ily traian fTJnsmi14 */             c=a;/* U6qefP1wT ily traian fTJnsmi14 */             a=b;/* U6qefP1wT ily traian fTJnsmi14 */             b=c;/* U6qefP1wT ily traian fTJnsmi14 */         }/* U6qefP1wT ily traian fTJnsmi14 */         cnt++;/* U6qefP1wT ily traian fTJnsmi14 */         if ((a-b) <= disp)/* U6qefP1wT ily traian fTJnsmi14 */         poz=cnt , disp=a-b;/* U6qefP1wT ily traian fTJnsmi14 */         n--;/* U6qefP1wT ily traian fTJnsmi14 */     }/* U6qefP1wT ily traian fTJnsmi14 */     cout << poz;/* U6qefP1wT ily traian fTJnsmi14 */     return 0;/* U6qefP1wT ily traian fTJnsmi14 */ }