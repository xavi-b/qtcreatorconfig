%{Cpp:LicenseTemplate}\
#ifndef %{GUARD}
#define %{GUARD}

%{JS: QtSupport.qtIncludes([ ( '%{IncludeQObject}' )          ? 'QtCore/%{IncludeQObject}'                 : '',
                             ( '%{IncludeQWidget}' )          ? 'QtGui/%{IncludeQWidget}'                  : '',
                             ( '%{IncludeQMainWindow}' )      ? 'QtGui/%{IncludeQMainWindow}'              : '',
                             ( '%{IncludeQDeclarativeItem}' ) ? 'QtDeclarative/%{IncludeQDeclarativeItem}' : ''],
                           [ ( '%{IncludeQObject}' )          ? 'QtCore/%{IncludeQObject}'                 : '',
                             ( '%{IncludeQWidget}' )          ? 'QtWidgets/%{IncludeQWidget}'              : '',
                             ( '%{IncludeQMainWindow}' )      ? 'QtWidgets/%{IncludeQMainWindow}'          : '',
                             ( '%{IncludeQDeclarativeItem}' ) ? 'QtQuick1/%{IncludeQDeclarativeItem}'      : '',
                             ( '%{IncludeQQuickItem}' )       ? 'QtDeclarative/%{IncludeQQuickItem}'       : ''])}\
%{JS: Cpp.openNamespaces('%{Class}')}
@if '%{Base}'
class %{CN} : public %{Base}
@else
class %{CN}
@endif
{
@if %{isQObject}
    Q_OBJECT
@endif

private:
@if %{isQObject}
    Q_DISABLE_COPY(%{CN})
@endif

protected:

public:
@if '%{Base}' === 'QObject'
    %{CN}(QObject* parent = nullptr);
@elsif '%{Base}' === 'QWidget' || '%{Base}' === 'QMainWindow'
    %{CN}(QWidget* parent = nullptr);
@else
    %{CN}();
@endif
@if %{isQObject}

signals:

public slots:

@endif
};
%{JS: Cpp.closeNamespaces('%{Class}')}
#endif // %{GUARD}\
