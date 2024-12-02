#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter textPainter;
    textPainter.begin(this);
    textPainter.setFont(QFont("Times", 40, QFont::Bold));
    textPainter.drawText( QPointF(30,50),  "Testing");
    textPainter.end();

    QPainter linePainter;
    linePainter.begin(this);
    QLineF line(100.0, 80.0, 300.0, 200.0);
    linePainter.drawLine(line);
    linePainter.end();

    QPainter rectPainter;
    rectPainter.begin(this);
    QRectF rectangle(100.0, 200.0, 400.0, 300.0);
    rectPainter.setBrush(Qt::DiagCrossPattern);
    rectPainter.drawRect(rectangle);
    rectPainter.end();



}
