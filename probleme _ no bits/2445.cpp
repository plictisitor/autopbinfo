/* 452cEQXgV ily traian HbQNsy4xP */ #include <algorithm>
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
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */ using namespace std;
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */ ifstream fin("turnuri1.in");
/* 452cEQXgV ily traian HbQNsy4xP */ ofstream fout("turnuri1.out");
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */ int C,n,n1,n2;
/* 452cEQXgV ily traian HbQNsy4xP */ long long int nr_turnuri , max_turn;
/* 452cEQXgV ily traian HbQNsy4xP */ int v1[10003] , v2[10003] , v3;
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */ void citire()
/* 452cEQXgV ily traian HbQNsy4xP */ {   
/* 452cEQXgV ily traian HbQNsy4xP */     int l1,l2,i;
/* 452cEQXgV ily traian HbQNsy4xP */     long long h_turn;
/* 452cEQXgV ily traian HbQNsy4xP */     char cul1,cul2;
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */     fin>>C>>n;
/* 452cEQXgV ily traian HbQNsy4xP */     fin>>l1>>cul1;
/* 452cEQXgV ily traian HbQNsy4xP */     nr_turnuri=1;h_turn=l1;
/* 452cEQXgV ily traian HbQNsy4xP */     if(cul1=='g') v1[++n1]=l1;
/* 452cEQXgV ily traian HbQNsy4xP */        else v2[++n2]=l1;
/* 452cEQXgV ily traian HbQNsy4xP */     for(i=1; i<=n-1; i++)
/* 452cEQXgV ily traian HbQNsy4xP */     {
/* 452cEQXgV ily traian HbQNsy4xP */         fin>>l2>>cul2;
/* 452cEQXgV ily traian HbQNsy4xP */         if(cul2=='g') v1[++n1]=l2;
/* 452cEQXgV ily traian HbQNsy4xP */            else v2[++n2]=l2;
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */         if(l2<l1 && cul2!=cul1)
/* 452cEQXgV ily traian HbQNsy4xP */             {h_turn=h_turn+l2;}
/* 452cEQXgV ily traian HbQNsy4xP */         else
/* 452cEQXgV ily traian HbQNsy4xP */             {nr_turnuri++;h_turn=l2;}
/* 452cEQXgV ily traian HbQNsy4xP */         if (h_turn>max_turn) max_turn=h_turn;
/* 452cEQXgV ily traian HbQNsy4xP */         l1=l2;cul1=cul2;
/* 452cEQXgV ily traian HbQNsy4xP */     }
/* 452cEQXgV ily traian HbQNsy4xP */ }
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */ bool cmp( int a, int b)
/* 452cEQXgV ily traian HbQNsy4xP */ {
/* 452cEQXgV ily traian HbQNsy4xP */     return (a>b);
/* 452cEQXgV ily traian HbQNsy4xP */ }
/* 452cEQXgV ily traian HbQNsy4xP */ 
/* 452cEQXgV ily traian HbQNsy4xP */ int main()
/* 452cEQXgV ily traian HbQNsy4xP */ {
/* 452cEQXgV ily traian HbQNsy4xP */     int i,j,k,p;
/* 452cEQXgV ily traian HbQNsy4xP */     citire();
/* 452cEQXgV ily traian HbQNsy4xP */     if (C==1)
/* 452cEQXgV ily traian HbQNsy4xP */         fout<<nr_turnuri<<' '<<max_turn<<'\n';
/* 452cEQXgV ily traian HbQNsy4xP */     else
/* 452cEQXgV ily traian HbQNsy4xP */     {
/* 452cEQXgV ily traian HbQNsy4xP */         sort(v1+1,v1+1+n1,cmp);
/* 452cEQXgV ily traian HbQNsy4xP */         sort(v2+1,v2+1+n2,cmp);
/* 452cEQXgV ily traian HbQNsy4xP */         v1[n1+1]=500003;
/* 452cEQXgV ily traian HbQNsy4xP */         v2[n2+1]=500002;
/* 452cEQXgV ily traian HbQNsy4xP */         i=1;j=1;k=0;
/* 452cEQXgV ily traian HbQNsy4xP */         if (v1[i]>v2[j])
/* 452cEQXgV ily traian HbQNsy4xP */         {
/* 452cEQXgV ily traian HbQNsy4xP */             ++k;v3=v1[i++];p=1;
/* 452cEQXgV ily traian HbQNsy4xP */         }
/* 452cEQXgV ily traian HbQNsy4xP */         else
/* 452cEQXgV ily traian HbQNsy4xP */         {
/* 452cEQXgV ily traian HbQNsy4xP */             ++k;v3=v2[j++];p=-1;
/* 452cEQXgV ily traian HbQNsy4xP */         }
/* 452cEQXgV ily traian HbQNsy4xP */         while(i<=n1&&j<=n2)
/* 452cEQXgV ily traian HbQNsy4xP */         {
/* 452cEQXgV ily traian HbQNsy4xP */             if(p==1)
/* 452cEQXgV ily traian HbQNsy4xP */             {
/* 452cEQXgV ily traian HbQNsy4xP */                 while(j<=n2 && v2[j]>=v3)
/* 452cEQXgV ily traian HbQNsy4xP */                     j++;
/* 452cEQXgV ily traian HbQNsy4xP */                 if (j<=n2)
/* 452cEQXgV ily traian HbQNsy4xP */                 {++k; v3=v2[j++];p=-p;}
/* 452cEQXgV ily traian HbQNsy4xP */             }
/* 452cEQXgV ily traian HbQNsy4xP */             else
/* 452cEQXgV ily traian HbQNsy4xP */             {
/* 452cEQXgV ily traian HbQNsy4xP */                 while(i<=n1 && v1[i]>=v3)
/* 452cEQXgV ily traian HbQNsy4xP */                     i++;
/* 452cEQXgV ily traian HbQNsy4xP */                 if(i<=n1)
/* 452cEQXgV ily traian HbQNsy4xP */                 {++k;v3=v1[i++];p=-p;}
/* 452cEQXgV ily traian HbQNsy4xP */             }
/* 452cEQXgV ily traian HbQNsy4xP */         }
/* 452cEQXgV ily traian HbQNsy4xP */        if(p==-1)
/* 452cEQXgV ily traian HbQNsy4xP */         for(i;i<=n1;i++)
/* 452cEQXgV ily traian HbQNsy4xP */             if (v1[i]<v3) {++k;v3=v1[i];break;}
/* 452cEQXgV ily traian HbQNsy4xP */        if(p==1)
/* 452cEQXgV ily traian HbQNsy4xP */             for(j;j<=n2;j++)
/* 452cEQXgV ily traian HbQNsy4xP */             if (v2[j]<v3) {++k;v3=v2[j];break;}
/* 452cEQXgV ily traian HbQNsy4xP */        fout<<k<<'\n';
/* 452cEQXgV ily traian HbQNsy4xP */     }
/* 452cEQXgV ily traian HbQNsy4xP */     return 0;
/* 452cEQXgV ily traian HbQNsy4xP */ }