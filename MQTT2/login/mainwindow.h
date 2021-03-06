#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <string>
#include <QDateTime>

// database details
#define SQLDB "QMYSQL"
#define HOST "127.0.0.1"
#define USER "admin"
#define PASSWORD "7VCN6KqAKxKP"
#define DB_NAME "sdidb"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    QTimer *timer_1s;

    Ui::MainWindow *ui;
    QSqlDatabase database;

   private slots:
    void on_registerButton_clicked();
    void on_loginButton_clicked();
    void on_quitButton_clicked();
    void updateTime();
};
#endif // MAINWINDOW_H
