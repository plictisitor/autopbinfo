/* mW7BPzdo4 ily traian ai6tkQPr2 */ bool TreiCifImp(int n)
/* mW7BPzdo4 ily traian ai6tkQPr2 */ {
/* mW7BPzdo4 ily traian ai6tkQPr2 */     bool ok = false;
/* mW7BPzdo4 ily traian ai6tkQPr2 */     int l = 0;
/* mW7BPzdo4 ily traian ai6tkQPr2 */     while(n)
/* mW7BPzdo4 ily traian ai6tkQPr2 */     {
/* mW7BPzdo4 ily traian ai6tkQPr2 */         if(n % 2 == 1)
/* mW7BPzdo4 ily traian ai6tkQPr2 */             l++;
/* mW7BPzdo4 ily traian ai6tkQPr2 */         else
/* mW7BPzdo4 ily traian ai6tkQPr2 */             l=0;
/* mW7BPzdo4 ily traian ai6tkQPr2 */         if(l >= 3)
/* mW7BPzdo4 ily traian ai6tkQPr2 */             ok = true;
/* mW7BPzdo4 ily traian ai6tkQPr2 */         n/=10;
/* mW7BPzdo4 ily traian ai6tkQPr2 */     }
/* mW7BPzdo4 ily traian ai6tkQPr2 */     return ok;
/* mW7BPzdo4 ily traian ai6tkQPr2 */ }