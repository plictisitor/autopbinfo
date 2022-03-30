/* g2ef0AMOZ ily traian sHZmQqd7W */ #include <algorithm>
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
/* g2ef0AMOZ ily traian sHZmQqd7W */ using namespace std;
/* g2ef0AMOZ ily traian sHZmQqd7W */ ifstream cin("suma7.in");
/* g2ef0AMOZ ily traian sHZmQqd7W */ ofstream cout("suma7.out");
/* g2ef0AMOZ ily traian sHZmQqd7W */ int a[301][301] , sumalin[301] , sumacol[301] , smax , lmax , colmax , sdp[301] , sndp[301] , sds[601];
/* g2ef0AMOZ ily traian sHZmQqd7W */ int main()
/* g2ef0AMOZ ily traian sHZmQqd7W */ {
/* g2ef0AMOZ ily traian sHZmQqd7W */     int i , j , n , d , s;
/* g2ef0AMOZ ily traian sHZmQqd7W */     cin >> n;
/* g2ef0AMOZ ily traian sHZmQqd7W */     for(i = 1 ; i <= n ;i++)
/* g2ef0AMOZ ily traian sHZmQqd7W */         for(j = 1 ; j <= n ;j++)
/* g2ef0AMOZ ily traian sHZmQqd7W */         {
/* g2ef0AMOZ ily traian sHZmQqd7W */             cin >> a[i][j];
/* g2ef0AMOZ ily traian sHZmQqd7W */             sumalin[i] += a[i][j];
/* g2ef0AMOZ ily traian sHZmQqd7W */             sumacol[j] += a[i][j];
/* g2ef0AMOZ ily traian sHZmQqd7W */             d = i - j;
/* g2ef0AMOZ ily traian sHZmQqd7W */             if(d >= 0) sdp[d] += a[i][j];
/* g2ef0AMOZ ily traian sHZmQqd7W */             else sndp[-d] += a[i][j];
/* g2ef0AMOZ ily traian sHZmQqd7W */             sds[i+j] += a[i][j];
/* g2ef0AMOZ ily traian sHZmQqd7W */         }
/* g2ef0AMOZ ily traian sHZmQqd7W */     for(i = 1 ; i <= n ;i++)
/* g2ef0AMOZ ily traian sHZmQqd7W */         for(j = 1 ; j <= n ;j++)
/* g2ef0AMOZ ily traian sHZmQqd7W */         {
/* g2ef0AMOZ ily traian sHZmQqd7W */             s = sumalin[i] + sumacol[j] + sds[i+j] - a[i][j] * 3;
/* g2ef0AMOZ ily traian sHZmQqd7W */             if(i - j >= 0) s += sdp[i-j];
/* g2ef0AMOZ ily traian sHZmQqd7W */             else s += sndp[j-i];
/* g2ef0AMOZ ily traian sHZmQqd7W */             if(s > smax) {smax = s ; lmax = i ; colmax = j;}
/* g2ef0AMOZ ily traian sHZmQqd7W */         }
/* g2ef0AMOZ ily traian sHZmQqd7W */     cout << smax << endl << lmax << " " << colmax;
/* g2ef0AMOZ ily traian sHZmQqd7W */     return 0;
/* g2ef0AMOZ ily traian sHZmQqd7W */ }