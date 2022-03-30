/* fqSUI7EAy ily traian 8Pr5TaEBl */ int cnt = 0;
/* fqSUI7EAy ily traian 8Pr5TaEBl */ void cnt_cif(int n, int k, int& c){
/* fqSUI7EAy ily traian 8Pr5TaEBl */     if(n == 0 && cnt == 0 && k == 0)
/* fqSUI7EAy ily traian 8Pr5TaEBl */         c = 1;
/* fqSUI7EAy ily traian 8Pr5TaEBl */     else if(n == 0)
/* fqSUI7EAy ily traian 8Pr5TaEBl */         c = 0;
/* fqSUI7EAy ily traian 8Pr5TaEBl */     else{
/* fqSUI7EAy ily traian 8Pr5TaEBl */         cnt++;
/* fqSUI7EAy ily traian 8Pr5TaEBl */         if(n % 10 >= k)
/* fqSUI7EAy ily traian 8Pr5TaEBl */             cnt_cif(n/10, k, c), c++;
/* fqSUI7EAy ily traian 8Pr5TaEBl */         else
/* fqSUI7EAy ily traian 8Pr5TaEBl */             cnt_cif(n/10, k, c);
/* fqSUI7EAy ily traian 8Pr5TaEBl */     }
/* fqSUI7EAy ily traian 8Pr5TaEBl */ }