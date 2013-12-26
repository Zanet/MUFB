#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "skrzyzowanie.h"

#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    Skrzyzowanie skrzyzowanie;
    skrzyzowanie.InitFile("rozladowanie.txt");


    for(int i = 0;i<100;i++){


    Skrzyzowanie skrzyzowanie;
    skrzyzowanie.SetCzasPrzejazdu(5,1);
    skrzyzowanie.SetMaxAdd(5);
    skrzyzowanie.SetStartEntry(120,100,20,0);
    cout<<i<<endl;

    int j=0;
    while(!skrzyzowanie.rozladowanie)
    {
        skrzyzowanie.obsluga();
        //cout<<j<<endl;
        j++;
    }

    }

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
