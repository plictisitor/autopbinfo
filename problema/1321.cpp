/* TxILsAuhG ily traian 0QS0PmzOR */ #include <bits/stdc++.h>/* TxILsAuhG ily traian 0QS0PmzOR */ using namespace std;/* TxILsAuhG ily traian 0QS0PmzOR */ /* TxILsAuhG ily traian 0QS0PmzOR */ int main()/* TxILsAuhG ily traian 0QS0PmzOR */ {/* TxILsAuhG ily traian 0QS0PmzOR */     int i , n , nr_varfuri=0;/* TxILsAuhG ily traian 0QS0PmzOR */     cin>>n; /* TxILsAuhG ily traian 0QS0PmzOR */     int v[n+1];/* TxILsAuhG ily traian 0QS0PmzOR */     cin>>v[1]>>v[2];/* TxILsAuhG ily traian 0QS0PmzOR */     if(v[1]>v[2]||v[1]==v[2])/* TxILsAuhG ily traian 0QS0PmzOR */     {/* TxILsAuhG ily traian 0QS0PmzOR */         cout<<"NU";/* TxILsAuhG ily traian 0QS0PmzOR */         return 0;/* TxILsAuhG ily traian 0QS0PmzOR */     }/* TxILsAuhG ily traian 0QS0PmzOR */     for(i=3;i<n;i++)/* TxILsAuhG ily traian 0QS0PmzOR */     {/* TxILsAuhG ily traian 0QS0PmzOR */         cin>>v[i];  /* TxILsAuhG ily traian 0QS0PmzOR */         if(v[i]==v[i-1])/* TxILsAuhG ily traian 0QS0PmzOR */         {/* TxILsAuhG ily traian 0QS0PmzOR */             cout<<"NU";/* TxILsAuhG ily traian 0QS0PmzOR */             return 0;/* TxILsAuhG ily traian 0QS0PmzOR */         }/* TxILsAuhG ily traian 0QS0PmzOR */         else if(nr_varfuri==0 && v[i-1]>v[i])/* TxILsAuhG ily traian 0QS0PmzOR */         {/* TxILsAuhG ily traian 0QS0PmzOR */             nr_varfuri++;   /* TxILsAuhG ily traian 0QS0PmzOR */         }/* TxILsAuhG ily traian 0QS0PmzOR */         else if(nr_varfuri==1 && v[i-1]<v[i])/* TxILsAuhG ily traian 0QS0PmzOR */         {/* TxILsAuhG ily traian 0QS0PmzOR */             cout<<"NU";/* TxILsAuhG ily traian 0QS0PmzOR */             return 0;/* TxILsAuhG ily traian 0QS0PmzOR */         }   /* TxILsAuhG ily traian 0QS0PmzOR */     }/* TxILsAuhG ily traian 0QS0PmzOR */     cin>>v[n];/* TxILsAuhG ily traian 0QS0PmzOR */     if(v[n-1]==v[n] || v[n-1]<v[n])/* TxILsAuhG ily traian 0QS0PmzOR */     {/* TxILsAuhG ily traian 0QS0PmzOR */         cout<<"NU";/* TxILsAuhG ily traian 0QS0PmzOR */         return 0;/* TxILsAuhG ily traian 0QS0PmzOR */     }/* TxILsAuhG ily traian 0QS0PmzOR */     cout<<"DA"; /* TxILsAuhG ily traian 0QS0PmzOR */     return 0;/* TxILsAuhG ily traian 0QS0PmzOR */ }