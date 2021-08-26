#include <stdio.h>
#include <stdlib.h>

struct Element
{
    int z;
    enum State
    {
        SOLID,
        LIQUID,
        GAS,
        PLASMA
    } state;
} oxygen = {8, Element::GAS};
// type enum State and its enumeration constants stay visible here, e.g.
void foo(void)
{
    enum Element::State e = Element::LIQUID;      // OK
    printf("%d %d %d ", e, oxygen.state, Element::PLASMA); // prints 1 2 3
}

int main()
{

    foo();

    return 0;
}