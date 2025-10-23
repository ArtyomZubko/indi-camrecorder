#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
  centralWidget_ = new QWidget(this);
  setCentralWidget(centralWidget_);
  mainLayout_ = new QVBoxLayout(centralWidget_);

  ipInputEdit_ = new QLineEdit("127.0.0.1:7624",this);
  connectBtn_ = new QPushButton("Connect", this);

  ipGroupLayout_ = new QHBoxLayout();
  ipGroupLayout_->addWidget(ipInputEdit_);
  ipGroupLayout_->addWidget(connectBtn_);

  mainLayout_->addLayout(ipGroupLayout_);
}

MainWindow::~MainWindow() {}
