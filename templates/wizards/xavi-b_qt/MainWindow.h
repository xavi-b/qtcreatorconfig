#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
	Q_DISABLE_COPY(MainWindow)

    QWidget* container;

protected:

public:
    MainWindow(QWidget *parent = nullptr);
    virtual ~MainWindow();

signals:
	
public slots:

};

#endif // MAINWINDOW_H
