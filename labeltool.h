#ifndef LABELTOOL_H
#define LABELTOOL_H

#include <QMainWindow>

namespace Ui {
class LabelTool;
}

class LabelTool : public QMainWindow
{
    Q_OBJECT

public:
    explicit LabelTool(QWidget *parent = 0);
    ~LabelTool();

private:
    Ui::LabelTool *ui;
};

#endif // LABELTOOL_H
