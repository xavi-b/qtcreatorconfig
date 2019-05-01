#include "%{ProjectName}.h"

%{ProjectName}::%{ProjectName}(int argc, char *argv[]) : QApplication(argc, argv)
{
    setApplicationName("%{ProjectName}");
    setOrganizationName("xavi-b");

    w.show();
}

%{ProjectName}::~%{ProjectName}()
{

}
