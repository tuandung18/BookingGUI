#ifndef EDITOR_H
#define EDITOR_H
#include <ui_editor.h>
#include <QTabWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Editor;
}
QT_END_NAMESPACE

class Editor : public QTabWidget
{
    Q_OBJECT

public:
    explicit Editor(QWidget *parent = nullptr);
    ~Editor();

private:
    Ui::Editor *ui;
};

#endif // EDITOR_H
