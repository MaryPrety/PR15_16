#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Red_clicked();

    void on_Green_clicked();



    void on_Blue_clicked();

    void on_pushButton_2_clicked();


private:
    int count_a;
    int count_b;
    int count_c;
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
