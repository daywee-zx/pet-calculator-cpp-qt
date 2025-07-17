#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Calculator.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, Calculator* calc = nullptr);
    ~MainWindow();
    void cleaning(bool &flag);

private slots:

    void on_btnSin_clicked();

    void on_btnCos_clicked();

    void on_btnTan_clicked();

    void on_btnCotan_clicked();

    void on_btn0_clicked();

    void on_btn1_clicked();

    void on_btn_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btnPlus_clicked();

    void on_btnMinus_clicked();

    void on_btnMultiplicate_clicked();

    void on_btnDot_clicked();

    void on_BtnDivide_clicked();

    void on_btnPow_clicked();

    void on_btnOpenBracket_clicked();

    void on_btnCloseBracket_clicked();

    void on_btnFact_clicked();

    void on_btnClear_clicked();

    void on_btnEquals_clicked();

private:
    Ui::MainWindow *ui;
    Calculator* calc_;
    bool needsCleaning = false;
};
#endif // MAINWINDOW_H
