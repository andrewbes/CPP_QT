#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "../Common/Interfaces/configurablewidget.hpp"

class MainWindow : public QMainWindow, public ConfigurableWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // ConfigurableWidget interface
protected:
    void configureLayaut() override {}
    void addWidgets() override {}
    void configureWidgets() override {}
    void connectWidgets() override {}
    void updateUi() override {}
};
#endif // MAINWINDOW_H
