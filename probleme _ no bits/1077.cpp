/* JMgpjTLiH ily traian CGwko3C3O */ #include <algorithm>
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
/* JMgpjTLiH ily traian CGwko3C3O */ using namespace std;
/* JMgpjTLiH ily traian CGwko3C3O */ 
/* JMgpjTLiH ily traian CGwko3C3O */ ifstream cin("litere.in");
/* JMgpjTLiH ily traian CGwko3C3O */ ofstream cout("litere.out");
/* JMgpjTLiH ily traian CGwko3C3O */ 
/* JMgpjTLiH ily traian CGwko3C3O */ int a[10001] , f[30];
/* JMgpjTLiH ily traian CGwko3C3O */ 
/* JMgpjTLiH ily traian CGwko3C3O */ int v[10001] , r[10001];
/* JMgpjTLiH ily traian CGwko3C3O */ 
/* JMgpjTLiH ily traian CGwko3C3O */ char s[10001];
/* JMgpjTLiH ily traian CGwko3C3O */ int n , k;
/* JMgpjTLiH ily traian CGwko3C3O */ 
/* JMgpjTLiH ily traian CGwko3C3O */ bool voc(char ch)
/* JMgpjTLiH ily traian CGwko3C3O */ {
/* JMgpjTLiH ily traian CGwko3C3O */     return ch == 'A' || ch == 'E' || ch == 'U' || ch == 'I' || ch == 'O';
/* JMgpjTLiH ily traian CGwko3C3O */ }
/* JMgpjTLiH ily traian CGwko3C3O */ 
/* JMgpjTLiH ily traian CGwko3C3O */ int main()
/* JMgpjTLiH ily traian CGwko3C3O */ {
/* JMgpjTLiH ily traian CGwko3C3O */     cin >> n;
/* JMgpjTLiH ily traian CGwko3C3O */     cin >> s;
/* JMgpjTLiH ily traian CGwko3C3O */     cin >> k;
/* JMgpjTLiH ily traian CGwko3C3O */     int j = 0;
/* JMgpjTLiH ily traian CGwko3C3O */     for(int i = 1 ; i <= k ; ++i)
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         int x;
/* JMgpjTLiH ily traian CGwko3C3O */         cin >> x;
/* JMgpjTLiH ily traian CGwko3C3O */         while(f[(int)s[j]-(int)'A']!=0)
/* JMgpjTLiH ily traian CGwko3C3O */             j++;
/* JMgpjTLiH ily traian CGwko3C3O */         a[(int)s[j]-(int)'A'] = x , f[(int)s[j]-(int)'A']=1;
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     int cnt = 0;
/* JMgpjTLiH ily traian CGwko3C3O */     j = 1;
/* JMgpjTLiH ily traian CGwko3C3O */     while(s[j])
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         if((voc(s[j]) && !voc(s[j-1])) || (voc(s[j-1]) && !voc(s[j])))
/* JMgpjTLiH ily traian CGwko3C3O */            cnt++;
/* JMgpjTLiH ily traian CGwko3C3O */         j++;
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     cout << cnt << endl;
/* JMgpjTLiH ily traian CGwko3C3O */     j = 0;
/* JMgpjTLiH ily traian CGwko3C3O */     while(s[j])
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         cout << a[(int)s[j]-(int)'A'];
/* JMgpjTLiH ily traian CGwko3C3O */         j++;
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     cout << endl;
/* JMgpjTLiH ily traian CGwko3C3O */     j--;
/* JMgpjTLiH ily traian CGwko3C3O */     int p = 0;
/* JMgpjTLiH ily traian CGwko3C3O */     while(j >= 0)
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         v[p]=a[(int)s[j]-(int)'A'];
/* JMgpjTLiH ily traian CGwko3C3O */         p++;
/* JMgpjTLiH ily traian CGwko3C3O */         j--;
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     for(int i = 0 ; i < p ; ++i)
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         v[i] = v[i] * (p - i);
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     for(int i = 0 ; i < p ; ++i)
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         int c = v[i] / 10;
/* JMgpjTLiH ily traian CGwko3C3O */         v[i] = v[i] % 10;
/* JMgpjTLiH ily traian CGwko3C3O */         v[i + 1] += c;
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     for(int i = 0 ; i < p ; ++i)
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         r[i]=v[i];
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     int ind = p;
/* JMgpjTLiH ily traian CGwko3C3O */     while(v[p])
/* JMgpjTLiH ily traian CGwko3C3O */     {
/* JMgpjTLiH ily traian CGwko3C3O */         r[ind]=v[p]%10 , ind++;
/* JMgpjTLiH ily traian CGwko3C3O */         v[p]/=10;
/* JMgpjTLiH ily traian CGwko3C3O */     }
/* JMgpjTLiH ily traian CGwko3C3O */     for(int i = ind-1 ; i >= 0 ; --i)
/* JMgpjTLiH ily traian CGwko3C3O */         cout << r[i];
/* JMgpjTLiH ily traian CGwko3C3O */     return 0;
/* JMgpjTLiH ily traian CGwko3C3O */ }