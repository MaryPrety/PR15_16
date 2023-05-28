#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSerialPort/QSerialPort>
#include <QMessageBox>
#include <QTimer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(on_pushButton_2_clicked()));
    timer->start(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Red_clicked()
{
    QSerialPort serialPort;
        count_a++;
        // указали имя к какому порту будем подключаться
        serialPort.setPortName(this->ui->Port_line->text());
        // указали скорость
        serialPort.setBaudRate(QSerialPort::Baud9600);
        // пробуем подключится
            if (!serialPort.open(QIODevice::ReadWrite)) {
                // если подключится не получится, то покажем сообщение с ошибкой
                QMessageBox::warning(this, "Ошибка", "Не удалось подключится к порту");
                return;
            }
        // отправляем строку с b нашей арудинкой
        if(count_a % 2 != 0)
        {
            serialPort.write("aa"); // очень важно, что именно двойные кавычки
            serialPort.waitForBytesWritten(); // ждем пока дойдет

            // и не знаю с чем тут связано, но, чтобы сообщение дошло
            // надо обязательно прочитать не пришло ли нам чего в ответ
            //
            // функция waitForReadyRead(10) проверят не появилось
            // в ближайшие 10 миллисекунд чего-нибудь в ответ
            while (serialPort.waitForReadyRead(10)) {
                // и если появилось мы просто это читаем в пустоту
                serialPort.readAll();

                // сам while необходим для того что ответ приходит порциями
                // и мы хотим считать все что отправилось
            }
        }
        else if(count_a %2 ==0)
        {
            serialPort.write("bb"); // очень важно, что именно двойные кавычки
            serialPort.waitForBytesWritten(); // ждем пока дойдет

            // и не знаю с чем тут связано, но, чтобы сообщение дошло
            // надо обязательно прочитать не пришло ли нам чего в ответ
            //
            // функция waitForReadyRead(10) проверят не появилось
            // в ближайшие 10 миллисекунд чего-нибудь в ответ
            while (serialPort.waitForReadyRead(10)) {
                // и если появилось мы просто это читаем в пустоту
                serialPort.readAll();

                // сам while необходим для того что ответ приходит порциями
                // и мы хотим считать все что отправилось
            }
        }

        // ну и закрываем порт
        serialPort.close();
}


void MainWindow::on_Green_clicked()
{
    QSerialPort serialPort;
        count_b++;
        // указали имя к какому порту будем подключаться
        serialPort.setPortName(this->ui->Port_line->text());
        // указали скорость
        serialPort.setBaudRate(QSerialPort::Baud9600);
        // пробуем подключится
            if (!serialPort.open(QIODevice::ReadWrite)) {
                // если подключится не получится, то покажем сообщение с ошибкой
                QMessageBox::warning(this, "Ошибка", "Не удалось подключится к порту");
                return;
            }
        // отправляем строку с b нашей арудинкой
        if(count_b % 2 != 0)
        {
            serialPort.write("cc"); // очень важно, что именно двойные кавычки
            serialPort.waitForBytesWritten(); // ждем пока дойдет

            // и не знаю с чем тут связано, но, чтобы сообщение дошло
            // надо обязательно прочитать не пришло ли нам чего в ответ
            //
            // функция waitForReadyRead(10) проверят не появилось
            // в ближайшие 10 миллисекунд чего-нибудь в ответ
            while (serialPort.waitForReadyRead(10)) {
                // и если появилось мы просто это читаем в пустоту
                serialPort.readAll();

                // сам while необходим для того что ответ приходит порциями
                // и мы хотим считать все что отправилось
            }
        }
        else if(count_b %2 ==0)
        {
            serialPort.write("dd"); // очень важно, что именно двойные кавычки
            serialPort.waitForBytesWritten(); // ждем пока дойдет

            // и не знаю с чем тут связано, но, чтобы сообщение дошло
            // надо обязательно прочитать не пришло ли нам чего в ответ
            //
            // функция waitForReadyRead(10) проверят не появилось
            // в ближайшие 10 миллисекунд чего-нибудь в ответ
            while (serialPort.waitForReadyRead(10)) {
                // и если появилось мы просто это читаем в пустоту
                serialPort.readAll();

                // сам while необходим для того что ответ приходит порциями
                // и мы хотим считать все что отправилось
            }
        }

        // ну и закрываем порт
        serialPort.close();

}








void MainWindow::on_Blue_clicked()
{
    QSerialPort serialPort;
        count_c++;
        // указали имя к какому порту будем подключаться
        serialPort.setPortName(this->ui->Port_line->text());
        // указали скорость
        serialPort.setBaudRate(QSerialPort::Baud9600);
        // пробуем подключится
            if (!serialPort.open(QIODevice::ReadWrite)) {
                // если подключится не получится, то покажем сообщение с ошибкой
                QMessageBox::warning(this, "Ошибка", "Не удалось подключится к порту");
                return;
            }
        // отправляем строку с b нашей арудинкой
        if(count_c % 2 != 0)
        {
            serialPort.write("ee"); // очень важно, что именно двойные кавычки
            serialPort.waitForBytesWritten(); // ждем пока дойдет

            // и не знаю с чем тут связано, но, чтобы сообщение дошло
            // надо обязательно прочитать не пришло ли нам чего в ответ
            //
            // функция waitForReadyRead(10) проверят не появилось
            // в ближайшие 10 миллисекунд чего-нибудь в ответ
            while (serialPort.waitForReadyRead(10)) {
                // и если появилось мы просто это читаем в пустоту
                serialPort.readAll();

                // сам while необходим для того что ответ приходит порциями
                // и мы хотим считать все что отправилось
            }
        }
        else if(count_c %2 ==0)
        {
            serialPort.write("ff"); // очень важно, что именно двойные кавычки
            serialPort.waitForBytesWritten(); // ждем пока дойдет

            // и не знаю с чем тут связано, но, чтобы сообщение дошло
            // надо обязательно прочитать не пришло ли нам чего в ответ
            //
            // функция waitForReadyRead(10) проверят не появилось
            // в ближайшие 10 миллисекунд чего-нибудь в ответ
            while (serialPort.waitForReadyRead(10)) {
                // и если появилось мы просто это читаем в пустоту
                serialPort.readAll();

                // сам while необходим для того что ответ приходит порциями
                // и мы хотим считать все что отправилось
            }
        }

        // ну и закрываем порт
        serialPort.close();

}


void MainWindow::on_pushButton_2_clicked()
{
    QSerialPort serialPort;

        serialPort.setPortName(this->ui->Port_line->text());
        serialPort.setBaudRate(QSerialPort::Baud9600);

        if (!serialPort.open(QIODevice::ReadWrite)) {
            //QMessageBox::warning(this, "Ошибка", "Не удалось подключится к порту");
            return;
        }

        serialPort.write("t"); // меняем тут на p
        serialPort.waitForBytesWritten();

        QByteArray data;
        while (serialPort.waitForReadyRead(10)) {
            data.append(serialPort.readAll());
        }

        ui->Temperatura_label_2->setText(data); // тут вставляем значение в txtLight

        serialPort.close();
}

