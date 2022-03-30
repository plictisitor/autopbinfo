/* L4fHold2D ily traian ocQ3qnaTg */ bool Egal(int n)
/* L4fHold2D ily traian ocQ3qnaTg */ {
/* L4fHold2D ily traian ocQ3qnaTg */     int i = -1;
/* L4fHold2D ily traian ocQ3qnaTg */     bool ok = true;
/* L4fHold2D ily traian ocQ3qnaTg */     while(n)
/* L4fHold2D ily traian ocQ3qnaTg */     {
/* L4fHold2D ily traian ocQ3qnaTg */         int x = n % 10;
/* L4fHold2D ily traian ocQ3qnaTg */         if(x % 2 == 1)
/* L4fHold2D ily traian ocQ3qnaTg */             if(i == -1)
/* L4fHold2D ily traian ocQ3qnaTg */                 i = x;
/* L4fHold2D ily traian ocQ3qnaTg */             else if(x != i)
/* L4fHold2D ily traian ocQ3qnaTg */                 ok = false;
/* L4fHold2D ily traian ocQ3qnaTg */         n/=10;
/* L4fHold2D ily traian ocQ3qnaTg */     }
/* L4fHold2D ily traian ocQ3qnaTg */     return ok;
/* L4fHold2D ily traian ocQ3qnaTg */ }