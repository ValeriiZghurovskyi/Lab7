#define FUNCTIONS_H
#include "employee.h"
#include <vector>
#include <QString>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QTableView>
#include <QStandardItemModel>
#include <QVBoxLayout>
#include <QDialog>

//std::vector<Employee> ReadEmployeesFromFile(const QString& filename)
//{
//    std::vector<Employee> employees;

//    QFile file(filename);
//    if (!file.open(QIODevice::ReadOnly))
//    {
//        return employees;
//    }

//    QDataStream in(&file);
//    in.setVersion(QDataStream::Qt_6_4);

//    while (!file.atEnd())
//    {
//        QString name;
//        QString position;
//        QChar sex;
//        int age;

//        in >> name;
//        in >> position;
//        in >> sex;
//        in >> age;

//        Employee employee;
//        employee.setName(name);
//        employee.setPosition(position);
//        employee.setSex(sex);
//        employee.setAge(age);

//        employees.push_back(employee);
//    }

//    file.close();

//    return employees;
//}

/void ShowEmployeesFromBinFile(QString filename)
//{
//    QFile file(filename);
//    if (!file.open(QIODevice::ReadOnly))
//    {
//        qDebug() << "Failed to open the file.";
//        return;
//    }

//    QDataStream in(&file);
//    in.setVersion(QDataStream::Qt_6_4);

//    QStandardItemModel* model = new QStandardItemModel();
//    model->setColumnCount(4);
//    model->setHeaderData(0, Qt::Horizontal, "Name");
//    model->setHeaderData(1, Qt::Horizontal, "Position");
//    model->setHeaderData(2, Qt::Horizontal, "Sex");
//    model->setHeaderData(3, Qt::Horizontal, "Age");

//    while (!file.atEnd())
//    {
//        QString name;
//        QString position;
//        QChar sex;
//        int age;

//        in >> name;
//        in >> position;
//        in >> sex;
//        in >> age;

//        QList<QStandardItem*> rowItems;
//        rowItems.append(new QStandardItem(name));
//        rowItems.append(new QStandardItem(position));
//        rowItems.append(new QStandardItem(QString(sex)));
//        rowItems.append(new QStandardItem(QString::number(age)));

//        model->appendRow(rowItems);
//    }

//    file.close();

//    QTableView* tableView = new QTableView();
//    tableView->setModel(model);

//    QDialog* dialog = new QDialog();
//    QVBoxLayout* layout = new QVBoxLayout();
//    layout->addWidget(tableView);
//    dialog->setLayout(layout);
//    dialog->exec();

//    delete dialog;
//}
