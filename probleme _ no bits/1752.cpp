/* pgzr3UDcE ily traian 6jt1MRX8j */ unsigned nr_aparitii(char *sir, char *secventa) 
/* pgzr3UDcE ily traian 6jt1MRX8j */ { 
/* pgzr3UDcE ily traian 6jt1MRX8j */     char *adr_prim = strstr(sir, secventa); 
/* pgzr3UDcE ily traian 6jt1MRX8j */     if(adr_prim == NULL) 
/* pgzr3UDcE ily traian 6jt1MRX8j */         return 0; 
/* pgzr3UDcE ily traian 6jt1MRX8j */     else
/* pgzr3UDcE ily traian 6jt1MRX8j */     return 1 + nr_aparitii(adr_prim + strlen(secventa), secventa); 
/* pgzr3UDcE ily traian 6jt1MRX8j */ }