/* 9A6pIKXWV ily traian mAMMmdShA */ #include <algorithm>
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
/* 9A6pIKXWV ily traian mAMMmdShA */ using namespace std;
/* 9A6pIKXWV ily traian mAMMmdShA */ 
/* 9A6pIKXWV ily traian mAMMmdShA */ int main()
/* 9A6pIKXWV ily traian mAMMmdShA */ {
/* 9A6pIKXWV ily traian mAMMmdShA */     long long int n;
/* 9A6pIKXWV ily traian mAMMmdShA */     cin >> n;
/* 9A6pIKXWV ily traian mAMMmdShA */     int v[11] , p = 0;
/* 9A6pIKXWV ily traian mAMMmdShA */     while(n)
/* 9A6pIKXWV ily traian mAMMmdShA */     {
/* 9A6pIKXWV ily traian mAMMmdShA */         v[p++]=n%10;
/* 9A6pIKXWV ily traian mAMMmdShA */         n/=10;
/* 9A6pIKXWV ily traian mAMMmdShA */     }
/* 9A6pIKXWV ily traian mAMMmdShA */     for(int i = p - 1 ; i >= 0 ; --i)
/* 9A6pIKXWV ily traian mAMMmdShA */     {
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 1)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "  @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << " @@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "  @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "  @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 2)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@  @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "  @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << " @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 3)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "    @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "    @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 4)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "    @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "    @\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 5)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@    \n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "    @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 6)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@    \n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 7)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "  @@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "   @\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 8)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 9)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "    @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "    @\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */         if(v[i] == 0)
/* 9A6pIKXWV ily traian mAMMmdShA */         {
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@   @\n";
/* 9A6pIKXWV ily traian mAMMmdShA */             cout << "@@@@@\n";cout << endl;
/* 9A6pIKXWV ily traian mAMMmdShA */         }
/* 9A6pIKXWV ily traian mAMMmdShA */     }
/* 9A6pIKXWV ily traian mAMMmdShA */     return 0;
/* 9A6pIKXWV ily traian mAMMmdShA */ }