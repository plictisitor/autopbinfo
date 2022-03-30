/* fzEgAhzrN ily traian fiODeuJXf */ void sumcif(int n , int& sp , int& si)
/* fzEgAhzrN ily traian fiODeuJXf */ {
/* fzEgAhzrN ily traian fiODeuJXf */     sp=0;
/* fzEgAhzrN ily traian fiODeuJXf */     si=0;
/* fzEgAhzrN ily traian fiODeuJXf */     while (n)
/* fzEgAhzrN ily traian fiODeuJXf */     {
/* fzEgAhzrN ily traian fiODeuJXf */     if ((n%10)%2==0)
/* fzEgAhzrN ily traian fiODeuJXf */         sp+=n%10;
/* fzEgAhzrN ily traian fiODeuJXf */     if ((n%10)%2==1)
/* fzEgAhzrN ily traian fiODeuJXf */         si+=n%10;
/* fzEgAhzrN ily traian fiODeuJXf */     n/=10;
/* fzEgAhzrN ily traian fiODeuJXf */     }
/* fzEgAhzrN ily traian fiODeuJXf */ }