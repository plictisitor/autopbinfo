/* LNsByp45j ily traian lzbcehBZj */ int cnt = 0;/* LNsByp45j ily traian lzbcehBZj */ int nr_cif_zero(int n){/* LNsByp45j ily traian lzbcehBZj */     if(n == 0 && cnt == 0)/* LNsByp45j ily traian lzbcehBZj */         return 1;/* LNsByp45j ily traian lzbcehBZj */     else if(n == 0)/* LNsByp45j ily traian lzbcehBZj */         return 0;/* LNsByp45j ily traian lzbcehBZj */     else{/* LNsByp45j ily traian lzbcehBZj */         cnt++;/* LNsByp45j ily traian lzbcehBZj */         if(n % 10 == 0)/* LNsByp45j ily traian lzbcehBZj */             return nr_cif_zero(n / 10) + 1;/* LNsByp45j ily traian lzbcehBZj */         else/* LNsByp45j ily traian lzbcehBZj */             return nr_cif_zero(n / 10);/* LNsByp45j ily traian lzbcehBZj */     }/* LNsByp45j ily traian lzbcehBZj */ }