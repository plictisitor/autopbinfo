/* 5rpq4B8iv ily traian mAeB1mx9h */ #include <algorithm>
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
/* 5rpq4B8iv ily traian mAeB1mx9h */ using namespace std;
/* 5rpq4B8iv ily traian mAeB1mx9h */ ifstream cin("nevricos.in");
/* 5rpq4B8iv ily traian mAeB1mx9h */ ofstream cout("nevricos.out");
/* 5rpq4B8iv ily traian mAeB1mx9h */ 
/* 5rpq4B8iv ily traian mAeB1mx9h */ int main()
/* 5rpq4B8iv ily traian mAeB1mx9h */ {
/* 5rpq4B8iv ily traian mAeB1mx9h */     long long int c = 0 , d = 0 , f1 = 0 , f2 = 0;
/* 5rpq4B8iv ily traian mAeB1mx9h */     char x , y;
/* 5rpq4B8iv ily traian mAeB1mx9h */     cin >> x;
/* 5rpq4B8iv ily traian mAeB1mx9h */     while(cin >> y)
/* 5rpq4B8iv ily traian mAeB1mx9h */     {
/* 5rpq4B8iv ily traian mAeB1mx9h */         if((x=='1' && y == '5') || (x=='2' && y=='4')) c++;
/* 5rpq4B8iv ily traian mAeB1mx9h */         if(x=='1') f1++;
/* 5rpq4B8iv ily traian mAeB1mx9h */         if(x=='2') f2++;
/* 5rpq4B8iv ily traian mAeB1mx9h */         if(y=='5') d +=f1;
/* 5rpq4B8iv ily traian mAeB1mx9h */         if(y=='4') d +=f2;
/* 5rpq4B8iv ily traian mAeB1mx9h */         x = y;
/* 5rpq4B8iv ily traian mAeB1mx9h */     }
/* 5rpq4B8iv ily traian mAeB1mx9h */     cout << c << '\n' << d;
/* 5rpq4B8iv ily traian mAeB1mx9h */     return 0;
/* 5rpq4B8iv ily traian mAeB1mx9h */ }