constexpr int isqrt_helper(int sq, int d, int a)
{
    return sq <= a ? isqrt_helper(sq+d,d+2,a) : d;
}

constexpr int isqrt(int x)
{
    return isqrt_helper(1,3,x)/2 – 1;
}

constexpr int s1 = isqrt(9);    // s1 becomes 3
constexpr int s2 = isqrt(1234);
