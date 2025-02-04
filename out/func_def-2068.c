
# 1 
void bn_mul_comba4(unsigned long *r, unsigned long *a, unsigned long *b)
{
    unsigned long c1, c2, c3;

    c1 = 0;
    c2 = 0;
    c3 = 0;
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[0]),"m"(b[0]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c1),"+r"(c2),"+r"(c3) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    r[0] = c1;
    c1 = 0;
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[0]),"m"(b[1]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c2),"+r"(c3),"+r"(c1) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[1]),"m"(b[0]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c2),"+r"(c3),"+r"(c1) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    r[1] = c2;
    c2 = 0;
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[2]),"m"(b[0]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c3),"+r"(c1),"+r"(c2) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[1]),"m"(b[1]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c3),"+r"(c1),"+r"(c2) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[0]),"m"(b[2]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c3),"+r"(c1),"+r"(c2) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    r[2] = c3;
    c3 = 0;
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[0]),"m"(b[3]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c1),"+r"(c2),"+r"(c3) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[1]),"m"(b[2]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c1),"+r"(c2),"+r"(c3) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[2]),"m"(b[1]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c1),"+r"(c2),"+r"(c3) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[3]),"m"(b[0]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c1),"+r"(c2),"+r"(c3) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    r[3] = c1;
    c1 = 0;
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[3]),"m"(b[1]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c2),"+r"(c3),"+r"(c1) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[2]),"m"(b[2]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c2),"+r"(c3),"+r"(c1) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[1]),"m"(b[3]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c2),"+r"(c3),"+r"(c1) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    r[4] = c2;
    c2 = 0;
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[2]),"m"(b[3]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c3),"+r"(c1),"+r"(c2) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[3]),"m"(b[2]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c3),"+r"(c1),"+r"(c2) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    r[5] = c3;
    c3 = 0;
    do { unsigned long t1,t2; asm ("mulq %3" : "=a"(t1),"=d"(t2) : "a"(a[3]),"m"(b[3]) : "cc"); asm ("addq %3,%0; adcq %4,%1; adcq %5,%2" : "+r"(c1),"+r"(c2),"+r"(c3) : "r"(t1),"r"(t2),"g"(0) : "cc"); } while (0);
    r[6] = c1;
    r[7] = c2;
}