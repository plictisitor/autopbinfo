/* DtwZry2jj ily traian J1ZOYb6Wa */ #include <algorithm>
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
/* DtwZry2jj ily traian J1ZOYb6Wa */ 
/* DtwZry2jj ily traian J1ZOYb6Wa */ using namespace std;
/* DtwZry2jj ily traian J1ZOYb6Wa */ 
/* DtwZry2jj ily traian J1ZOYb6Wa */ char s[100001];
/* DtwZry2jj ily traian J1ZOYb6Wa */ deque<char> Q;
/* DtwZry2jj ily traian J1ZOYb6Wa */ 
/* DtwZry2jj ily traian J1ZOYb6Wa */ int main(){
/* DtwZry2jj ily traian J1ZOYb6Wa */     ios::sync_with_stdio(false);
/* DtwZry2jj ily traian J1ZOYb6Wa */     cin >> s;
/* DtwZry2jj ily traian J1ZOYb6Wa */     int i = 0;
/* DtwZry2jj ily traian J1ZOYb6Wa */     while(s[i]){
/* DtwZry2jj ily traian J1ZOYb6Wa */         Q.push_back(s[i]);
/* DtwZry2jj ily traian J1ZOYb6Wa */         i++;
/* DtwZry2jj ily traian J1ZOYb6Wa */     }
/* DtwZry2jj ily traian J1ZOYb6Wa */     int n;
/* DtwZry2jj ily traian J1ZOYb6Wa */     cin >> n;
/* DtwZry2jj ily traian J1ZOYb6Wa */     bool rasturnat = false;
/* DtwZry2jj ily traian J1ZOYb6Wa */     for(int i = 1; i <= n; ++i){
/* DtwZry2jj ily traian J1ZOYb6Wa */         int c;
/* DtwZry2jj ily traian J1ZOYb6Wa */         cin >> c;
/* DtwZry2jj ily traian J1ZOYb6Wa */         if(c == 1 || c == 2){
/* DtwZry2jj ily traian J1ZOYb6Wa */             char ch;
/* DtwZry2jj ily traian J1ZOYb6Wa */             cin >> ch;
/* DtwZry2jj ily traian J1ZOYb6Wa */             if(c == 1 && !rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.push_front(ch);
/* DtwZry2jj ily traian J1ZOYb6Wa */             else if(c == 1 && rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.push_back(ch);
/* DtwZry2jj ily traian J1ZOYb6Wa */             if(c == 2 && !rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.push_back(ch);
/* DtwZry2jj ily traian J1ZOYb6Wa */             else if(c == 2 && rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.push_front(ch);
/* DtwZry2jj ily traian J1ZOYb6Wa */         }
/* DtwZry2jj ily traian J1ZOYb6Wa */         else{
/* DtwZry2jj ily traian J1ZOYb6Wa */             if(c == 3 && !rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.pop_front();
/* DtwZry2jj ily traian J1ZOYb6Wa */             else if(c == 3 && rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.pop_back();
/* DtwZry2jj ily traian J1ZOYb6Wa */             if(c == 4 && !rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.pop_back();
/* DtwZry2jj ily traian J1ZOYb6Wa */             else if(c == 4 && rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 Q.pop_front();
/* DtwZry2jj ily traian J1ZOYb6Wa */             if(c == 5)
/* DtwZry2jj ily traian J1ZOYb6Wa */                 rasturnat = !rasturnat;
/* DtwZry2jj ily traian J1ZOYb6Wa */         }
/* DtwZry2jj ily traian J1ZOYb6Wa */     }
/* DtwZry2jj ily traian J1ZOYb6Wa */     if(rasturnat)
/* DtwZry2jj ily traian J1ZOYb6Wa */         while(!Q.empty()){
/* DtwZry2jj ily traian J1ZOYb6Wa */             cout << Q.back();
/* DtwZry2jj ily traian J1ZOYb6Wa */             Q.pop_back();
/* DtwZry2jj ily traian J1ZOYb6Wa */         }
/* DtwZry2jj ily traian J1ZOYb6Wa */     else
/* DtwZry2jj ily traian J1ZOYb6Wa */         while(!Q.empty()){
/* DtwZry2jj ily traian J1ZOYb6Wa */             cout << Q.front();
/* DtwZry2jj ily traian J1ZOYb6Wa */             Q.pop_front();
/* DtwZry2jj ily traian J1ZOYb6Wa */         }
/* DtwZry2jj ily traian J1ZOYb6Wa */     return 0;
/* DtwZry2jj ily traian J1ZOYb6Wa */ }