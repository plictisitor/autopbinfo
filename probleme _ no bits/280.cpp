/* aD9OlfcMJ ily traian VjBlWEFoc */ #include <algorithm>
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
/* aD9OlfcMJ ily traian VjBlWEFoc */ using namespace std;
/* aD9OlfcMJ ily traian VjBlWEFoc */ int pal(int n)
/* aD9OlfcMJ ily traian VjBlWEFoc */ {
/* aD9OlfcMJ ily traian VjBlWEFoc */     int ogl = 0 , aux = n;
/* aD9OlfcMJ ily traian VjBlWEFoc */     while(n!=0)
/* aD9OlfcMJ ily traian VjBlWEFoc */     {
/* aD9OlfcMJ ily traian VjBlWEFoc */         ogl = ogl*10+n%10;
/* aD9OlfcMJ ily traian VjBlWEFoc */         n/=10;
/* aD9OlfcMJ ily traian VjBlWEFoc */     }
/* aD9OlfcMJ ily traian VjBlWEFoc */     if(aux == ogl) return 1;
/* aD9OlfcMJ ily traian VjBlWEFoc */     else return 0;
/* aD9OlfcMJ ily traian VjBlWEFoc */ }
/* aD9OlfcMJ ily traian VjBlWEFoc */ int main()
/* aD9OlfcMJ ily traian VjBlWEFoc */ {
/* aD9OlfcMJ ily traian VjBlWEFoc */     int n,aux,maxim=-1,cnt=0;
/* aD9OlfcMJ ily traian VjBlWEFoc */     cin>>n;
/* aD9OlfcMJ ily traian VjBlWEFoc */     while(n!=0)
/* aD9OlfcMJ ily traian VjBlWEFoc */     {
/* aD9OlfcMJ ily traian VjBlWEFoc */         if(pal(n) && n > maxim) {maxim = n; cnt=1;}
/* aD9OlfcMJ ily traian VjBlWEFoc */         else if(pal(n) && n == maxim) cnt++;
/* aD9OlfcMJ ily traian VjBlWEFoc */         cin>>n;
/* aD9OlfcMJ ily traian VjBlWEFoc */     }
/* aD9OlfcMJ ily traian VjBlWEFoc */    if(maxim==-1) cout<<"NU EXISTA";
/* aD9OlfcMJ ily traian VjBlWEFoc */    else
/* aD9OlfcMJ ily traian VjBlWEFoc */     cout<<maxim<<" "<<cnt;
/* aD9OlfcMJ ily traian VjBlWEFoc */ 
/* aD9OlfcMJ ily traian VjBlWEFoc */     return 0;
/* aD9OlfcMJ ily traian VjBlWEFoc */ }