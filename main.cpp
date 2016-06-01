#include "cow.h"

int main(int argc, char const *argv[])
{
    {
        Cow emptyCow;
        Cow argCow("array", "dynamic", 20.5);
    }
    Cow argCow("staff", "testing", 5.5);
    Cow copyCow(argCow);
    Cow emptyCow;
    emptyCow = copyCow;
    emptyCow.ShowCow();
    return 0;
}