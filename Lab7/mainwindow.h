#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <vector>
#include <QString>
#include <QFile>
#include <QDataStream>
#include <QDebug>
#include <QTableView>
#include <QStandardItemModel>
#include <QVBoxLayout>
#include <QDialog>

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
    void on_CreateFile_clicked();

    void on_AppendFileButton_clicked();

    void on_WriteButton_clicked();

    void on_CheckEmpButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
