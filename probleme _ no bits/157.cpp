/* 9w84NEAFg ily traian 7D89iao3O */ #include <algorithm>
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
/* 9w84NEAFg ily traian 7D89iao3O */ using namespace std;
/* 9w84NEAFg ily traian 7D89iao3O */ 
/* 9w84NEAFg ily traian 7D89iao3O */ ifstream cin("doarvocale.in");
/* 9w84NEAFg ily traian 7D89iao3O */ ofstream cout("doarvocale.out");
/* 9w84NEAFg ily traian 7D89iao3O */ 
/* 9w84NEAFg ily traian 7D89iao3O */ int main()
/* 9w84NEAFg ily traian 7D89iao3O */ {
/* 9w84NEAFg ily traian 7D89iao3O */     char ch[300];
/* 9w84NEAFg ily traian 7D89iao3O */     int n;
/* 9w84NEAFg ily traian 7D89iao3O */     cin >> n;
/* 9w84NEAFg ily traian 7D89iao3O */     int cnt=0;
/* 9w84NEAFg ily traian 7D89iao3O */     for(int k = 0 ; k < n ; ++k)
/* 9w84NEAFg ily traian 7D89iao3O */     {
/* 9w84NEAFg ily traian 7D89iao3O */         cin >> ch;
/* 9w84NEAFg ily traian 7D89iao3O */         int i = 0;
/* 9w84NEAFg ily traian 7D89iao3O */         bool adev=true;
/* 9w84NEAFg ily traian 7D89iao3O */         while(ch[i]!='\0')
/* 9w84NEAFg ily traian 7D89iao3O */         {
/* 9w84NEAFg ily traian 7D89iao3O */             if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='o' && ch[i]!='u')
/* 9w84NEAFg ily traian 7D89iao3O */                 adev=false;
/* 9w84NEAFg ily traian 7D89iao3O */             i++;    
/* 9w84NEAFg ily traian 7D89iao3O */         }
/* 9w84NEAFg ily traian 7D89iao3O */         if(adev)
/* 9w84NEAFg ily traian 7D89iao3O */             cnt++;
/* 9w84NEAFg ily traian 7D89iao3O */         
/* 9w84NEAFg ily traian 7D89iao3O */     }
/* 9w84NEAFg ily traian 7D89iao3O */     cout << cnt;
/* 9w84NEAFg ily traian 7D89iao3O */     return 0;    
/* 9w84NEAFg ily traian 7D89iao3O */ }