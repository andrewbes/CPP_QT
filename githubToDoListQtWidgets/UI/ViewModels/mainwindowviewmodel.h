#ifndef MAINWINDOWVIEWMODEL_H
#define MAINWINDOWVIEWMODEL_H
#include "../../Common/Interfaces/widgetviewmodel.hpp"


struct MainWindowDataUpdatedIvent : DataUpdatedIvent
{
    enum IventType {
        repoRecieved,
        todoRecieved
    };

    IventType type = repoRecieved;
};

class MainWindowViewModel : public WidgetViewModel
{
public:
    MainWindowViewModel();
};

#endif // MAINWINDOWVIEWMODEL_H
