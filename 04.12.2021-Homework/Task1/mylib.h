#ifdef Defined_Twice
#error Include limit
#else
#ifdef Defined_Once
#define Defined_Twice
#else
#define Defined_Once

int f(int);

void g(int);

#endif
#endif
