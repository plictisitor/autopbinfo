/* P0DAgCvxC ily traian uIBRQ9Gvh */ #include <algorithm>
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
/* P0DAgCvxC ily traian uIBRQ9Gvh */ 
/* P0DAgCvxC ily traian uIBRQ9Gvh */ using namespace std;
/* P0DAgCvxC ily traian uIBRQ9Gvh */ 
/* P0DAgCvxC ily traian uIBRQ9Gvh */ ifstream fin("paranteze1.in");
/* P0DAgCvxC ily traian uIBRQ9Gvh */ ofstream fout("paranteze1.out");
/* P0DAgCvxC ily traian uIBRQ9Gvh */ 
/* P0DAgCvxC ily traian uIBRQ9Gvh */ int main()
/* P0DAgCvxC ily traian uIBRQ9Gvh */ {
/* P0DAgCvxC ily traian uIBRQ9Gvh */     int n , k = 0;
/* P0DAgCvxC ily traian uIBRQ9Gvh */     char sir[300];
/* P0DAgCvxC ily traian uIBRQ9Gvh */     int ok=0;
/* P0DAgCvxC ily traian uIBRQ9Gvh */     fin >> n;
/* P0DAgCvxC ily traian uIBRQ9Gvh */     for(int i = 0 ; i < n ; ++i)
/* P0DAgCvxC ily traian uIBRQ9Gvh */     {
/* P0DAgCvxC ily traian uIBRQ9Gvh */         fin >> sir;
/* P0DAgCvxC ily traian uIBRQ9Gvh */         k=0;
/* P0DAgCvxC ily traian uIBRQ9Gvh */         ok=1;
/* P0DAgCvxC ily traian uIBRQ9Gvh */         for(int j = 0 ; j < strlen(sir) && ok ; ++j)
/* P0DAgCvxC ily traian uIBRQ9Gvh */             if(sir[j]=='(')
/* P0DAgCvxC ily traian uIBRQ9Gvh */                 k++;
/* P0DAgCvxC ily traian uIBRQ9Gvh */             else if(sir[j]==')' && k==0)
/* P0DAgCvxC ily traian uIBRQ9Gvh */                 ok=0;
/* P0DAgCvxC ily traian uIBRQ9Gvh */             else
/* P0DAgCvxC ily traian uIBRQ9Gvh */                 k--;
/* P0DAgCvxC ily traian uIBRQ9Gvh */         if(ok && k==0)
/* P0DAgCvxC ily traian uIBRQ9Gvh */             fout << 1 << endl;
/* P0DAgCvxC ily traian uIBRQ9Gvh */         else
/* P0DAgCvxC ily traian uIBRQ9Gvh */             fout << 0 << endl;            
/* P0DAgCvxC ily traian uIBRQ9Gvh */     }
/* P0DAgCvxC ily traian uIBRQ9Gvh */     return 0;
/* P0DAgCvxC ily traian uIBRQ9Gvh */ }