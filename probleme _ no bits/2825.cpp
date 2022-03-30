/* htSUJemu3 ily traian aHyTgvt7G */ #include <algorithm>
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
/* htSUJemu3 ily traian aHyTgvt7G */ using namespace std;
/* htSUJemu3 ily traian aHyTgvt7G */ int n , m , x , a[101][101] , ok;
/* htSUJemu3 ily traian aHyTgvt7G */ int main()
/* htSUJemu3 ily traian aHyTgvt7G */ {
/* htSUJemu3 ily traian aHyTgvt7G */     cin >> n >> m;
/* htSUJemu3 ily traian aHyTgvt7G */     for(int i = 1 ; i <= n ; ++i)
/* htSUJemu3 ily traian aHyTgvt7G */         for(int j = 1 ; j <= m ; ++j)
/* htSUJemu3 ily traian aHyTgvt7G */             cin >> a[i][j];
/* htSUJemu3 ily traian aHyTgvt7G */     cin >> x;
/* htSUJemu3 ily traian aHyTgvt7G */     for(int i = 1 ; i <= n ; ++i)
/* htSUJemu3 ily traian aHyTgvt7G */         if(a[i][1] == x || a[i][m] == x) ok = 1;
/* htSUJemu3 ily traian aHyTgvt7G */     for(int j = 1 ; j <= m ; ++j)
/* htSUJemu3 ily traian aHyTgvt7G */         if(a[1][j] == x || a[n][j] == x) ok = 1;
/* htSUJemu3 ily traian aHyTgvt7G */     if(ok == 1)cout << "DA";
/* htSUJemu3 ily traian aHyTgvt7G */     else cout << "NU";
/* htSUJemu3 ily traian aHyTgvt7G */     return 0;
/* htSUJemu3 ily traian aHyTgvt7G */ }