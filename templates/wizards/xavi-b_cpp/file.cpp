%{Cpp:LicenseTemplate}\
#include "%{HdrFileName}"
%{JS: Cpp.openNamespaces('%{Class}')}
@if '%{Base}' === 'QObject'
%{CN}::%{CN}(QObject* parent) : QObject(parent)
@elsif '%{Base}' === 'QWidget' || '%{Base}' === 'QMainWindow'
%{CN}::%{CN}(QWidget* parent) : %{Base}(parent)
@else
%{CN}::%{CN}()
@endif
{

}
%{JS: Cpp.closeNamespaces('%{Class}')}\
