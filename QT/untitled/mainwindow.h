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
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_progressBar_valueChanged(int value);

    void on_progressBar_2_valueChanged(int value);

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_6_clicked();

    void on_progressBar_3_valueChanged(int value);

    void on_label_6_linkActivated(const QString &link);

    void on_label_8_linkActivated(const QString &link);

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
public slots:
    void timerUpdate(void);
};
#endif // MAINWINDOW_H
