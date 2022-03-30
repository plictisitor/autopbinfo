/* r06em04z7 ily traian S6WkiImPF */ #include <algorithm>
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
/* r06em04z7 ily traian S6WkiImPF */ using namespace std;
/* r06em04z7 ily traian S6WkiImPF */ 
/* r06em04z7 ily traian S6WkiImPF */ int main()
/* r06em04z7 ily traian S6WkiImPF */ {
/* r06em04z7 ily traian S6WkiImPF */     char ch[101];
/* r06em04z7 ily traian S6WkiImPF */     cin.getline(ch , 101);
/* r06em04z7 ily traian S6WkiImPF */     int i = 0;
/* r06em04z7 ily traian S6WkiImPF */     int ok = 0;
/* r06em04z7 ily traian S6WkiImPF */     while(ch[i]!='\0')
/* r06em04z7 ily traian S6WkiImPF */     {
/* r06em04z7 ily traian S6WkiImPF */         if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o'  || ch[i]=='u')
/* r06em04z7 ily traian S6WkiImPF */         {
/* r06em04z7 ily traian S6WkiImPF */             //cout << ch[i] << '*';
/* r06em04z7 ily traian S6WkiImPF */             ok++;
/* r06em04z7 ily traian S6WkiImPF */         }
/* r06em04z7 ily traian S6WkiImPF */         //else
/* r06em04z7 ily traian S6WkiImPF */         //    cout << ch[i];
/* r06em04z7 ily traian S6WkiImPF */         i++;
/* r06em04z7 ily traian S6WkiImPF */     }
/* r06em04z7 ily traian S6WkiImPF */     if(ok==0)
/* r06em04z7 ily traian S6WkiImPF */         cout << "FARA VOCALE";
/* r06em04z7 ily traian S6WkiImPF */     else
/* r06em04z7 ily traian S6WkiImPF */     {
/* r06em04z7 ily traian S6WkiImPF */        i =0;
/* r06em04z7 ily traian S6WkiImPF */     while(ch[i]!='\0')
/* r06em04z7 ily traian S6WkiImPF */     {
/* r06em04z7 ily traian S6WkiImPF */         if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o'  || ch[i]=='u')
/* r06em04z7 ily traian S6WkiImPF */         {
/* r06em04z7 ily traian S6WkiImPF */             cout << ch[i] << '*';
/* r06em04z7 ily traian S6WkiImPF */             ok++;
/* r06em04z7 ily traian S6WkiImPF */         }
/* r06em04z7 ily traian S6WkiImPF */         else
/* r06em04z7 ily traian S6WkiImPF */             cout << ch[i];
/* r06em04z7 ily traian S6WkiImPF */         i++;
/* r06em04z7 ily traian S6WkiImPF */     }
/* r06em04z7 ily traian S6WkiImPF */     }
/* r06em04z7 ily traian S6WkiImPF */     return 0;    
/* r06em04z7 ily traian S6WkiImPF */ }