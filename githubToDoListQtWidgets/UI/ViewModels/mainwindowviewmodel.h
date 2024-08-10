#ifndef MAINWINDOWVIEWMODEL_H
#define MAINWINDOWVIEWMODEL_H
#include "../../Common/Interfaces/widgetviewmodel.hpp"

#include <QAbstractTableModel>

struct MainWindowDataUpdatedIvent : DataUpdatedIvent
{
    enum IventType { repoRecieved, todoRecieved };

    IventType type = repoRecieved;
};

class MainWindowViewModel : public WidgetViewModel
{
    QAbstractTableModel *repositoryTableModel;
    QAbstractListModel *listModel;

public:
    MainWindowViewModel();

private:
    void configureDatasource() {}
};

#endif // MAINWINDOWVIEWMODEL_H
