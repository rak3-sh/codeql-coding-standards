extern int i;
i = 0; // COMPLIANT

extern int i1 = 0; // NON_COMPLIANT

int i2 = 0; // NON_COMPLIANT

// not detected as `short i3` exists
extern int i3; // NON_COMPLIANT[FALSE_NEGATIVE]

extern int i4; // COMPLIANT
