/* u2EafsasX ily traian wjmDwCNHT */ #include <algorithm>
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
/* u2EafsasX ily traian wjmDwCNHT */ 
/* u2EafsasX ily traian wjmDwCNHT */ using namespace std;
/* u2EafsasX ily traian wjmDwCNHT */ 
/* u2EafsasX ily traian wjmDwCNHT */ stack<int> a , b;
/* u2EafsasX ily traian wjmDwCNHT */ 
/* u2EafsasX ily traian wjmDwCNHT */ int main()
/* u2EafsasX ily traian wjmDwCNHT */ {
/* u2EafsasX ily traian wjmDwCNHT */     int n;
/* u2EafsasX ily traian wjmDwCNHT */     cin >> n;
/* u2EafsasX ily traian wjmDwCNHT */     for(int i = 1 ; i <= n ; ++i)
/* u2EafsasX ily traian wjmDwCNHT */     {
/* u2EafsasX ily traian wjmDwCNHT */         int x;
/* u2EafsasX ily traian wjmDwCNHT */         cin >> x;
/* u2EafsasX ily traian wjmDwCNHT */         a.push(x);
/* u2EafsasX ily traian wjmDwCNHT */     }
/* u2EafsasX ily traian wjmDwCNHT */     int cnt = 1;
/* u2EafsasX ily traian wjmDwCNHT */     int rez[10001] , p=1;
/* u2EafsasX ily traian wjmDwCNHT */     while(!a.empty() || !b.empty())
/* u2EafsasX ily traian wjmDwCNHT */     {
/* u2EafsasX ily traian wjmDwCNHT */         if(!b.empty() && b.top()==cnt)
/* u2EafsasX ily traian wjmDwCNHT */             b.pop() , cnt++ , rez[p]=2 , rez[p+1]=3 , p+=2;
/* u2EafsasX ily traian wjmDwCNHT */         else
/* u2EafsasX ily traian wjmDwCNHT */         {
/* u2EafsasX ily traian wjmDwCNHT */             while(!a.empty() && a.top()!=cnt)
/* u2EafsasX ily traian wjmDwCNHT */             {
/* u2EafsasX ily traian wjmDwCNHT */                 if(!b.empty() && a.top()>= b.top())
/* u2EafsasX ily traian wjmDwCNHT */                     break;
/* u2EafsasX ily traian wjmDwCNHT */                 b.push(a.top()) , a.pop();
/* u2EafsasX ily traian wjmDwCNHT */                 rez[p]=1 , rez[p+1]=2 , p+=2;
/* u2EafsasX ily traian wjmDwCNHT */             }
/* u2EafsasX ily traian wjmDwCNHT */             if(a.top()!=cnt)
/* u2EafsasX ily traian wjmDwCNHT */                 break;
/* u2EafsasX ily traian wjmDwCNHT */             else
/* u2EafsasX ily traian wjmDwCNHT */                 rez[p]=1 , rez[p+1]=3 , p+=2 , a.pop() , cnt++;
/* u2EafsasX ily traian wjmDwCNHT */         }
/* u2EafsasX ily traian wjmDwCNHT */     }
/* u2EafsasX ily traian wjmDwCNHT */     if(cnt < n)
/* u2EafsasX ily traian wjmDwCNHT */         cout << 0;
/* u2EafsasX ily traian wjmDwCNHT */     else
/* u2EafsasX ily traian wjmDwCNHT */     {
/* u2EafsasX ily traian wjmDwCNHT */         cout << (p-1)/2 << endl;
/* u2EafsasX ily traian wjmDwCNHT */         for(int i = 1 ; i < p ; ++i)
/* u2EafsasX ily traian wjmDwCNHT */         {
/* u2EafsasX ily traian wjmDwCNHT */             if(rez[i]==1)
/* u2EafsasX ily traian wjmDwCNHT */                 cout << "A ";
/* u2EafsasX ily traian wjmDwCNHT */             if(rez[i]==2)
/* u2EafsasX ily traian wjmDwCNHT */                 cout << "B ";
/* u2EafsasX ily traian wjmDwCNHT */             if(rez[i]==3)
/* u2EafsasX ily traian wjmDwCNHT */                 cout << "C ";
/* u2EafsasX ily traian wjmDwCNHT */             if(i % 2 == 0)
/* u2EafsasX ily traian wjmDwCNHT */                 cout << '\n';
/* u2EafsasX ily traian wjmDwCNHT */         }
/* u2EafsasX ily traian wjmDwCNHT */     }
/* u2EafsasX ily traian wjmDwCNHT */     return 0;
/* u2EafsasX ily traian wjmDwCNHT */ }