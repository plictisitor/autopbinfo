/* kRJNEI9NE ily traian DvTzaJa5J */ #include <algorithm>
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
/* kRJNEI9NE ily traian DvTzaJa5J */ using namespace std;
/* kRJNEI9NE ily traian DvTzaJa5J */ 
/* kRJNEI9NE ily traian DvTzaJa5J */ ifstream fin("nrlipsa1.in");
/* kRJNEI9NE ily traian DvTzaJa5J */ ofstream fout("nrlipsa1.out");
/* kRJNEI9NE ily traian DvTzaJa5J */ 
/* kRJNEI9NE ily traian DvTzaJa5J */ int main()
/* kRJNEI9NE ily traian DvTzaJa5J */ {
/* kRJNEI9NE ily traian DvTzaJa5J */     int f[100]={0};
/* kRJNEI9NE ily traian DvTzaJa5J */     int tmp , a , b , ok=0;
/* kRJNEI9NE ily traian DvTzaJa5J */     while(fin >> tmp)
/* kRJNEI9NE ily traian DvTzaJa5J */     {
/* kRJNEI9NE ily traian DvTzaJa5J */         if(tmp>9 && tmp<100)
/* kRJNEI9NE ily traian DvTzaJa5J */             f[tmp]++;
/* kRJNEI9NE ily traian DvTzaJa5J */     }
/* kRJNEI9NE ily traian DvTzaJa5J */     for(int i = 10 ; i <= 98 ; i+=2)
/* kRJNEI9NE ily traian DvTzaJa5J */     {
/* kRJNEI9NE ily traian DvTzaJa5J */         if(f[i]==0)
/* kRJNEI9NE ily traian DvTzaJa5J */         {
/* kRJNEI9NE ily traian DvTzaJa5J */             a=i;
/* kRJNEI9NE ily traian DvTzaJa5J */             ok++;
/* kRJNEI9NE ily traian DvTzaJa5J */             break;
/* kRJNEI9NE ily traian DvTzaJa5J */         }
/* kRJNEI9NE ily traian DvTzaJa5J */     }
/* kRJNEI9NE ily traian DvTzaJa5J */     for(int i = 98 ; i >= 10 ; i -=2)
/* kRJNEI9NE ily traian DvTzaJa5J */     {
/* kRJNEI9NE ily traian DvTzaJa5J */         if(f[i]==0)
/* kRJNEI9NE ily traian DvTzaJa5J */         {
/* kRJNEI9NE ily traian DvTzaJa5J */             b=i;
/* kRJNEI9NE ily traian DvTzaJa5J */             ok++;
/* kRJNEI9NE ily traian DvTzaJa5J */             break;
/* kRJNEI9NE ily traian DvTzaJa5J */         }
/* kRJNEI9NE ily traian DvTzaJa5J */     }
/* kRJNEI9NE ily traian DvTzaJa5J */     if(ok==2 && a!=b)
/* kRJNEI9NE ily traian DvTzaJa5J */     {
/* kRJNEI9NE ily traian DvTzaJa5J */         fout << a << ' ' << b;    
/* kRJNEI9NE ily traian DvTzaJa5J */     }
/* kRJNEI9NE ily traian DvTzaJa5J */     else
/* kRJNEI9NE ily traian DvTzaJa5J */     fout << "nu exista";
/* kRJNEI9NE ily traian DvTzaJa5J */     return 0;
/* kRJNEI9NE ily traian DvTzaJa5J */ }