#include "employee.h"

Employee::Employee()
{
}

Employee::Employee(QString name, QString position, QChar sex, int age){
    this->name = name;
    this->position = position;
    this->sex = sex;
    this->age = age;
}
void Employee::setAge(int age){
    this->age = age;
}

void Employee::setName(QString name){
    this->name = name;
}

void Employee::setPosition(QString position){
    this->position = position;
}

void Employee::setSex(QChar sex){
    this->sex = sex;
}

int Employee::getAge(){
    return age;
}

void Employee::read(QDataStream& stream){
    stream >> name;
    stream >> position;
    stream >> sex;
    stream >> age;
}

void Employee::write(QDataStream& stream)
{
    stream << name;
    stream << position;
    stream << sex;
    stream << age;
}

void Employee::WriteToFile(const QString& filename)
{
    QFile file(filename);
    file.open(QIODevice::Append);

    QDataStream out(&file);
    out.setVersion(QDataStream::Qt_6_4);

    out << name;
    out << position;
    out << sex;
    out << age;

    file.close();
}





















