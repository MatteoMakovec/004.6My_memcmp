int my_memcmp(const void* s1, const void* s2,size_t n)
{
    const unsigned char *p1 = s1, *p2 = s2;

    while(n--)
        if( *p1 != *p2 ) {
            return *p1 - *p2;
        } else {
            p1++; // incremento di puntatore di tipo unsigned char * (+1 byte)
            p2++; // idem
        }
    return 0;
}