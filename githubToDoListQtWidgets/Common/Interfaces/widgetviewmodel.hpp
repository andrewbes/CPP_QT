#ifndef WIDGETVIEWMODEL_H
#define WIDGETVIEWMODEL_H

#include <QObject>


struct DataUpdatedIvent
{};

class WidgetViewModel : public QObject
{
    Q_OBJECT

public:
    virtual void updateDataSource() = 0;

signals:
    void dataUpdated(DataUpdatedIvent ivent);
};

#endif // WIDGETVIEWMODEL_H
