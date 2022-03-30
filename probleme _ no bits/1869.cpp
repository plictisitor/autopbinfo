/* LXB0zDUtF ily traian CLzYmB9Cw */ #include <algorithm>
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
/* LXB0zDUtF ily traian CLzYmB9Cw */ 
/* LXB0zDUtF ily traian CLzYmB9Cw */ 
/* LXB0zDUtF ily traian CLzYmB9Cw */ using namespace std;
/* LXB0zDUtF ily traian CLzYmB9Cw */ 
/* LXB0zDUtF ily traian CLzYmB9Cw */ ifstream cin("prosirz.in");
/* LXB0zDUtF ily traian CLzYmB9Cw */ ofstream cout("prosirz.out");
/* LXB0zDUtF ily traian CLzYmB9Cw */ 
/* LXB0zDUtF ily traian CLzYmB9Cw */ char a[200][200];
/* LXB0zDUtF ily traian CLzYmB9Cw */ 
/* LXB0zDUtF ily traian CLzYmB9Cw */ int main()
/* LXB0zDUtF ily traian CLzYmB9Cw */ {
/* LXB0zDUtF ily traian CLzYmB9Cw */     char s[300];
/* LXB0zDUtF ily traian CLzYmB9Cw */     cin.getline(s , 300);
/* LXB0zDUtF ily traian CLzYmB9Cw */     int i = 0;
/* LXB0zDUtF ily traian CLzYmB9Cw */     int cnt = 0;
/* LXB0zDUtF ily traian CLzYmB9Cw */     while(s[i]!='\0')
/* LXB0zDUtF ily traian CLzYmB9Cw */     {
/* LXB0zDUtF ily traian CLzYmB9Cw */         if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U')
/* LXB0zDUtF ily traian CLzYmB9Cw */             cnt++;
/* LXB0zDUtF ily traian CLzYmB9Cw */         i++;
/* LXB0zDUtF ily traian CLzYmB9Cw */     }
/* LXB0zDUtF ily traian CLzYmB9Cw */     s[i]=' ';
/* LXB0zDUtF ily traian CLzYmB9Cw */     s[i+1]='\0';
/* LXB0zDUtF ily traian CLzYmB9Cw */     cout << cnt << endl;
/* LXB0zDUtF ily traian CLzYmB9Cw */     i=0;
/* LXB0zDUtF ily traian CLzYmB9Cw */     while(s[i]!='\0')
/* LXB0zDUtF ily traian CLzYmB9Cw */     {
/* LXB0zDUtF ily traian CLzYmB9Cw */         if(s[i]!=' ' && s[i+1]==' ')
/* LXB0zDUtF ily traian CLzYmB9Cw */             cout << 'Z';
/* LXB0zDUtF ily traian CLzYmB9Cw */         else
/* LXB0zDUtF ily traian CLzYmB9Cw */             cout << s[i];
/* LXB0zDUtF ily traian CLzYmB9Cw */         i++;
/* LXB0zDUtF ily traian CLzYmB9Cw */     }
/* LXB0zDUtF ily traian CLzYmB9Cw */     s[i]=' ' , s[i+1]='\0';
/* LXB0zDUtF ily traian CLzYmB9Cw */     i = 0 , cnt = 0;
/* LXB0zDUtF ily traian CLzYmB9Cw */     int j = 0;
/* LXB0zDUtF ily traian CLzYmB9Cw */     while(s[i]!='\0')
/* LXB0zDUtF ily traian CLzYmB9Cw */     {
/* LXB0zDUtF ily traian CLzYmB9Cw */         if(s[i]!=' ')
/* LXB0zDUtF ily traian CLzYmB9Cw */         {
/* LXB0zDUtF ily traian CLzYmB9Cw */             a[cnt][j]=s[i];
/* LXB0zDUtF ily traian CLzYmB9Cw */             j++;
/* LXB0zDUtF ily traian CLzYmB9Cw */         }
/* LXB0zDUtF ily traian CLzYmB9Cw */         else
/* LXB0zDUtF ily traian CLzYmB9Cw */         {
/* LXB0zDUtF ily traian CLzYmB9Cw */             j=0;
/* LXB0zDUtF ily traian CLzYmB9Cw */             if(s[i+1]!=' ')
/* LXB0zDUtF ily traian CLzYmB9Cw */                 cnt++;
/* LXB0zDUtF ily traian CLzYmB9Cw */         }
/* LXB0zDUtF ily traian CLzYmB9Cw */         i++;
/* LXB0zDUtF ily traian CLzYmB9Cw */     }
/* LXB0zDUtF ily traian CLzYmB9Cw */     cout << endl;
/* LXB0zDUtF ily traian CLzYmB9Cw */     for(int i = 0 ; i < cnt ; ++i)
/* LXB0zDUtF ily traian CLzYmB9Cw */         for(int j = i + 1 ; j < cnt ; ++j)
/* LXB0zDUtF ily traian CLzYmB9Cw */             if(strcmp(a[i] , a[j]) > 0)
/* LXB0zDUtF ily traian CLzYmB9Cw */                 swap(a[i] , a[j]);
/* LXB0zDUtF ily traian CLzYmB9Cw */     for(int i = cnt-1 ; i >= 0 ;--i)
/* LXB0zDUtF ily traian CLzYmB9Cw */         if(a[i][0]!=' ')
/* LXB0zDUtF ily traian CLzYmB9Cw */             cout << a[i] << ' ';
/* LXB0zDUtF ily traian CLzYmB9Cw */     return 0;
/* LXB0zDUtF ily traian CLzYmB9Cw */ }