ientrevistadost x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;

// X = 3
// Y = 4
// P = &y