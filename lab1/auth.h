#ifndef AUTH_H
#define AUTH_H

#include <QMainWindow>

namespace Ui {
class auth;
}

class auth : public QMainWindow
{
    Q_OBJECT

public:
    explicit auth(QWidget *parent = 0);
    ~auth();

private:
    Ui::auth *ui;
};

#endif // AUTH_H
