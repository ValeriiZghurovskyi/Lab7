#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include <QChar>
#include <QFile>
#include <QDataStream>

class Employee{
private:
    QString name;
    QString position;
    QChar sex;
    int age;
public:

    Employee();
    Employee(QString, QString, QChar, int);

    void setName(QString);
    void setPosition(QString);
    void setSex(QChar);
    void setAge(int);

    int getAge();

    void read(QDataStream&);
    void write(QDataStream&);
    void WriteToFile(const QString&);
};

#endif // EMPLOYEE_H
