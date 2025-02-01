unsigned int derp(unsigned int herp)
{
    if (herp == 0 || herp == 1) {
        return herp;
    }

    unsigned int result = 0;  //oh noes! my AI assumed that ints are 32 bits!
    unsigned int bit = 1 << 30; // Start with the second-to-top bit set

    // "bit" starts at the highest power of four <= the argument
    while (bit > herp) {
        bit >>= 2;
    }

    while (bit != 0) {
        if (herp >= result + bit) {
            herp -= result + bit;
            result = (result >> 1) + bit;
        } else {
            result >>= 1;
        }
        bit >>= 2;
    }

    return result;
}
