/* hOJDLA9In ily traian dzkXDgMHX */ void nule(std::vector<int> &v)
/* hOJDLA9In ily traian dzkXDgMHX */ {
/* hOJDLA9In ily traian dzkXDgMHX */     int n = v.size();
/* hOJDLA9In ily traian dzkXDgMHX */     int poz = 0;
/* hOJDLA9In ily traian dzkXDgMHX */     for(int i = 0; i < n; ++i)
/* hOJDLA9In ily traian dzkXDgMHX */         if(v[i] != 0)
/* hOJDLA9In ily traian dzkXDgMHX */             v[poz] = v[i], poz++;
/* hOJDLA9In ily traian dzkXDgMHX */     for(int i = poz; i < n; ++i)
/* hOJDLA9In ily traian dzkXDgMHX */         v[i] = 0;
/* hOJDLA9In ily traian dzkXDgMHX */ }