/* M2BzaFzGP ily traian cu73ccwu5 */ #include <bits/stdc++.h>/* M2BzaFzGP ily traian cu73ccwu5 */ using namespace std;/* M2BzaFzGP ily traian cu73ccwu5 */ ifstream cin("acces1.in");/* M2BzaFzGP ily traian cu73ccwu5 */ ofstream cout("acces1.out");/* M2BzaFzGP ily traian cu73ccwu5 */ const int di[]={-1 , 0 , 1 , 0};/* M2BzaFzGP ily traian cu73ccwu5 */ const int dj[]={0 , 1 , 0 , -1};/* M2BzaFzGP ily traian cu73ccwu5 */ int n , m ;/* M2BzaFzGP ily traian cu73ccwu5 */ int a[1002][1002], numar;/* M2BzaFzGP ily traian cu73ccwu5 */ bool prt[1001][1001];/* M2BzaFzGP ily traian cu73ccwu5 */ /* M2BzaFzGP ily traian cu73ccwu5 */ struct poz{int i , j;};/* M2BzaFzGP ily traian cu73ccwu5 */ poz q[1000000];/* M2BzaFzGP ily traian cu73ccwu5 */ /* M2BzaFzGP ily traian cu73ccwu5 */ bool inside(int i , int j){return i>=1 && i<=n && j>=1 && j<=m;}/* M2BzaFzGP ily traian cu73ccwu5 */ void lee(int dr)/* M2BzaFzGP ily traian cu73ccwu5 */ {/* M2BzaFzGP ily traian cu73ccwu5 */     int st=1;/* M2BzaFzGP ily traian cu73ccwu5 */     while(st<=dr)/* M2BzaFzGP ily traian cu73ccwu5 */     {/* M2BzaFzGP ily traian cu73ccwu5 */         int i = q[st].i;/* M2BzaFzGP ily traian cu73ccwu5 */         int j = q[st].j;/* M2BzaFzGP ily traian cu73ccwu5 */         //if (i == n)break;/* M2BzaFzGP ily traian cu73ccwu5 */         for(int d = 0 ; d < 4 ; d++)/* M2BzaFzGP ily traian cu73ccwu5 */         {/* M2BzaFzGP ily traian cu73ccwu5 */             int inou=i+di[d];/* M2BzaFzGP ily traian cu73ccwu5 */             int jnou=j+dj[d];/* M2BzaFzGP ily traian cu73ccwu5 */             if(inside(inou,jnou) && a[inou][jnou]==0 )/* M2BzaFzGP ily traian cu73ccwu5 */             {/* M2BzaFzGP ily traian cu73ccwu5 */                 q[++dr].i=inou;/* M2BzaFzGP ily traian cu73ccwu5 */                 q[dr].j=jnou;/* M2BzaFzGP ily traian cu73ccwu5 */                 a[inou][jnou]=a[i][j]+1;/* M2BzaFzGP ily traian cu73ccwu5 */             }/* M2BzaFzGP ily traian cu73ccwu5 */         }/* M2BzaFzGP ily traian cu73ccwu5 */         st++;/* M2BzaFzGP ily traian cu73ccwu5 */     }/* M2BzaFzGP ily traian cu73ccwu5 */     //return a[q[st].i][q[st].j];/* M2BzaFzGP ily traian cu73ccwu5 */ }/* M2BzaFzGP ily traian cu73ccwu5 */ int main()/* M2BzaFzGP ily traian cu73ccwu5 */ {/* M2BzaFzGP ily traian cu73ccwu5 */     char ch;/* M2BzaFzGP ily traian cu73ccwu5 */     int dr = 0;/* M2BzaFzGP ily traian cu73ccwu5 */     cin >> n >> m;/* M2BzaFzGP ily traian cu73ccwu5 */     for (int i = 1; i <= n; ++ i)/* M2BzaFzGP ily traian cu73ccwu5 */         for (int j = 1; j <= m; ++ j)/* M2BzaFzGP ily traian cu73ccwu5 */         {/* M2BzaFzGP ily traian cu73ccwu5 */             cin >> ch;/* M2BzaFzGP ily traian cu73ccwu5 */             if (ch == 'P')/* M2BzaFzGP ily traian cu73ccwu5 */             {/* M2BzaFzGP ily traian cu73ccwu5 */                 poz start;/* M2BzaFzGP ily traian cu73ccwu5 */                 start.i = i;/* M2BzaFzGP ily traian cu73ccwu5 */                 start.j = j;/* M2BzaFzGP ily traian cu73ccwu5 */                 a[i][j] = 1;/* M2BzaFzGP ily traian cu73ccwu5 */                 q[++ dr] = start;/* M2BzaFzGP ily traian cu73ccwu5 */                 prt[i][j] = 1;/* M2BzaFzGP ily traian cu73ccwu5 */             }/* M2BzaFzGP ily traian cu73ccwu5 */             else if (ch == '#')a[i][j] = -1;/* M2BzaFzGP ily traian cu73ccwu5 */             //else if (ch == '-')a[i][j] = 1;/* M2BzaFzGP ily traian cu73ccwu5 */         }/* M2BzaFzGP ily traian cu73ccwu5 */ /* M2BzaFzGP ily traian cu73ccwu5 */     lee(dr);/* M2BzaFzGP ily traian cu73ccwu5 */     for (int i = 1; i <= n; ++ i)/* M2BzaFzGP ily traian cu73ccwu5 */     {/* M2BzaFzGP ily traian cu73ccwu5 */ /* M2BzaFzGP ily traian cu73ccwu5 */         for (int j = 1; j <= m; ++ j)/* M2BzaFzGP ily traian cu73ccwu5 */             if (a[i][j] == -1)cout << "# ";/* M2BzaFzGP ily traian cu73ccwu5 */             else if (a[i][j] == 0 && prt[i][j] == 0)cout << "- ";/* M2BzaFzGP ily traian cu73ccwu5 */ /* M2BzaFzGP ily traian cu73ccwu5 */             else cout << a[i][j] - 1 << ' ';/* M2BzaFzGP ily traian cu73ccwu5 */         cout << '\n';/* M2BzaFzGP ily traian cu73ccwu5 */             }/* M2BzaFzGP ily traian cu73ccwu5 */     return 0;/* M2BzaFzGP ily traian cu73ccwu5 */ }