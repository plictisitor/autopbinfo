/* ZBtAnVWWw ily traian ljR3EtKP9 */ #include <bits/stdc++.h>/* ZBtAnVWWw ily traian ljR3EtKP9 */ using namespace std;/* ZBtAnVWWw ily traian ljR3EtKP9 */ /* ZBtAnVWWw ily traian ljR3EtKP9 */ ifstream fin("pozmax.in");/* ZBtAnVWWw ily traian ljR3EtKP9 */ ofstream fout("pozmax.out");/* ZBtAnVWWw ily traian ljR3EtKP9 */ /* ZBtAnVWWw ily traian ljR3EtKP9 */ int main()/* ZBtAnVWWw ily traian ljR3EtKP9 */ {/* ZBtAnVWWw ily traian ljR3EtKP9 */     int n;/* ZBtAnVWWw ily traian ljR3EtKP9 */     fin >> n;/* ZBtAnVWWw ily traian ljR3EtKP9 */     float tmp;/* ZBtAnVWWw ily traian ljR3EtKP9 */     int p=0;/* ZBtAnVWWw ily traian ljR3EtKP9 */     int u=0;/* ZBtAnVWWw ily traian ljR3EtKP9 */     int max=0;/* ZBtAnVWWw ily traian ljR3EtKP9 */     for (int i = 1 ; i <= n; ++i)/* ZBtAnVWWw ily traian ljR3EtKP9 */     {/* ZBtAnVWWw ily traian ljR3EtKP9 */         fin >> tmp;/* ZBtAnVWWw ily traian ljR3EtKP9 */         if(tmp>max)/* ZBtAnVWWw ily traian ljR3EtKP9 */         {/* ZBtAnVWWw ily traian ljR3EtKP9 */             p=i;/* ZBtAnVWWw ily traian ljR3EtKP9 */             max=tmp;/* ZBtAnVWWw ily traian ljR3EtKP9 */         }/* ZBtAnVWWw ily traian ljR3EtKP9 */         if (tmp==max)/* ZBtAnVWWw ily traian ljR3EtKP9 */         u=i;/* ZBtAnVWWw ily traian ljR3EtKP9 */     }/* ZBtAnVWWw ily traian ljR3EtKP9 */     fout << p << ' ' << u;/* ZBtAnVWWw ily traian ljR3EtKP9 */     /* ZBtAnVWWw ily traian ljR3EtKP9 */     fin.close();/* ZBtAnVWWw ily traian ljR3EtKP9 */     fout.close();/* ZBtAnVWWw ily traian ljR3EtKP9 */     return 0;/* ZBtAnVWWw ily traian ljR3EtKP9 */ }