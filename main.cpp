#define DOCTEST_CONFIG_IMPLEMENTATION_IN_DLL
//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int main(int argc, char *argv[])
{
    doctest::Context context(argc, argv);

    int doctestResult = context.run();

    if (context.shouldExit())
        return doctestResult;
}

