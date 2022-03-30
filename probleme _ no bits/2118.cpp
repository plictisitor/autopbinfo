/* KywLA7LSe ily traian FxDIan4CQ */ #include <algorithm>
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
/* KywLA7LSe ily traian FxDIan4CQ */ 
/* KywLA7LSe ily traian FxDIan4CQ */ using namespace std;
/* KywLA7LSe ily traian FxDIan4CQ */ 
/* KywLA7LSe ily traian FxDIan4CQ */ ifstream cin("minlex.in");
/* KywLA7LSe ily traian FxDIan4CQ */ ofstream cout("minlex.out");
/* KywLA7LSe ily traian FxDIan4CQ */ 
/* KywLA7LSe ily traian FxDIan4CQ */ int main()
/* KywLA7LSe ily traian FxDIan4CQ */ {
/* KywLA7LSe ily traian FxDIan4CQ */     char s[200001];
/* KywLA7LSe ily traian FxDIan4CQ */     cin >> s;
/* KywLA7LSe ily traian FxDIan4CQ */     char sir[200001];
/* KywLA7LSe ily traian FxDIan4CQ */     int i = 0;
/* KywLA7LSe ily traian FxDIan4CQ */     int h = strlen(s);
/* KywLA7LSe ily traian FxDIan4CQ */     while(s[i]!='\0')
/* KywLA7LSe ily traian FxDIan4CQ */     {
/* KywLA7LSe ily traian FxDIan4CQ */         sir[i]=s[i];
/* KywLA7LSe ily traian FxDIan4CQ */         sir[h + i]=s[i];
/* KywLA7LSe ily traian FxDIan4CQ */         ++i;
/* KywLA7LSe ily traian FxDIan4CQ */     }
/* KywLA7LSe ily traian FxDIan4CQ */     int iva=0;
/* KywLA7LSe ily traian FxDIan4CQ */     for(int i = 0 ; i < h ; ++i)
/* KywLA7LSe ily traian FxDIan4CQ */         if(strcmp(sir + i , s) < 0)
/* KywLA7LSe ily traian FxDIan4CQ */         {
/* KywLA7LSe ily traian FxDIan4CQ */             strcpy(s , sir+i);
/* KywLA7LSe ily traian FxDIan4CQ */             iva=i;
/* KywLA7LSe ily traian FxDIan4CQ */         }
/* KywLA7LSe ily traian FxDIan4CQ */     cout << iva;
/* KywLA7LSe ily traian FxDIan4CQ */     return 0;
/* KywLA7LSe ily traian FxDIan4CQ */ }