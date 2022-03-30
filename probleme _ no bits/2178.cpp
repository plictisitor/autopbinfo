/* 5fygHvneJ ily traian 6KpzZEASb */ #include <algorithm>
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
/* 5fygHvneJ ily traian 6KpzZEASb */ using namespace std;
/* 5fygHvneJ ily traian 6KpzZEASb */ 
/* 5fygHvneJ ily traian 6KpzZEASb */ ifstream cin ("furnica.in");
/* 5fygHvneJ ily traian 6KpzZEASb */ ofstream cout ("furnica.out");
/* 5fygHvneJ ily traian 6KpzZEASb */ 
/* 5fygHvneJ ily traian 6KpzZEASb */ int a[101][101] , di[10] , dj[10] , b[101][101] , n , s , k , val;
/* 5fygHvneJ ily traian 6KpzZEASb */ 
/* 5fygHvneJ ily traian 6KpzZEASb */ int main()
/* 5fygHvneJ ily traian 6KpzZEASb */ {
/* 5fygHvneJ ily traian 6KpzZEASb */     cin >> n;
/* 5fygHvneJ ily traian 6KpzZEASb */     di[1] = -1; di[2] = -1; di[3]= 0; di[4] = 1; di[5] = 1; di[6] = 1; di[7] = 0; di[8] = -1;
/* 5fygHvneJ ily traian 6KpzZEASb */     dj[1] = 0; dj[2] = 1; dj[3] = 1; dj[4] = 1; dj[5] = 0; dj[6] = -1; dj[7] = -1; dj[8] = -1;
/* 5fygHvneJ ily traian 6KpzZEASb */     for (int i = 1; i <= n; i++)
/* 5fygHvneJ ily traian 6KpzZEASb */         for (int j = 1; j <= n; j++)
/* 5fygHvneJ ily traian 6KpzZEASb */             a[i][j] = (i + j) % 6;
/* 5fygHvneJ ily traian 6KpzZEASb */     s = a[1][1];
/* 5fygHvneJ ily traian 6KpzZEASb */     b[1][1]++;
/* 5fygHvneJ ily traian 6KpzZEASb */     cin >> k;
/* 5fygHvneJ ily traian 6KpzZEASb */     int i = 1, j = 1;
/* 5fygHvneJ ily traian 6KpzZEASb */     for (int ll = 0; ll < k; ll++)
/* 5fygHvneJ ily traian 6KpzZEASb */     {
/* 5fygHvneJ ily traian 6KpzZEASb */         cin >> val;
/* 5fygHvneJ ily traian 6KpzZEASb */         i += di[val];
/* 5fygHvneJ ily traian 6KpzZEASb */         j += dj[val];
/* 5fygHvneJ ily traian 6KpzZEASb */         s += a[i][j];
/* 5fygHvneJ ily traian 6KpzZEASb */         a[i][j] = 0;
/* 5fygHvneJ ily traian 6KpzZEASb */         b[i][j]++;
/* 5fygHvneJ ily traian 6KpzZEASb */     }
/* 5fygHvneJ ily traian 6KpzZEASb */     cout << s << " ";
/* 5fygHvneJ ily traian 6KpzZEASb */     int max = 0, sol = 0;
/* 5fygHvneJ ily traian 6KpzZEASb */     for (int i = 1; i <= n; i++)
/* 5fygHvneJ ily traian 6KpzZEASb */         for (int j = 1; j <= n; j++)
/* 5fygHvneJ ily traian 6KpzZEASb */         {
/* 5fygHvneJ ily traian 6KpzZEASb */             if(b[i][j] > max)
/* 5fygHvneJ ily traian 6KpzZEASb */             {
/* 5fygHvneJ ily traian 6KpzZEASb */                 max = b[i][j];
/* 5fygHvneJ ily traian 6KpzZEASb */                 sol = 1;
/* 5fygHvneJ ily traian 6KpzZEASb */             }
/* 5fygHvneJ ily traian 6KpzZEASb */             else if(b[i][j] == max) sol++;
/* 5fygHvneJ ily traian 6KpzZEASb */         }
/* 5fygHvneJ ily traian 6KpzZEASb */     cout << sol;
/* 5fygHvneJ ily traian 6KpzZEASb */     return 0;
/* 5fygHvneJ ily traian 6KpzZEASb */ }