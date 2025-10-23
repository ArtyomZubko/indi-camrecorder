#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>

#include <QPushButton>

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget* parent = nullptr);
  ~MainWindow();
 private:
  QWidget* centralWidget_;
  QVBoxLayout* mainLayout_;

  QLineEdit* ipInputEdit_;
  QPushButton* connectBtn_;
  QHBoxLayout* ipGroupLayout_;

  // INDI::BaseClientQt* client_;
};
#endif  // MAINWINDOW_H
