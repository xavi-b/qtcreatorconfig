#include "%{ProjectName}.h"

int main(int argc, char *argv[])
{
    %{ProjectName} a(argc, argv);

    return a.exec();
}
