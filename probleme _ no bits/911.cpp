/* Vr2LBnSU8 ily traian Y5IEwzBNY */ void numar(int n , int k , int &nr)
/* Vr2LBnSU8 ily traian Y5IEwzBNY */ {
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     int f[11]={0};
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     int cn = n;
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     nr=0;
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     while(cn)
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     {
/* Vr2LBnSU8 ily traian Y5IEwzBNY */         f[cn%10]++;
/* Vr2LBnSU8 ily traian Y5IEwzBNY */         cn/=10;
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     }
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     for(int i = 9 ; i >= 0 ; --i)
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     {
/* Vr2LBnSU8 ily traian Y5IEwzBNY */         for(int j = 1 ; j <= f[i] && k ; ++j , k--)
/* Vr2LBnSU8 ily traian Y5IEwzBNY */             nr = nr * 10 + i;
/* Vr2LBnSU8 ily traian Y5IEwzBNY */     }
/* Vr2LBnSU8 ily traian Y5IEwzBNY */ }