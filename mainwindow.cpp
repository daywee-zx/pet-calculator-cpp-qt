#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <Calculator.h>

MainWindow::MainWindow(QWidget *parent, Calculator* calc)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    calc_ = calc;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::cleaning(bool& flag) {
    if (flag) {
        flag = false;
        calc_->clear();
        ui->textBox->clear();
    }
}

void MainWindow::on_btnSin_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("sin")));
}


void MainWindow::on_btnCos_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("cos")));
}


void MainWindow::on_btnTan_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("tg")));
}


void MainWindow::on_btnCotan_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("ctg")));
}


void MainWindow::on_btn0_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("0")));
}


void MainWindow::on_btn1_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("1")));
}


void MainWindow::on_btn_clicked() //no number but i cba fixing it
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("2")));
}


void MainWindow::on_btn3_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("3")));
}


void MainWindow::on_btn4_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("4")));
}


void MainWindow::on_btn5_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("5")));
}


void MainWindow::on_btn6_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("6")));
}


void MainWindow::on_btn7_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("7")));
}


void MainWindow::on_btn8_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("8")));
}


void MainWindow::on_btn9_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("9")));
}


void MainWindow::on_btnPlus_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("+")));
}


void MainWindow::on_btnMinus_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("-")));
}


void MainWindow::on_btnMultiplicate_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("*")));
}


void MainWindow::on_btnDot_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input(".")));
}


void MainWindow::on_BtnDivide_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("/")));
}


void MainWindow::on_btnPow_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("^")));
}


void MainWindow::on_btnOpenBracket_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("(")));
}


void MainWindow::on_btnCloseBracket_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input(")")));
}


void MainWindow::on_btnFact_clicked()
{
    this->cleaning(needsCleaning);
    ui->textBox->setText(QString::fromStdString(calc_->input("!")));
}


void MainWindow::on_btnClear_clicked()
{
    calc_->clear();
    ui->textBox->clear();
}


void MainWindow::on_btnEquals_clicked()
{
    try {ui->textBox->setText(QString::number(calc_->calculate()));}
    catch (const char *msg) {
        std::string error(msg);
        if (error == "ZeroDivision") QMessageBox::about(this, "Exception", "Division by Zero!");
        else QMessageBox::about(this, "Exception", "Unknown exception");
    }

    needsCleaning = true;
}

