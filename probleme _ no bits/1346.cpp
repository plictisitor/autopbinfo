/* 0rOhNHcAn ily traian t3xNY5vhn */ #include <algorithm>
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
/* 0rOhNHcAn ily traian t3xNY5vhn */ using namespace std;
/* 0rOhNHcAn ily traian t3xNY5vhn */ 
/* 0rOhNHcAn ily traian t3xNY5vhn */ ifstream cin("pbinfo.in");
/* 0rOhNHcAn ily traian t3xNY5vhn */ ofstream cout("pbinfo.out");
/* 0rOhNHcAn ily traian t3xNY5vhn */ 
/* 0rOhNHcAn ily traian t3xNY5vhn */ int main()
/* 0rOhNHcAn ily traian t3xNY5vhn */ {
/* 0rOhNHcAn ily traian t3xNY5vhn */     char a[101] , b[101];
/* 0rOhNHcAn ily traian t3xNY5vhn */     cin.getline(a , 101);
/* 0rOhNHcAn ily traian t3xNY5vhn */     int n;
/* 0rOhNHcAn ily traian t3xNY5vhn */     cin >> n;
/* 0rOhNHcAn ily traian t3xNY5vhn */     bool ok=false;
/* 0rOhNHcAn ily traian t3xNY5vhn */     for(int k = 0 ; k < n ; ++k)
/* 0rOhNHcAn ily traian t3xNY5vhn */     {
/* 0rOhNHcAn ily traian t3xNY5vhn */         cin >> b;
/* 0rOhNHcAn ily traian t3xNY5vhn */         int i = 0;
/* 0rOhNHcAn ily traian t3xNY5vhn */         while(a[i]!='\0')
/* 0rOhNHcAn ily traian t3xNY5vhn */         {
/* 0rOhNHcAn ily traian t3xNY5vhn */             int j = 0;
/* 0rOhNHcAn ily traian t3xNY5vhn */             bool adev=true;
/* 0rOhNHcAn ily traian t3xNY5vhn */             while(b[j]!='\0')
/* 0rOhNHcAn ily traian t3xNY5vhn */             {
/* 0rOhNHcAn ily traian t3xNY5vhn */                 if(a[i+j]!=b[j])
/* 0rOhNHcAn ily traian t3xNY5vhn */                     adev=false;
/* 0rOhNHcAn ily traian t3xNY5vhn */                 j++;
/* 0rOhNHcAn ily traian t3xNY5vhn */             }
/* 0rOhNHcAn ily traian t3xNY5vhn */             if(adev)
/* 0rOhNHcAn ily traian t3xNY5vhn */                 ok=true;
/* 0rOhNHcAn ily traian t3xNY5vhn */             i++;    
/* 0rOhNHcAn ily traian t3xNY5vhn */         }
/* 0rOhNHcAn ily traian t3xNY5vhn */     }
/* 0rOhNHcAn ily traian t3xNY5vhn */     int i = 0;
/* 0rOhNHcAn ily traian t3xNY5vhn */     b[0]='v' , b[1]='i' , b[2]='r' , b[3]='u' , b[4]='s' , b[5]='\0';
/* 0rOhNHcAn ily traian t3xNY5vhn */     while(a[i]!='\0')
/* 0rOhNHcAn ily traian t3xNY5vhn */     {
/* 0rOhNHcAn ily traian t3xNY5vhn */         int j = 0;
/* 0rOhNHcAn ily traian t3xNY5vhn */         bool adev=true;
/* 0rOhNHcAn ily traian t3xNY5vhn */         while(b[j]!='\0')
/* 0rOhNHcAn ily traian t3xNY5vhn */         {
/* 0rOhNHcAn ily traian t3xNY5vhn */             if(a[i+j]!=b[j])
/* 0rOhNHcAn ily traian t3xNY5vhn */                 adev=false;
/* 0rOhNHcAn ily traian t3xNY5vhn */             j++;
/* 0rOhNHcAn ily traian t3xNY5vhn */         }
/* 0rOhNHcAn ily traian t3xNY5vhn */         if(adev)
/* 0rOhNHcAn ily traian t3xNY5vhn */             ok=true;
/* 0rOhNHcAn ily traian t3xNY5vhn */         i++;    
/* 0rOhNHcAn ily traian t3xNY5vhn */     }
/* 0rOhNHcAn ily traian t3xNY5vhn */     if(ok)
/* 0rOhNHcAn ily traian t3xNY5vhn */         cout << "DA";
/* 0rOhNHcAn ily traian t3xNY5vhn */     else
/* 0rOhNHcAn ily traian t3xNY5vhn */         cout << "NU";
/* 0rOhNHcAn ily traian t3xNY5vhn */     return 0;    
/* 0rOhNHcAn ily traian t3xNY5vhn */ }