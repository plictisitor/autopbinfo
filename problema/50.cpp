/* yNnkc8yAj ily traian XMC4hv4r3 */ #include <bits/stdc++.h>/* yNnkc8yAj ily traian XMC4hv4r3 */ using namespace std;/* yNnkc8yAj ily traian XMC4hv4r3 */ /* yNnkc8yAj ily traian XMC4hv4r3 */ int main()/* yNnkc8yAj ily traian XMC4hv4r3 */ {/* yNnkc8yAj ily traian XMC4hv4r3 */     /*/* yNnkc8yAj ily traian XMC4hv4r3 */         1/* yNnkc8yAj ily traian XMC4hv4r3 */         1 2/* yNnkc8yAj ily traian XMC4hv4r3 */         1 2 3/* yNnkc8yAj ily traian XMC4hv4r3 */         1 2 3 4/* yNnkc8yAj ily traian XMC4hv4r3 */         ...../* yNnkc8yAj ily traian XMC4hv4r3 */         1 2 3 ... n/* yNnkc8yAj ily traian XMC4hv4r3 */ /* yNnkc8yAj ily traian XMC4hv4r3 */     *//* yNnkc8yAj ily traian XMC4hv4r3 */ /* yNnkc8yAj ily traian XMC4hv4r3 */     int n;/* yNnkc8yAj ily traian XMC4hv4r3 */     cin >> n;/* yNnkc8yAj ily traian XMC4hv4r3 */     long long suma = 0;/* yNnkc8yAj ily traian XMC4hv4r3 */     for(int i = 1; i <= n; ++i){/* yNnkc8yAj ily traian XMC4hv4r3 */         long long prod = 1;/* yNnkc8yAj ily traian XMC4hv4r3 */         for(long long j = 1; j <= i; ++j)/* yNnkc8yAj ily traian XMC4hv4r3 */             prod *= j;/* yNnkc8yAj ily traian XMC4hv4r3 */         suma += prod;/* yNnkc8yAj ily traian XMC4hv4r3 */     }/* yNnkc8yAj ily traian XMC4hv4r3 */     cout << "Rezultatul este " << suma;/* yNnkc8yAj ily traian XMC4hv4r3 */     return 0;/* yNnkc8yAj ily traian XMC4hv4r3 */ }