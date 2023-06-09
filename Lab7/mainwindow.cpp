#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include "employee.h"

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


void MainWindow::on_CreateFile_clicked()
{
    try {
        QString fileName = ui->CreateFileName->text();
        if (fileName.isEmpty()) {
            throw std::runtime_error("Введіть назву файлу!");
        }

        QFile file(fileName);
        if (file.exists()) {
            throw std::runtime_error("Файл уже існує!");
        }

        if (!file.open(QIODevice::WriteOnly)) {
            throw std::runtime_error("Не вдалося створити файл!");
        }

        file.close();

        QMessageBox::information(this, "Успіх", "Бінарний файл створено!");
        ui->CreateFileName->clear();
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Помилка", e.what());
    }
}



void MainWindow::on_AppendFileButton_clicked()
{
    try {
        QString fileName = ui->AppendFileName->text();
        QString name = ui->Name->text();
        QString position = ui->Position->text();
        QString sex = ui->Sex->text();
        QString ageText = ui->Age->text();

        if (name.isEmpty() || position.isEmpty() || sex.isEmpty() || ageText.isEmpty() || fileName.isEmpty()) {
            throw std::runtime_error("Заповніть всі поля");
        }

        if (fileName.isEmpty()) {
            throw std::runtime_error("Введіть назву файлу");
        }

        QFile file(fileName);
        if (!file.exists()) {
            throw std::runtime_error("Файл не існує");
        }

        if (!file.open(QIODevice::Append)) {
            throw std::runtime_error("Не вдалося відкрити файл для запису");
        }

        int age = ageText.toInt();
        if (age < 18) {
            throw std::runtime_error("Вік повинен бути не менше 18 років");
        }

        if (sex.length() != 1) {
            throw std::runtime_error("Поле 'Стать' повинно містити лише один символ");
        }

        QChar sexChar = sex.at(0);
        if (sexChar != 'm' && sexChar != 'w') {
            throw std::runtime_error("Некоректне значення поля 'Стать'");
        }

        Employee emp;
        emp.setName(name);
        emp.setPosition(position);
        emp.setSex(sexChar);
        emp.setAge(age);

        emp.WriteToFile(fileName);
        file.close();

        QMessageBox::information(this, "Успіх", "Працівника успішно додано");

        ui->Name->clear();
        ui->Position->clear();
        ui->Sex->clear();
        ui->Age->clear();

    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Помилка", e.what());
    }
}





void MainWindow::on_WriteButton_clicked()
{
    try {
        QString startFileName = ui->StartFileName->text();
        QString resultFileName = ui->ResultFileName->text();

        if (startFileName.isEmpty() || resultFileName.isEmpty()) {
            throw std::runtime_error("Будь ласка, введіть ім'я вхідного та вихідного файлів");
        }

        QFile inputFile(startFileName);
        if (!inputFile.exists()) {
            throw std::runtime_error("Вхідний файл не існує");
        }
        if (!inputFile.open(QIODevice::ReadOnly)) {
            throw std::runtime_error("Помилка відкриття вхідного файлу");
        }

        QFile outputFile(resultFileName);
        if (!outputFile.open(QIODevice::WriteOnly)) {
            throw std::runtime_error("Помилка відкриття вихідного файлу");
        }

        QDataStream inputStream(&inputFile);
        QDataStream outputStream(&outputFile);

        while (!inputStream.atEnd()) {
            Employee emp;

            // Зчитування працівника з вхідного файлу
            emp.read(inputStream);

            // Перевірка, чи досяг працівник пенсійного віку
            if (emp.getAge() > 65) {
                // Запис працівника у вихідний файл
                emp.write(outputStream);
            }
        }

        // Закриття файлів
        inputFile.close();
        outputFile.close();
        QMessageBox::information(this, "Успіх", "Усіх пенсіонерів успішно додано в файл");
        ui->StartFileName->clear();
        ui->ResultFileName->clear();
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Помилка", e.what());
    }
}




void MainWindow::on_CheckEmpButton_clicked()
{
    try {
        QString fileName = ui->CheckFileName->text();

        if (fileName.isEmpty()) {
            throw std::runtime_error("Будь ласка, введіть ім'я файлу");
        }

        QFile file(fileName);

        if (!file.exists()) {
            throw std::runtime_error("Файл не існує");
        }

        if (!file.open(QIODevice::ReadOnly)) {
            throw std::runtime_error("Помилка відкриття файлу");
        }

        QDataStream in(&file);
        in.setVersion(QDataStream::Qt_6_4);

        QStandardItemModel* model = new QStandardItemModel();
        model->setColumnCount(4);
        model->setHeaderData(0, Qt::Horizontal, "Name");
        model->setHeaderData(1, Qt::Horizontal, "Position");
        model->setHeaderData(2, Qt::Horizontal, "Sex");
        model->setHeaderData(3, Qt::Horizontal, "Age");

        while (!file.atEnd())
        {
            QString name;
            QString position;
            QChar sex;
            int age;

            in >> name;
            in >> position;
            in >> sex;
            in >> age;

            QList<QStandardItem*> rowItems;
            rowItems.append(new QStandardItem(name));
            rowItems.append(new QStandardItem(position));
            rowItems.append(new QStandardItem(QString(sex)));
            rowItems.append(new QStandardItem(QString::number(age)));

            model->appendRow(rowItems);
        }

        file.close();

        QTableView* tableView = new QTableView();
        tableView->setModel(model);

        QDialog* dialog = new QDialog();
        QVBoxLayout* layout = new QVBoxLayout();
        layout->addWidget(tableView);
        dialog->setLayout(layout);
        dialog->resize(500, 600);
        dialog->exec();
        ui->CheckFileName->clear();

        delete dialog;
    } catch (const std::exception& e) {
        QMessageBox::critical(this, "Помилка", e.what());
    }
}


