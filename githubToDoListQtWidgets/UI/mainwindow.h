#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QTableView>
#include <QListView>
#include <QMainWindow>

#include "../Common/Interfaces/configurablewidget.hpp"
#include "ViewModels/mainwindowviewmodel.h"

class MainWindow : public QMainWindow, public ConfigurableWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    MainWindowViewModel *model;
    QTableView *repositoriesTableView;
    QListView *toDoListView;


    // ConfigurableWidget interface
    void configureLayout() override {
        mainLayout = new QHBoxLayout;
        QWidget * centralWidget = new QWidget;
        centralWidget->setLayout(mainLayout);
        setCentralWidget(centralWidget);
    }
    void addWidgets() override
    {
        repositoriesTableView = new QTableView(this);
        toDoListView = new QListView(this);
        mainLayout->addWidget(repositoriesTableView);
        mainLayout->addWidget(toDoListView);

    }
    void configureWidgets() override {}
    void connectWidgets() override {}
    void updateUi() override {}

};
#endif // MAINWINDOW_H
