/* 3vYtOF7bu ily traian HqZLZlJLg */ #include <algorithm>
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
/* 3vYtOF7bu ily traian HqZLZlJLg */ using namespace std;
/* 3vYtOF7bu ily traian HqZLZlJLg */ 
/* 3vYtOF7bu ily traian HqZLZlJLg */ ifstream cin("grupuri.in");
/* 3vYtOF7bu ily traian HqZLZlJLg */ ofstream cout("grupuri.out");
/* 3vYtOF7bu ily traian HqZLZlJLg */ 
/* 3vYtOF7bu ily traian HqZLZlJLg */ int a[102][102];
/* 3vYtOF7bu ily traian HqZLZlJLg */ 
/* 3vYtOF7bu ily traian HqZLZlJLg */ void fill(int i, int j, int c)
/* 3vYtOF7bu ily traian HqZLZlJLg */ {
/* 3vYtOF7bu ily traian HqZLZlJLg */     a[i][j] = c;
/* 3vYtOF7bu ily traian HqZLZlJLg */     if(a[i-1][j] == 1) 
/* 3vYtOF7bu ily traian HqZLZlJLg */       fill(i-1, j, c);
/* 3vYtOF7bu ily traian HqZLZlJLg */     if(a[i][j+1] == 1)
/* 3vYtOF7bu ily traian HqZLZlJLg */       fill(i, j+1, c);
/* 3vYtOF7bu ily traian HqZLZlJLg */     if(a[i+1][j] == 1) 
/* 3vYtOF7bu ily traian HqZLZlJLg */       fill(i+1, j, c);
/* 3vYtOF7bu ily traian HqZLZlJLg */     if(a[i][j-1] == 1) 
/* 3vYtOF7bu ily traian HqZLZlJLg */       fill(i, j-1, c);
/* 3vYtOF7bu ily traian HqZLZlJLg */ }
/* 3vYtOF7bu ily traian HqZLZlJLg */ 
/* 3vYtOF7bu ily traian HqZLZlJLg */ int main()
/* 3vYtOF7bu ily traian HqZLZlJLg */ {
/* 3vYtOF7bu ily traian HqZLZlJLg */     int n, c = 0;
/* 3vYtOF7bu ily traian HqZLZlJLg */     cin >> n;
/* 3vYtOF7bu ily traian HqZLZlJLg */     for(int i = 1; i <= n; i++)
/* 3vYtOF7bu ily traian HqZLZlJLg */         for(int j = 1; j <=n; j++)
/* 3vYtOF7bu ily traian HqZLZlJLg */             cin >> a[i][j];
/* 3vYtOF7bu ily traian HqZLZlJLg */     for(int i = 1; i <= n; i++)
/* 3vYtOF7bu ily traian HqZLZlJLg */         for(int j = 1; j <= n; j++)
/* 3vYtOF7bu ily traian HqZLZlJLg */             if(a[i][j] == 1)
/* 3vYtOF7bu ily traian HqZLZlJLg */             {
/* 3vYtOF7bu ily traian HqZLZlJLg */                 c++;
/* 3vYtOF7bu ily traian HqZLZlJLg */                 fill(i, j, c + 1);
/* 3vYtOF7bu ily traian HqZLZlJLg */             }
/* 3vYtOF7bu ily traian HqZLZlJLg */     cout << c;
/* 3vYtOF7bu ily traian HqZLZlJLg */     return 0;
/* 3vYtOF7bu ily traian HqZLZlJLg */ }