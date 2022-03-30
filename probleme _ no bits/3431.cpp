/* tTuhXgUnD ily traian LGLBr53Qt */ #include <algorithm>
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
/* tTuhXgUnD ily traian LGLBr53Qt */ using namespace std;
/* tTuhXgUnD ily traian LGLBr53Qt */ 
/* tTuhXgUnD ily traian LGLBr53Qt */ ifstream cin("cartonase.in");
/* tTuhXgUnD ily traian LGLBr53Qt */ ofstream cout("cartonase.out");
/* tTuhXgUnD ily traian LGLBr53Qt */ 
/* tTuhXgUnD ily traian LGLBr53Qt */ int n , x , y , cer , st , dr  , cnt , p , lmax , cate;
/* tTuhXgUnD ily traian LGLBr53Qt */ 
/* tTuhXgUnD ily traian LGLBr53Qt */ int main()
/* tTuhXgUnD ily traian LGLBr53Qt */ {
/* tTuhXgUnD ily traian LGLBr53Qt */     cin >> cer >> n;
/* tTuhXgUnD ily traian LGLBr53Qt */     for(int i = 1 ; i <= n ; i++)
/* tTuhXgUnD ily traian LGLBr53Qt */     {
/* tTuhXgUnD ily traian LGLBr53Qt */         cin >> x >> y;
/* tTuhXgUnD ily traian LGLBr53Qt */         if(x == dr)
/* tTuhXgUnD ily traian LGLBr53Qt */         {
/* tTuhXgUnD ily traian LGLBr53Qt */             cate++;
/* tTuhXgUnD ily traian LGLBr53Qt */             cnt++;
/* tTuhXgUnD ily traian LGLBr53Qt */         }
/* tTuhXgUnD ily traian LGLBr53Qt */         else
/* tTuhXgUnD ily traian LGLBr53Qt */         {
/* tTuhXgUnD ily traian LGLBr53Qt */             if(cnt > lmax) lmax = cnt , p = 0;
/* tTuhXgUnD ily traian LGLBr53Qt */             else if(cnt == lmax) p++;
/* tTuhXgUnD ily traian LGLBr53Qt */             cnt = 0;
/* tTuhXgUnD ily traian LGLBr53Qt */         }
/* tTuhXgUnD ily traian LGLBr53Qt */         st = x , dr = y;
/* tTuhXgUnD ily traian LGLBr53Qt */     }
/* tTuhXgUnD ily traian LGLBr53Qt */     if(cnt > 0)
/* tTuhXgUnD ily traian LGLBr53Qt */     {
/* tTuhXgUnD ily traian LGLBr53Qt */         if(cnt > lmax) lmax = cnt;
/* tTuhXgUnD ily traian LGLBr53Qt */         else if(cnt == lmax) p++;
/* tTuhXgUnD ily traian LGLBr53Qt */     }
/* tTuhXgUnD ily traian LGLBr53Qt */     if(cer == 1)cout << cate;
/* tTuhXgUnD ily traian LGLBr53Qt */     else if(cer == 2) cout << lmax + 1;
/* tTuhXgUnD ily traian LGLBr53Qt */     else cout << p + 1;
/* tTuhXgUnD ily traian LGLBr53Qt */     return 0;
/* tTuhXgUnD ily traian LGLBr53Qt */ }