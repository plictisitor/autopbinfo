/* VNjDrxJmd ily traian a0y0m8oDA */ #include <algorithm>
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
/* VNjDrxJmd ily traian a0y0m8oDA */ using namespace std;
/* VNjDrxJmd ily traian a0y0m8oDA */ 
/* VNjDrxJmd ily traian a0y0m8oDA */ ifstream fin("elfii.in");
/* VNjDrxJmd ily traian a0y0m8oDA */ ofstream fout("elfii.out");
/* VNjDrxJmd ily traian a0y0m8oDA */ 
/* VNjDrxJmd ily traian a0y0m8oDA */ int main()
/* VNjDrxJmd ily traian a0y0m8oDA */ {
/* VNjDrxJmd ily traian a0y0m8oDA */     int x,y,z;
/* VNjDrxJmd ily traian a0y0m8oDA */     fin>>x>>y>>z;
/* VNjDrxJmd ily traian a0y0m8oDA */     if(x==0 && y==0 && z==0) fout<<"Poate data viitoare!";
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */     if(x==0 && y==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         if(z%2==0) fout<<"2"<<'\n'<<z<<"0"<<"0";
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(z%2==1) fout<<"2"<<'\n'<<z*100;
/* VNjDrxJmd ily traian a0y0m8oDA */         else fout<<"Poate data viitoare!";
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(z==0 && y==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         if(x%2==0) fout<<"2"<<'\n'<<x<<"0"<<"0";
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(x%2==1) fout<<"2"<<'\n'<<x*100;
/* VNjDrxJmd ily traian a0y0m8oDA */         else fout<<"Poate data viitoare!";
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */     if(x==0 && z==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         if(y%2==0) fout<<"2"<<'\n'<<y<<"0"<<"0";
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(y%2==1) fout<<"2"<<'\n'<<y*100;
/* VNjDrxJmd ily traian a0y0m8oDA */         else fout<<"Poate data viitoare!";
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(x==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         if(y%2==0 && z%2==0) fout<<"4"<<'\n'<<max(y,z)*100+min(y,z)*10+x;
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(y%2==0) fout<<"3"<<'\n'<<max(y,z)*100+min(y,z)*10+x;
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(z%2==0) fout<<"3"<<'\n'<<max(y,z)*100+min(y,z)*10+x;
/* VNjDrxJmd ily traian a0y0m8oDA */          else fout<<"2"<<'\n'<<max(z,y)*100+min(z,y)*10+x;
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */      else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(y==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         if(x%2==0 && z%2==0) fout<<"4"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(x%2==0) fout<<"3"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(z%2==0) fout<<"3"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
/* VNjDrxJmd ily traian a0y0m8oDA */          else fout<<"2"<<'\n'<<max(x,z)*100+min(x,z)*10+y;
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */      else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(z==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         if(y%2==0 && x%2==0) fout<<"4"<<'\n'<<max(y,x)*100+min(y,x)*10+z;
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(y%2==0) fout<<"3"<<'\n'<<max(x,y)*100+min(x,y)*10+z;
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(x%2==0) fout<<"3"<<'\n'<<max(y,x)*100+min(y,x)*10+z;
/* VNjDrxJmd ily traian a0y0m8oDA */     else fout<<"2"<<'\n'<<max(x,y)*100+min(x,y)*10+z;
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */ 
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */     if(x%2==0 && y%2==0 && z%2==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<"6"<<'\n';
/* VNjDrxJmd ily traian a0y0m8oDA */         if(x>=y && x>=z && y>=z) fout<<x*100+y*10+z;
/* VNjDrxJmd ily traian a0y0m8oDA */         else
/* VNjDrxJmd ily traian a0y0m8oDA */              if(x>=y && x>=z && z>=y) fout<<x*100+z*10+y;
/* VNjDrxJmd ily traian a0y0m8oDA */         else
/* VNjDrxJmd ily traian a0y0m8oDA */          if(y>=z && y>=x && x>=z) fout<<y*100+x*10+z;
/* VNjDrxJmd ily traian a0y0m8oDA */         else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(y>=z && y>=x && z>=x) fout<<y*100+z*10+x;
/* VNjDrxJmd ily traian a0y0m8oDA */         else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(z>=x && z>=y && x>=y) fout<<z*100+x*10+y;
/* VNjDrxJmd ily traian a0y0m8oDA */         else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(z>=x && z>=y && y>=x) fout<<z*100+y*10+x;
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(x%2==0 && y%2==0 )
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<"4"<<'\n';
/* VNjDrxJmd ily traian a0y0m8oDA */         if(max(x,y)>z) fout<<max(x,y)*100+z*10+min(x,y);
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(max(x,y)<z) fout<<z*100+max(x,y)*10+min(x,y);
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(x%2==0 && z%2==0 )
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<"4"<<'\n';
/* VNjDrxJmd ily traian a0y0m8oDA */           if(max(x,z)>y) fout<<max(x,z)*100+y*10+min(x,z);
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(max(x,z)<y) fout<<y*100+max(x,z)*10+min(x,z);
/* VNjDrxJmd ily traian a0y0m8oDA */ 
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */         if(z%2==0 && y%2==0 )
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<"4"<<'\n';
/* VNjDrxJmd ily traian a0y0m8oDA */         if(max(z,y)>x) fout<<max(z,y)*100+x*10+min(z,y);
/* VNjDrxJmd ily traian a0y0m8oDA */         else if(max(z,y)<x) fout<<x*100+max(z,y)*10+min(z,y);
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */     if(x%2==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<"2"<<'\n';
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<max(y,z)*100+min(y,z)*10+x;
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */     if(y%2==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<"2"<<'\n';
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<max(x,z)*100+min(x,z)*10+y;
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     else
/* VNjDrxJmd ily traian a0y0m8oDA */     if(z%2==0)
/* VNjDrxJmd ily traian a0y0m8oDA */     {
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<"2"<<'\n';
/* VNjDrxJmd ily traian a0y0m8oDA */         fout<<max(y,x)*100+min(y,x)*10+z;
/* VNjDrxJmd ily traian a0y0m8oDA */     }
/* VNjDrxJmd ily traian a0y0m8oDA */     if(x%2!=0 && y%2!=0 && z%2!=0)
/* VNjDrxJmd ily traian a0y0m8oDA */     fout<<"Poate data viitoare!";
/* VNjDrxJmd ily traian a0y0m8oDA */     return 0;
/* VNjDrxJmd ily traian a0y0m8oDA */ 
/* VNjDrxJmd ily traian a0y0m8oDA */ 
/* VNjDrxJmd ily traian a0y0m8oDA */ }