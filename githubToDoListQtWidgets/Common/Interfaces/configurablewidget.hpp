#ifndef CONFIGURABLEWIDGET_H
#define CONFIGURABLEWIDGET_H

#include <QLayout>


class ConfigurableWidget
{
    //Composite
    //Template method
public:
    void configure()
    {
        configureLayout();
        addWidgets();
        configureWidgets();
        connectWidgets();
    }

protected:
    QLayout* mainLayout;

    virtual void configureLayout() = 0;
    virtual void addWidgets() = 0;
    virtual void configureWidgets() = 0;
    virtual void connectWidgets() = 0;
    virtual void updateUi() = 0;
};

#endif // CONFIGURABLEWIDGET_H
