
unsigned gcd(unsigned a, unsigned b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else
        return gcd(b,a%b);
}