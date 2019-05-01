#ifndef %{GUARD}
#define %{GUARD}

#include <QApplication>

#include "MainWindow.h"

class %{ProjectName} : public QApplication
{
private:
	Q_DISABLE_COPY(%{ProjectName})
    MainWindow w;

public:
    %{ProjectName}(int argc, char *argv[]);
    virtual ~%{ProjectName}();
};

#endif
