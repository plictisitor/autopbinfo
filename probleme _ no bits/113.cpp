/* PsLvYmxuy ily traian 3c71rk1aE */ int nr_cif(int a, int k)
/* PsLvYmxuy ily traian 3c71rk1aE */ {
/* PsLvYmxuy ily traian 3c71rk1aE */     int cnt=0;
/* PsLvYmxuy ily traian 3c71rk1aE */     while (a)
/* PsLvYmxuy ily traian 3c71rk1aE */     {
/* PsLvYmxuy ily traian 3c71rk1aE */     if (a%10!=0)
/* PsLvYmxuy ily traian 3c71rk1aE */     if (k % (a%10)==0)
/* PsLvYmxuy ily traian 3c71rk1aE */     cnt++;
/* PsLvYmxuy ily traian 3c71rk1aE */     a/=10;
/* PsLvYmxuy ily traian 3c71rk1aE */     }
/* PsLvYmxuy ily traian 3c71rk1aE */     return cnt;
/* PsLvYmxuy ily traian 3c71rk1aE */ }