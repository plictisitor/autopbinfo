/* KHal6g3sI ily traian gn3EPwoeI */ #include <bits/stdc++.h>/* KHal6g3sI ily traian gn3EPwoeI */ /* KHal6g3sI ily traian gn3EPwoeI */ using namespace std;/* KHal6g3sI ily traian gn3EPwoeI */ int n,ok,i;/* KHal6g3sI ily traian gn3EPwoeI */ int main()/* KHal6g3sI ily traian gn3EPwoeI */ {/* KHal6g3sI ily traian gn3EPwoeI */     cin>>n;/* KHal6g3sI ily traian gn3EPwoeI */     int a[n];/* KHal6g3sI ily traian gn3EPwoeI */     for (i=0;i<n;i++)/* KHal6g3sI ily traian gn3EPwoeI */     {/* KHal6g3sI ily traian gn3EPwoeI */         cin>>a[i];/* KHal6g3sI ily traian gn3EPwoeI */     }/* KHal6g3sI ily traian gn3EPwoeI */     ok=1;/* KHal6g3sI ily traian gn3EPwoeI */     for (i=0;i<n-2;i++)/* KHal6g3sI ily traian gn3EPwoeI */     {/* KHal6g3sI ily traian gn3EPwoeI */         if (a[i]<a[i+1])/* KHal6g3sI ily traian gn3EPwoeI */         {/* KHal6g3sI ily traian gn3EPwoeI */             if (a[i+1]<a[i+2])/* KHal6g3sI ily traian gn3EPwoeI */                 ok=0;/* KHal6g3sI ily traian gn3EPwoeI */         }/* KHal6g3sI ily traian gn3EPwoeI */         else/* KHal6g3sI ily traian gn3EPwoeI */         {/* KHal6g3sI ily traian gn3EPwoeI */             if (a[i]>a[i+1])/* KHal6g3sI ily traian gn3EPwoeI */             {/* KHal6g3sI ily traian gn3EPwoeI */                 if (a[i+1]>a[i+2])/* KHal6g3sI ily traian gn3EPwoeI */                     ok=0;/* KHal6g3sI ily traian gn3EPwoeI */             }/* KHal6g3sI ily traian gn3EPwoeI */         }/* KHal6g3sI ily traian gn3EPwoeI */         if (a[i]==a[i+1])/* KHal6g3sI ily traian gn3EPwoeI */             ok=0;/* KHal6g3sI ily traian gn3EPwoeI */     }/* KHal6g3sI ily traian gn3EPwoeI */     if (ok==0)/* KHal6g3sI ily traian gn3EPwoeI */         cout<<"NU";/* KHal6g3sI ily traian gn3EPwoeI */     else cout<<"DA";/* KHal6g3sI ily traian gn3EPwoeI */ /* KHal6g3sI ily traian gn3EPwoeI */     return 0;/* KHal6g3sI ily traian gn3EPwoeI */ }