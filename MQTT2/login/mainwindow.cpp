/*#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMainWindow>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <string>
#include <QTime>
#include <QTimer>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->username->setPlaceholderText("Enter Username");
    ui->password->setPlaceholderText("Enter Password");
    ui->email->setPlaceholderText("Enter Email");
    ui->rUsername->setPlaceholderText("Please Enter Username");
    ui->rPassword->setPlaceholderText("Please Enter Password");


//    timer_1s = new QTimer(this);
//    QObject::connect(timer_1s, SIGNAL(timeout()), this, SLOT(UpdateTime()));
//    timer_1s->start(1000);
}





MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_registerButton_clicked()
{
    // Connecting to my MYSQL database
    database = QSqlDatabase::addDatabase(SQLDB);
    database.setHostName(HOST);
    database.setUserName(USER);
    database.setPassword(PASSWORD);
    database.setDatabaseName(DB_NAME);

    if(database.open()){

        // Get data from the input fields
        QString username = ui->rUsername->text();
        QString password = ui->rPassword->text();
        QString email = ui->email->text();


        //now this Query will insert the captured data above in to database

        QSqlQuery qry;

        QString sql_sentence = "INSERT INTO users (username,password,email) VALUES (:username,:password,:email)";
        qry.prepare(sql_sentence);

        qry.bindValue(":username", username);
        qry.bindValue(":password", password);
        qry.bindValue(":email", email);


        if(qry.exec())
        {

            QMessageBox::information(this, "Inserted", "Data is Inserted Succesfully");
        }
        else
        {
            QMessageBox::information(this, "NOT Inserted", "Data is NOT Inserted Succesfully");
        }
    }
    else
    {
        QMessageBox::information(this,"Not Connected","Database is not connected");
    }
}


void MainWindow::on_quitButton_clicked()
{
    QApplication::quit();
}



void MainWindow::on_loginButton_clicked()
{
    if (database.open()){
        QMessageBox::information(this,"DATABASE CONNECTED", "Database connection ");

        //Get user data input
        QString username = ui->username->text();
        QString password = ui->password->text();

        //queries db to find user&pass
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        QString sql_sentence ="SELECT * FROM users WHERE username = :username AND password = :password";
        query.prepare(sql_sentence);

        query.bindValue(":username",username);
        query.bindValue(":password",password);

        //results of the query

        //condition below is if condition fails to execute
        query.exec();

         if(query.next())
         {
                    QMessageBox::information(this,"Success","You are logged in");
//                 //Instances to the class user is being made.
//                 user1 firstman {"John" , "john1@email.com" , "011000000"};
//                  Mydialog dialog;
//                  dialog.setModal(true);
//                  this->hide();
//                  dialog.exec();
         }
         else
         {
                 QMessageBox::information(this,"Error","Wrong password or username");
         }
    }
    else
    {
        QMessageBox::information(this,"DATABASE FAILED", "Database connection failed");
    }

}

//THIS IS ONLY FOR NOW
//string LogUser = "Abdiwali" ;
