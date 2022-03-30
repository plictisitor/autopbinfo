/* eRrfAh3rF ily traian MApD0077G */ #include <algorithm>
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
/* eRrfAh3rF ily traian MApD0077G */ using namespace std;
/* eRrfAh3rF ily traian MApD0077G */ int cifre_comune(int a,int b)
/* eRrfAh3rF ily traian MApD0077G */ {
/* eRrfAh3rF ily traian MApD0077G */     bool gasit=false;
/* eRrfAh3rF ily traian MApD0077G */      while(a>0)
/* eRrfAh3rF ily traian MApD0077G */     {
/* eRrfAh3rF ily traian MApD0077G */         int aux=b;
/* eRrfAh3rF ily traian MApD0077G */         while(aux>0)
/* eRrfAh3rF ily traian MApD0077G */         {
/* eRrfAh3rF ily traian MApD0077G */             if(a%10==aux%10) gasit=true;
/* eRrfAh3rF ily traian MApD0077G */             aux=aux/10;
/* eRrfAh3rF ily traian MApD0077G */         }
/* eRrfAh3rF ily traian MApD0077G */         a=a/10;
/* eRrfAh3rF ily traian MApD0077G */     }
/* eRrfAh3rF ily traian MApD0077G */     if(gasit==true) return 1;
/* eRrfAh3rF ily traian MApD0077G */     else return 0;
/* eRrfAh3rF ily traian MApD0077G */ 
/* eRrfAh3rF ily traian MApD0077G */ }
/* eRrfAh3rF ily traian MApD0077G */ int main()
/* eRrfAh3rF ily traian MApD0077G */ {
/* eRrfAh3rF ily traian MApD0077G */     int n;
/* eRrfAh3rF ily traian MApD0077G */     cin>>n;
/* eRrfAh3rF ily traian MApD0077G */     if(n==1) cout<<0;
/* eRrfAh3rF ily traian MApD0077G */     else {
/* eRrfAh3rF ily traian MApD0077G */     for(int i=1;i<=n;i++)
/* eRrfAh3rF ily traian MApD0077G */     {
/* eRrfAh3rF ily traian MApD0077G */         if(cifre_comune(i*i,i*i*i)==0) cout<<i<<" ";
/* eRrfAh3rF ily traian MApD0077G */     }
/* eRrfAh3rF ily traian MApD0077G */     }
/* eRrfAh3rF ily traian MApD0077G */     return 0;
/* eRrfAh3rF ily traian MApD0077G */ }