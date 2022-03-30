/* uAuVYGufZ ily traian dtfW7NVNZ */ #include <algorithm>
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
/* uAuVYGufZ ily traian dtfW7NVNZ */ 
/* uAuVYGufZ ily traian dtfW7NVNZ */ using namespace std;
/* uAuVYGufZ ily traian dtfW7NVNZ */ 
/* uAuVYGufZ ily traian dtfW7NVNZ */ bool palindrom(char s[])
/* uAuVYGufZ ily traian dtfW7NVNZ */ {
/* uAuVYGufZ ily traian dtfW7NVNZ */     for(int i = 0 , j = strlen(s)-1; i < j ; ++i , --j)
/* uAuVYGufZ ily traian dtfW7NVNZ */     if(s[i]!=s[j])
/* uAuVYGufZ ily traian dtfW7NVNZ */     return 0;
/* uAuVYGufZ ily traian dtfW7NVNZ */     return 1;
/* uAuVYGufZ ily traian dtfW7NVNZ */ 
/* uAuVYGufZ ily traian dtfW7NVNZ */ }
/* uAuVYGufZ ily traian dtfW7NVNZ */ 
/* uAuVYGufZ ily traian dtfW7NVNZ */ int main()
/* uAuVYGufZ ily traian dtfW7NVNZ */ {
/* uAuVYGufZ ily traian dtfW7NVNZ */     char s[256] , *p , pal[11]="zzzzzzzzzz";
/* uAuVYGufZ ily traian dtfW7NVNZ */     cin.getline(s , 256);
/* uAuVYGufZ ily traian dtfW7NVNZ */     p = strtok(s , " .,");
/* uAuVYGufZ ily traian dtfW7NVNZ */     bool gasit = false;
/* uAuVYGufZ ily traian dtfW7NVNZ */     while(p)
/* uAuVYGufZ ily traian dtfW7NVNZ */     {
/* uAuVYGufZ ily traian dtfW7NVNZ */         if(palindrom(p))
/* uAuVYGufZ ily traian dtfW7NVNZ */             if(strcmp(p , pal) < 0) strcpy(pal , p) , gasit = 1;
/* uAuVYGufZ ily traian dtfW7NVNZ */         p = strtok(NULL , " .,");
/* uAuVYGufZ ily traian dtfW7NVNZ */     }
/* uAuVYGufZ ily traian dtfW7NVNZ */     if(gasit)
/* uAuVYGufZ ily traian dtfW7NVNZ */         cout << pal;
/* uAuVYGufZ ily traian dtfW7NVNZ */     else
/* uAuVYGufZ ily traian dtfW7NVNZ */         cout << "IMPOSIBIL";
/* uAuVYGufZ ily traian dtfW7NVNZ */     return 0;
/* uAuVYGufZ ily traian dtfW7NVNZ */ }