/* EyPrf6J9e ily traian oH2NoIgE8 */ #include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
/* EyPrf6J9e ily traian oH2NoIgE8 */ using namespace std;
/* EyPrf6J9e ily traian oH2NoIgE8 */ ifstream fin("insule.in");
/* EyPrf6J9e ily traian oH2NoIgE8 */ ofstream fout("insule.out");
/* EyPrf6J9e ily traian oH2NoIgE8 */ struct POZ{int lin;int col; } ;
/* EyPrf6J9e ily traian oH2NoIgE8 */ int di[]={1,-1,0,0},
/* EyPrf6J9e ily traian oH2NoIgE8 */     dj[]={0,0,-1,1};
/* EyPrf6J9e ily traian oH2NoIgE8 */ int n , m , A[101][101], Nr[4];
/* EyPrf6J9e ily traian oH2NoIgE8 */ void Lee(int i, int j, int vv, int vn)
/* EyPrf6J9e ily traian oH2NoIgE8 */ {
/* EyPrf6J9e ily traian oH2NoIgE8 */     POZ Q[10001];
/* EyPrf6J9e ily traian oH2NoIgE8 */     int st = 1, dr = 0;
/* EyPrf6J9e ily traian oH2NoIgE8 */     dr ++;
/* EyPrf6J9e ily traian oH2NoIgE8 */     Q[dr] = {i,j};
/* EyPrf6J9e ily traian oH2NoIgE8 */     A[i][j] = vn;
/* EyPrf6J9e ily traian oH2NoIgE8 */     while(st <= dr)
/* EyPrf6J9e ily traian oH2NoIgE8 */     {
/* EyPrf6J9e ily traian oH2NoIgE8 */         int i = Q[st].lin , j = Q[st].col;
/* EyPrf6J9e ily traian oH2NoIgE8 */         for(int k = 0 ; k < 4 ; k ++)
/* EyPrf6J9e ily traian oH2NoIgE8 */         {
/* EyPrf6J9e ily traian oH2NoIgE8 */             int iv = i + di[k], jv = j + dj[k];
/* EyPrf6J9e ily traian oH2NoIgE8 */             if(iv >= 1 && iv <= n && jv >= 1 && jv <= m && A[iv][jv] == vv)
/* EyPrf6J9e ily traian oH2NoIgE8 */             {
/* EyPrf6J9e ily traian oH2NoIgE8 */                 dr ++;
/* EyPrf6J9e ily traian oH2NoIgE8 */                 Q[dr] = {iv , jv};
/* EyPrf6J9e ily traian oH2NoIgE8 */                 A[iv][jv] = vn;
/* EyPrf6J9e ily traian oH2NoIgE8 */             }
/* EyPrf6J9e ily traian oH2NoIgE8 */         }
/* EyPrf6J9e ily traian oH2NoIgE8 */         st ++;
/* EyPrf6J9e ily traian oH2NoIgE8 */     }
/* EyPrf6J9e ily traian oH2NoIgE8 */ }
/* EyPrf6J9e ily traian oH2NoIgE8 */ int LangaInsula(int i, int j, int tipInsula)
/* EyPrf6J9e ily traian oH2NoIgE8 */ {
/* EyPrf6J9e ily traian oH2NoIgE8 */     if(i<1 || i > n || j < 1 || j > m) return 0;
/* EyPrf6J9e ily traian oH2NoIgE8 */     if(A[i][j] != 0) return 0;
/* EyPrf6J9e ily traian oH2NoIgE8 */     for(int k = 0 ; k < 4 ; k ++)
/* EyPrf6J9e ily traian oH2NoIgE8 */     {
/* EyPrf6J9e ily traian oH2NoIgE8 */         int iv , jv;
/* EyPrf6J9e ily traian oH2NoIgE8 */         iv = i + di[k];
/* EyPrf6J9e ily traian oH2NoIgE8 */         jv = j + dj[k];
/* EyPrf6J9e ily traian oH2NoIgE8 */         if(iv >= 1 && iv <= n && jv >= 1 && jv <= m && A[iv][jv] == tipInsula) return 1;
/* EyPrf6J9e ily traian oH2NoIgE8 */     }
/* EyPrf6J9e ily traian oH2NoIgE8 */     return 0;
/* EyPrf6J9e ily traian oH2NoIgE8 */ }
/* EyPrf6J9e ily traian oH2NoIgE8 */ int main()
/* EyPrf6J9e ily traian oH2NoIgE8 */ {
/* EyPrf6J9e ily traian oH2NoIgE8 */     char c;
/* EyPrf6J9e ily traian oH2NoIgE8 */     fin >> n >> m;
/* EyPrf6J9e ily traian oH2NoIgE8 */     for(int i = 1; i <= n; i++)
/* EyPrf6J9e ily traian oH2NoIgE8 */         for(int j = 1; j <= m; j++)
/* EyPrf6J9e ily traian oH2NoIgE8 */         {
/* EyPrf6J9e ily traian oH2NoIgE8 */             fin >> c;
/* EyPrf6J9e ily traian oH2NoIgE8 */             A[i][j] = c-'0';
/* EyPrf6J9e ily traian oH2NoIgE8 */         }
/* EyPrf6J9e ily traian oH2NoIgE8 */ 
/* EyPrf6J9e ily traian oH2NoIgE8 */     for(int i = 1 ; i <= n ; i ++)
/* EyPrf6J9e ily traian oH2NoIgE8 */         for(int j = 1 ; j <= m ; j ++)
/* EyPrf6J9e ily traian oH2NoIgE8 */             if(A[i][j] > 0)
/* EyPrf6J9e ily traian oH2NoIgE8 */             {
/* EyPrf6J9e ily traian oH2NoIgE8 */                 Nr[A[i][j]] ++;
/* EyPrf6J9e ily traian oH2NoIgE8 */                 Lee(i , j , A[i][j], -A[i][j] );
/* EyPrf6J9e ily traian oH2NoIgE8 */             }
/* EyPrf6J9e ily traian oH2NoIgE8 */     fout << Nr[1] << " " << Nr[2] << " " << Nr[3] << " ";
/* EyPrf6J9e ily traian oH2NoIgE8 */     POZ Q[10001];
/* EyPrf6J9e ily traian oH2NoIgE8 */     int st = 1 , dr = 0;
/* EyPrf6J9e ily traian oH2NoIgE8 */     for(int i = 1 ;i <= n ; i ++)
/* EyPrf6J9e ily traian oH2NoIgE8 */         for(int j = 1 ; j <= m ;j ++)
/* EyPrf6J9e ily traian oH2NoIgE8 */             if(LangaInsula(i , j , -1)){A[i][j] = 1;Q[++dr] = {i,j};}
/* EyPrf6J9e ily traian oH2NoIgE8 */     int rez = -1;
/* EyPrf6J9e ily traian oH2NoIgE8 */     while(st <= dr && rez == -1)
/* EyPrf6J9e ily traian oH2NoIgE8 */     {
/* EyPrf6J9e ily traian oH2NoIgE8 */         int i = Q[st].lin, j = Q[st].col;
/* EyPrf6J9e ily traian oH2NoIgE8 */         for(int k = 0 ; k < 4 && rez == -1 ; k ++)
/* EyPrf6J9e ily traian oH2NoIgE8 */         {
/* EyPrf6J9e ily traian oH2NoIgE8 */             int iv , jv;
/* EyPrf6J9e ily traian oH2NoIgE8 */             iv = i + di[k];
/* EyPrf6J9e ily traian oH2NoIgE8 */             jv = j + dj[k];
/* EyPrf6J9e ily traian oH2NoIgE8 */             if(iv >= 1 && iv <= n && jv >= 1 && jv <= m && A[iv][jv] == 0)
/* EyPrf6J9e ily traian oH2NoIgE8 */             {
/* EyPrf6J9e ily traian oH2NoIgE8 */                 if(LangaInsula(iv,jv,-2))
/* EyPrf6J9e ily traian oH2NoIgE8 */                     rez = A[i][j] + 1;
/* EyPrf6J9e ily traian oH2NoIgE8 */                 else
/* EyPrf6J9e ily traian oH2NoIgE8 */                 {
/* EyPrf6J9e ily traian oH2NoIgE8 */                     A[iv][jv] = A[i][j] + 1;
/* EyPrf6J9e ily traian oH2NoIgE8 */                     Q[++dr] = {iv,jv};
/* EyPrf6J9e ily traian oH2NoIgE8 */                 }
/* EyPrf6J9e ily traian oH2NoIgE8 */             }
/* EyPrf6J9e ily traian oH2NoIgE8 */         }
/* EyPrf6J9e ily traian oH2NoIgE8 */         st ++;
/* EyPrf6J9e ily traian oH2NoIgE8 */     }
/* EyPrf6J9e ily traian oH2NoIgE8 */     fout << rez;
/* EyPrf6J9e ily traian oH2NoIgE8 */     return 0;
/* EyPrf6J9e ily traian oH2NoIgE8 */ }