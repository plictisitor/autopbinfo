/* NfP6HZhvi ily traian Cd11VMVQF */ void aranjare(int a[] , int n)
/* NfP6HZhvi ily traian Cd11VMVQF */ {
/* NfP6HZhvi ily traian Cd11VMVQF */     int b[10001];
/* NfP6HZhvi ily traian Cd11VMVQF */     for(int i = 0 ; i < n ; ++i)
/* NfP6HZhvi ily traian Cd11VMVQF */         b[i]=a[i];
/* NfP6HZhvi ily traian Cd11VMVQF */     int p = 0;
/* NfP6HZhvi ily traian Cd11VMVQF */     for(int i = 0 ; i < n ; ++i)
/* NfP6HZhvi ily traian Cd11VMVQF */     {
/* NfP6HZhvi ily traian Cd11VMVQF */         if(b[i]%2==1)
/* NfP6HZhvi ily traian Cd11VMVQF */         {
/* NfP6HZhvi ily traian Cd11VMVQF */             a[p]=b[i];
/* NfP6HZhvi ily traian Cd11VMVQF */             p++;
/* NfP6HZhvi ily traian Cd11VMVQF */         }
/* NfP6HZhvi ily traian Cd11VMVQF */     }
/* NfP6HZhvi ily traian Cd11VMVQF */     for(int i = 0 ; i < n ; ++i)
/* NfP6HZhvi ily traian Cd11VMVQF */     {
/* NfP6HZhvi ily traian Cd11VMVQF */         if(b[i]%2==0)
/* NfP6HZhvi ily traian Cd11VMVQF */         {
/* NfP6HZhvi ily traian Cd11VMVQF */             a[p]=b[i];
/* NfP6HZhvi ily traian Cd11VMVQF */             p++;
/* NfP6HZhvi ily traian Cd11VMVQF */         }
/* NfP6HZhvi ily traian Cd11VMVQF */     }
/* NfP6HZhvi ily traian Cd11VMVQF */ }