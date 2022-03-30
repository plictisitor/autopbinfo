/* hjpRwLJby ily traian 0nCNX175a */ #include <algorithm>
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
#endif/* hjpRwLJby ily traian 0nCNX175a */ using namespace std;/* hjpRwLJby ily traian 0nCNX175a */ ifstream fin("cuvinte3.in");/* hjpRwLJby ily traian 0nCNX175a */ ofstream fout("cuvinte3.out");/* hjpRwLJby ily traian 0nCNX175a */ char m[505][256];/* hjpRwLJby ily traian 0nCNX175a */ int n;/* hjpRwLJby ily traian 0nCNX175a */ void to_lower(char p[])/* hjpRwLJby ily traian 0nCNX175a */ {/* hjpRwLJby ily traian 0nCNX175a */     for(int i = 0 ; p[i] ; i++)/* hjpRwLJby ily traian 0nCNX175a */         p[i] = tolower(p[i]);/* hjpRwLJby ily traian 0nCNX175a */ }/* hjpRwLJby ily traian 0nCNX175a */ bool verif(char p[])/* hjpRwLJby ily traian 0nCNX175a */ {/* hjpRwLJby ily traian 0nCNX175a */     char t[256];/* hjpRwLJby ily traian 0nCNX175a */     strcpy(t , p);/* hjpRwLJby ily traian 0nCNX175a */     to_lower(t);/* hjpRwLJby ily traian 0nCNX175a */     if( strstr(t , "ate") )/* hjpRwLJby ily traian 0nCNX175a */         return true;/* hjpRwLJby ily traian 0nCNX175a */     return false;/* hjpRwLJby ily traian 0nCNX175a */ }/* hjpRwLJby ily traian 0nCNX175a */ bool egale(char a[] , char b[])/* hjpRwLJby ily traian 0nCNX175a */ {/* hjpRwLJby ily traian 0nCNX175a */     char s1[256], s2[256];/* hjpRwLJby ily traian 0nCNX175a */     strcpy(s1, a);/* hjpRwLJby ily traian 0nCNX175a */     strcpy(s2 , b);/* hjpRwLJby ily traian 0nCNX175a */     to_lower(s1); to_lower(s2);/* hjpRwLJby ily traian 0nCNX175a */     if(strcmp(s1 , s2) == 0)/* hjpRwLJby ily traian 0nCNX175a */         return true;/* hjpRwLJby ily traian 0nCNX175a */     return false;/* hjpRwLJby ily traian 0nCNX175a */ }/* hjpRwLJby ily traian 0nCNX175a */ int main()/* hjpRwLJby ily traian 0nCNX175a */ {/* hjpRwLJby ily traian 0nCNX175a */     char s[256], sep[]=".,;:-?! ";/* hjpRwLJby ily traian 0nCNX175a */     while( fin.getline(s , 256) )/* hjpRwLJby ily traian 0nCNX175a */     {/* hjpRwLJby ily traian 0nCNX175a */         char * p = strtok(s , sep);/* hjpRwLJby ily traian 0nCNX175a */         while(p)/* hjpRwLJby ily traian 0nCNX175a */         {/* hjpRwLJby ily traian 0nCNX175a */             if(verif(p))/* hjpRwLJby ily traian 0nCNX175a */             {/* hjpRwLJby ily traian 0nCNX175a */                 bool gasit = false;/* hjpRwLJby ily traian 0nCNX175a */                 for(int i = 1 ; i <= n && ! gasit ; i++)/* hjpRwLJby ily traian 0nCNX175a */                     if( egale(/* hjpRwLJby ily traian 0nCNX175a */ /* hjpRwLJby ily traian 0nCNX175a */ 
/* hjpRwLJby ily traian 0nCNX175a */ 		Comentarii
/* hjpRwLJby ily traian 0nCNX175a */ 		
/* hjpRwLJby ily traian 0nCNX175a */ 			
/* hjpRwLJby ily traian 0nCNX175a */ 							
/* hjpRwLJby ily traian 0nCNX175a */ 					