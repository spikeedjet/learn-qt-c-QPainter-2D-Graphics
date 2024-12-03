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

    QPen ellipsePen;
    ellipsePen.setColor(Qt::red);
    ellipsePen.setStyle(Qt::DashLine);
    QPainter ellipsePainter;
    ellipsePainter.begin(this);
    ellipsePainter.setPen(ellipsePen);
    ellipsePainter.setBrush(Qt::DiagCrossPattern);
    QRectF rect(200.0, 300.0, 400.0, 300.0);
    ellipsePainter.drawEllipse(rect);
    ellipsePainter.end();

    QImage image;
    image.load(":/southpark.jpg");
    QPainter imagePainter(this);
    imagePainter.begin(this);
    QRectF target(500.0, 400.0, 200.0, 600.0);
    imagePainter.drawImage(target, image);
    imagePainter.end();


}

void MainWindow::paintAll(QSvgGenerator *generator)
{

}

void MainWindow::on_actionSave_as_SVG_triggered()
{

}

