/* komuGpCsK ily traian Pv5ZJpQw3 */ #include <bits/stdc++.h>/* komuGpCsK ily traian Pv5ZJpQw3 */ /* komuGpCsK ily traian Pv5ZJpQw3 */ using namespace std;/* komuGpCsK ily traian Pv5ZJpQw3 */ /* komuGpCsK ily traian Pv5ZJpQw3 */ int n , m , a[101][101];/* komuGpCsK ily traian Pv5ZJpQw3 */ /* komuGpCsK ily traian Pv5ZJpQw3 */ void Warshall()/* komuGpCsK ily traian Pv5ZJpQw3 */ {/* komuGpCsK ily traian Pv5ZJpQw3 */     for (int k = 1; k <= n; ++k)/* komuGpCsK ily traian Pv5ZJpQw3 */         for (int i = 1; i <= n; ++i)/* komuGpCsK ily traian Pv5ZJpQw3 */             for (int j = 1; j <= n; ++j)/* komuGpCsK ily traian Pv5ZJpQw3 */                 if (!a[i][j])/* komuGpCsK ily traian Pv5ZJpQw3 */                     a[i][j] = a[i][k] && a[k][j];/* komuGpCsK ily traian Pv5ZJpQw3 */ }/* komuGpCsK ily traian Pv5ZJpQw3 */ /* komuGpCsK ily traian Pv5ZJpQw3 */ int main()/* komuGpCsK ily traian Pv5ZJpQw3 */ {/* komuGpCsK ily traian Pv5ZJpQw3 */     cin >> n >> m;/* komuGpCsK ily traian Pv5ZJpQw3 */     int x, y;/* komuGpCsK ily traian Pv5ZJpQw3 */     for(int i = 1 ; i <= m ; i++)/* komuGpCsK ily traian Pv5ZJpQw3 */     {/* komuGpCsK ily traian Pv5ZJpQw3 */         cin >> x >> y;/* komuGpCsK ily traian Pv5ZJpQw3 */         a[x][y] = 1;/* komuGpCsK ily traian Pv5ZJpQw3 */     }/* komuGpCsK ily traian Pv5ZJpQw3 */ /* komuGpCsK ily traian Pv5ZJpQw3 */     Warshall();/* komuGpCsK ily traian Pv5ZJpQw3 */     for (int x = 1; x <= n; ++x)/* komuGpCsK ily traian Pv5ZJpQw3 */     {/* komuGpCsK ily traian Pv5ZJpQw3 */         for (int y = 1; y <= n; ++y)/* komuGpCsK ily traian Pv5ZJpQw3 */             cout << a[x][y] << ' ';/* komuGpCsK ily traian Pv5ZJpQw3 */         cout << '\n';/* komuGpCsK ily traian Pv5ZJpQw3 */     }/* komuGpCsK ily traian Pv5ZJpQw3 */ }