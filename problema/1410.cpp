/* dcJTXUp8P ily traian PYSTn5dDK */ #include <bits/stdc++.h>/* dcJTXUp8P ily traian PYSTn5dDK */ using namespace std;/* dcJTXUp8P ily traian PYSTn5dDK */ /* dcJTXUp8P ily traian PYSTn5dDK */ int main()/* dcJTXUp8P ily traian PYSTn5dDK */ {/* dcJTXUp8P ily traian PYSTn5dDK */     int x,y,cate=0;/* dcJTXUp8P ily traian PYSTn5dDK */     cin>>x>>y;/* dcJTXUp8P ily traian PYSTn5dDK */     while(x!=0 || y!=0)/* dcJTXUp8P ily traian PYSTn5dDK */     {/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez puterea lui 10 < x/* dcJTXUp8P ily traian PYSTn5dDK */         int px=1;/* dcJTXUp8P ily traian PYSTn5dDK */         while(x>=px) px=px*10;/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez puterea lui 10 < y/* dcJTXUp8P ily traian PYSTn5dDK */         int py=1;/* dcJTXUp8P ily traian PYSTn5dDK */         while(y>=py) py=py*10;/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez cocatenatele/* dcJTXUp8P ily traian PYSTn5dDK */         unsigned long long xy,yx;/* dcJTXUp8P ily traian PYSTn5dDK */         xy=1ull*x*py+y;/* dcJTXUp8P ily traian PYSTn5dDK */         yx=1ull*y*px+x;/* dcJTXUp8P ily traian PYSTn5dDK */         ///calculez resturnatele/* dcJTXUp8P ily traian PYSTn5dDK */         unsigned long long rxy=0,ryx=0;/* dcJTXUp8P ily traian PYSTn5dDK */         unsigned long long cxy=xy,cyx=yx;/* dcJTXUp8P ily traian PYSTn5dDK */         while(cxy>0)/* dcJTXUp8P ily traian PYSTn5dDK */         {/* dcJTXUp8P ily traian PYSTn5dDK */             rxy=rxy*10+cxy%10;/* dcJTXUp8P ily traian PYSTn5dDK */             cxy=cxy/10;/* dcJTXUp8P ily traian PYSTn5dDK */         }/* dcJTXUp8P ily traian PYSTn5dDK */         while(cyx>0)/* dcJTXUp8P ily traian PYSTn5dDK */         {/* dcJTXUp8P ily traian PYSTn5dDK */             ryx=ryx*10+cyx%10;/* dcJTXUp8P ily traian PYSTn5dDK */             cyx=cyx/10;/* dcJTXUp8P ily traian PYSTn5dDK */         }/* dcJTXUp8P ily traian PYSTn5dDK */ /* dcJTXUp8P ily traian PYSTn5dDK */         ///verific daca e palindrom/* dcJTXUp8P ily traian PYSTn5dDK */         if(xy==rxy || yx==ryx) cate++;/* dcJTXUp8P ily traian PYSTn5dDK */         cin>>x>>y;/* dcJTXUp8P ily traian PYSTn5dDK */     }/* dcJTXUp8P ily traian PYSTn5dDK */     cout<<cate;/* dcJTXUp8P ily traian PYSTn5dDK */     return 0;/* dcJTXUp8P ily traian PYSTn5dDK */ /* dcJTXUp8P ily traian PYSTn5dDK */ }