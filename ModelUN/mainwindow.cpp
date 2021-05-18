#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QResizeEvent"
#include <QScrollBar>
#include <QtGlobal>
#include <QFormLayout>
#include <QScrollArea>
#include <QComboBox>
#include <QLCDNumber>
#include <QString>
#include <QPushButton>
#include <QSettings>
#include <QDir>
#include <QCloseEvent>
#include <vector>
#include <QRect>
#include <QLineEdit>
#include <QTime>
#include <QDesktopWidget>
MainWindow::MainWindow(QWidget* parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	load();
	wid->resize(600, 500);
	QFont ft("MS Shell Dig 2", 15);
	awards->setEditable(true);
	awards->setFont(ft);

	setStyleSheet("#MainWindow {background-color: #01B9F5;}");
	/*
		ui->textBrowser->setStyleSheet("background-color: #01B9F5; border: 1px solid black;");

		ui->textBrowser_2->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textBrowser_3->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textBrowser_4->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textBrowser_5->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textBrowser_6->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textBrowser_7->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		 ui->textEdit->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
			 ui->textEdit_2->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_3->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_4->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_5->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_6->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_7->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_8->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_9->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_10->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_13->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_14->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_15->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_16->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_17->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_18->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_19->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->textEdit_20->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->pushButton->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->pushButton_2->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_2->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_3->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_4->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_5->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_6->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_7->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_8->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_9->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_10->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_11->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_12->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_13->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_14->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_15->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_16->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_17->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_18->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_19->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_20->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_21->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_22->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_23->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_24->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_25->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_26->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_27->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_28->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_29->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_30->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_31->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_32->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_33->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_34->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_35->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
		ui->comboBox_36->setStyleSheet("background-color: #5B92E5; color: white; border: 1px solid black;");
	*/
	if (settings4->value("Save and Load Speakers Lists") == 1)
	{
		disconnect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_currentIndexChanged()));
		disconnect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_2_currentIndexChanged()));
		disconnect(ui->comboBox_3, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_3_currentIndexChanged()));
		disconnect(ui->comboBox_4, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_4_currentIndexChanged()));
		disconnect(ui->comboBox_5, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_5_currentIndexChanged()));
		disconnect(ui->comboBox_6, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_6_currentIndexChanged()));
		disconnect(ui->comboBox_7, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_7_currentIndexChanged()));
		disconnect(ui->comboBox_8, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_8_currentIndexChanged()));
		disconnect(ui->comboBox_9, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_9_currentIndexChanged()));
		disconnect(ui->comboBox_10, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_10_currentIndexChanged()));
		disconnect(ui->comboBox_11, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_11_currentIndexChanged()));
		disconnect(ui->comboBox_12, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_12_currentIndexChanged()));
		disconnect(ui->comboBox_13, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_13_currentIndexChanged()));
		disconnect(ui->comboBox_14, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_14_currentIndexChanged()));
		disconnect(ui->comboBox_15, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_15_currentIndexChanged()));
		disconnect(ui->comboBox_16, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_16_currentIndexChanged()));
		disconnect(ui->comboBox_17, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_17_currentIndexChanged()));
		disconnect(ui->comboBox_18, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_18_currentIndexChanged()));
		disconnect(ui->comboBox_19, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_19_currentIndexChanged()));
		disconnect(ui->comboBox_20, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_20_currentIndexChanged()));
		disconnect(ui->comboBox_21, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_21_currentIndexChanged()));
		disconnect(ui->comboBox_22, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_22_currentIndexChanged()));
		disconnect(ui->comboBox_23, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_23_currentIndexChanged()));
		disconnect(ui->comboBox_24, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_24_currentIndexChanged()));
		disconnect(ui->comboBox_25, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_25_currentIndexChanged()));
		disconnect(ui->comboBox_26, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_26_currentIndexChanged()));
		disconnect(ui->comboBox_27, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_27_currentIndexChanged()));
		disconnect(ui->comboBox_28, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_28_currentIndexChanged()));
		disconnect(ui->comboBox_29, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_29_currentIndexChanged()));
		disconnect(ui->comboBox_30, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_30_currentIndexChanged()));
	}


	//Makes the check boxes bigger
	ui->checkBox->setStyleSheet("QCheckBox::indicator { width:50px; height: 50px;}");
	ui->checkBox_2->setStyleSheet("QCheckBox::indicator { width:50px; height: 50px;}");
	ui->checkBox_3->setStyleSheet("QCheckBox::indicator { width:50px; height: 50px;}");
	ui->checkBox_4->setStyleSheet("QCheckBox::indicator { width:50px; height: 50px;}");
	ui->checkBox_5->setStyleSheet("QCheckBox::indicator { width:50px; height: 50px;}");
	ui->checkBox_6->setStyleSheet("QCheckBox::indicator { width:50px; height: 50px;}");
	//Hides the scroll bar from the text browsers
	ui->textBrowser->verticalScrollBar()->setStyleSheet("QScrollBar {width:0px;}");
	ui->textBrowser_2->verticalScrollBar()->setStyleSheet("QScrollBar {width:0px;}");
	ui->textBrowser_3->verticalScrollBar()->setStyleSheet("QScrollBar {width:0px;}");
	ui->textBrowser_4->verticalScrollBar()->setStyleSheet("QScrollBar {width:0px;}");
	ui->textBrowser_5->verticalScrollBar()->setStyleSheet("QScrollBar {width:0px;}");
	ui->textBrowser_6->verticalScrollBar()->setStyleSheet("QScrollBar {width:0px;}");
	ui->textBrowser_7->verticalScrollBar()->setStyleSheet("QScrollBar {width:0px;}");
	//Connects the timeout signal from the QTimer to the tick slot which continues the timer
	wid->setGeometry(QRect(400, 200, 1200, 600));
	QIcon icon("icon.png");
	wid->setWindowIcon(icon);
	connect(timerr, SIGNAL(timeout()), this, SLOT(tick()));
	connect(wid, SIGNAL(onClose(QCloseEvent*)), this, SLOT(reset()));
	//Calls the load function which loads Matrix.ini


}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::resizeEvent(QResizeEvent* e)
{
	//Adjusts text size of Primary Speakers List
	ui->textBrowser->selectAll();
	ui->textBrowser->setFontPointSize(ui->textBrowser->size().width() * 0.053);
	//Adjusts text size of Secondary Speakers List
	ui->textBrowser_2->selectAll();
	ui->textBrowser_2->setFontPointSize(ui->textBrowser_2->size().width() * 0.050);
	//Adjusts text size of Motions
	ui->textBrowser_3->selectAll();
	ui->textBrowser_3->setFontPointSize(ui->textBrowser_3->size().height() * 0.4);
	//Adjusts text size of Topic/Type
	ui->textBrowser_4->selectAll();
	ui->textBrowser_4->setFontPointSize(ui->textBrowser_4->size().width() * 0.06);
	//Adjusts text size of Total Time
	ui->textBrowser_5->selectAll();
	ui->textBrowser_5->setFontPointSize(ui->textBrowser_5->size().height() * 0.16);
	//Adjusts text size of Speaking Time
	ui->textBrowser_6->selectAll();
	ui->textBrowser_6->setFontPointSize(ui->textBrowser_6->size().height() * 0.15);
	//Adjusts text size of Passed
	ui->textBrowser_7->selectAll();
	ui->textBrowser_7->setFontPointSize(ui->textBrowser_7->size().width() * 0.16);



	QTextCursor cursor = ui->textBrowser->textCursor();
	cursor.movePosition(QTextCursor::End);
	ui->textBrowser->setTextCursor(cursor);

	QTextCursor cursor2 = ui->textBrowser_2->textCursor();
	cursor2.movePosition(QTextCursor::End);
	ui->textBrowser_2->setTextCursor(cursor2);

	QTextCursor cursor3 = ui->textBrowser_3->textCursor();
	cursor3.movePosition(QTextCursor::End);
	ui->textBrowser_3->setTextCursor(cursor3);


	QTextCursor cursor5 = ui->textBrowser_5->textCursor();
	cursor5.movePosition(QTextCursor::End);
	ui->textBrowser_5->setTextCursor(cursor5);

	QTextCursor cursor6 = ui->textBrowser_6->textCursor();
	cursor6.movePosition(QTextCursor::End);
	ui->textBrowser_6->setTextCursor(cursor6);

	QTextCursor cursor7 = ui->textBrowser_7->textCursor();
	cursor7.movePosition(QTextCursor::End);
	ui->textBrowser_7->setTextCursor(cursor7);

	QTextCursor cursor4 = ui->textBrowser_4->textCursor();
	cursor4.movePosition(QTextCursor::End);
	cursor4.setPosition(0);
	ui->textBrowser_4->setTextCursor(cursor4);


}





void MainWindow::on_actionRoll_Call_triggered()
{
	CloseableWidget* wdg = new CloseableWidget;
	connect(wdg, SIGNAL(onClose(QCloseEvent*)), this, SLOT(load()));
	QScrollArea* scroll = new QScrollArea;
	scroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	QWidget* content_widget = new QWidget;

	QFormLayout* formLayout = new QFormLayout(content_widget);

	QStringList items{ "Present", "Present and Voting", "Absent", "Absent from Commitee" };

	for (int x = 0; x < keys.size(); x++)
	{
		if (status[x] != 4) {
			QComboBox* combo = new QComboBox;
			combo->addItems(items);
			combo->setProperty("MyIndex", x);
			combo->setCurrentIndex(status[x]);
			QLabel* label = new QLabel;
			label->setText(keys.at(x));
			QFont font = label->font();
			font.setPointSize(20);
			font.setBold(true);
			label->setFont(font);
			combo->setFont(font);

			formLayout->addRow(label, combo);
			connect(combo, SIGNAL(currentIndexChanged(int)), this, SLOT(roll(int)));
		}
	}

	scroll->setWidget(content_widget);
	wdg->setLayout(new QVBoxLayout);
	wdg->layout()->addWidget(scroll);
	QDesktopWidget desktop;
	wdg->resize(desktop.width() * 0.6, desktop.height() * 0.9);
	wdg->move(desktop.width() / 5, 0);
	QIcon icon("icon.png");
	wdg->setWindowIcon(icon);
	wdg->show();

}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
	if (arg1 == 2) {
		speak(1);
	}

}


void MainWindow::on_start_clicked()
{
	stoptimer = 0;
	start->setText("Stop");

	speakingtt = speakingt;
	int minutes = speakingtt / 60;
	int seconds = speakingtt % 60;
	time.setHMS(0, minutes, seconds);
	QString text = time.toString("mm:ss");
	timer->display(text);
	timerr->start(1000);
	disconnect(this->start, SIGNAL(pressed()), this, SLOT(on_start_clicked()));
	connect(this->start, SIGNAL(pressed()), this, SLOT(on_stop_clicked()));

}

void MainWindow::tick()
{
	if (stoptimer == 0) {
		if (speakingtt == 0) { on_stop_clicked(); }
		else {
			speakingtt--;
			time = time.addSecs(-1);
			QString text = time.toString("mm:ss");
			timer->display(text);
			timerr->start(1000);
		}
	}

}



void MainWindow::on_stop_clicked()
{
	stopped = true;
	if (firstt = true && currentt != awards->currentText()) { lastSpeak = true; }
	stoptimer = 1;
	firstt = false;
	QString delegate = awards->currentText();
	if (delegate != "") {

		int time;
		if (settings2->contains(delegate)) { time = (settings2->value(delegate).toInt()) + (speakingt - speakingtt); }
		else { time = speakingt - speakingtt; }
		settings2->setValue(delegate, time);
	}

	caucus_time += (speakingt - speakingtt);
	if (totalt - caucus_time <= speakingt / 2) { wid->close(); }
	this->start->setText("Start");
	awards->setCurrentIndex(0);
	if (lastSpeak == true) { if ((totalt - caucus_time) - (speakingt) <= speakingt / 2 && settings4->value("Automatically Select Last Speaker").toInt() == 0) { awards->setCurrentText(currentt); } }
	else { awards->setCurrentIndex(0); }
	disconnect(this->start, SIGNAL(pressed()), this, SLOT(on_stop_clicked()));
	connect(this->start, SIGNAL(pressed()), this, SLOT(on_start_clicked()));
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
	if (arg1 == 2) {
		speak(2);
	}
}

void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
	if (arg1 == 2) {
		speak(3);
	}
}

void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
	if (arg1 == 2) {
		speak(4);
	}
}

void MainWindow::on_checkBox_5_stateChanged(int arg1)
{
	if (arg1 == 2) {
		speak(5);
	}

}

void MainWindow::on_checkBox_6_stateChanged(int arg1)
{
	if (arg1 == 2) {
		speak(6);
	}
}

void MainWindow::roll(int arg1)
{
	int y = sender()->property("MyIndex").toInt();
	status[y] = arg1;
	settings->setValue(keys.at(y), arg1);


}



void MainWindow::speak(int pos)
{
	switch (pos) {
	case 0: { speaking = QString::number(60); total = QString::number(0);
	} break;
	case 1: { QString type = ui->textEdit->toPlainText();
		type = type.simplified();
		speaking = ui->textEdit_5->toPlainText();
		total = ui->textEdit_4->toPlainText();
		if (total == "" || total == "0") { ui->checkBox->setCheckState(Qt::CheckState::Unchecked); return; }
		else if (type == "Unmod" || type == "unmod" || type == "Unmoderated" || type == "unmoderated" || speaking == "" || speaking == "0") { awards->hide(); speaking = ui->textEdit_4->toPlainText(); total = QString::number(0); }
		else {
			speaking = ui->textEdit_5->toPlainText();
			total = ui->textEdit_4->toPlainText();
			ui->textEdit_2->setText("");
			ui->textEdit_3->setText("");
			ui->textEdit_6->setText("");
			ui->textEdit_9->setText("");
			ui->textEdit_10->setText("");
			ui->textEdit_7->setText("");
			ui->textEdit_13->setText("");
			ui->textEdit_15->setText("");
			ui->textEdit_17->setText("");
			ui->textEdit_19->setText("");
			ui->textEdit_8->setText("");
			ui->textEdit_14->setText("");
			ui->textEdit_16->setText("");
			ui->textEdit_18->setText("");
			ui->textEdit_20->setText("");
			ui->comboBox_35->setCurrentIndex(0);
			ui->comboBox_34->setCurrentIndex(0);
			ui->comboBox_36->setCurrentIndex(0);
			ui->comboBox_33->setCurrentIndex(0);
			ui->comboBox_32->setCurrentIndex(0);
		}
	}
		  break;
	case 2: { QString type = ui->textEdit_2->toPlainText();
		type = type.simplified();
		speaking = ui->textEdit_8->toPlainText();
		total = ui->textEdit_7->toPlainText();
		if (total == "" || total == "0") { ui->checkBox_2->setCheckState(Qt::CheckState::Unchecked); return; }

		else if (type == "Unmod" || type == "unmod" || type == "Unmoderated" || type == "unmoderated" || speaking == "" || speaking == "0") { awards->hide(); speaking = ui->textEdit_7->toPlainText(); total = QString::number(0); }

		else {
			speaking = ui->textEdit_8->toPlainText();
			;
			total = ui->textEdit_7->toPlainText();
			ui->textEdit->setText("");
			ui->textEdit_3->setText("");
			ui->textEdit_4->setText("");
			ui->textEdit_5->setText("");

			ui->textEdit_9->setText("");
			ui->textEdit_10->setText("");

			ui->textEdit_13->setText("");
			ui->textEdit_15->setText("");
			ui->textEdit_17->setText("");
			ui->textEdit_19->setText("");

			ui->textEdit_14->setText("");
			ui->textEdit_16->setText("");
			ui->textEdit_18->setText("");
			ui->textEdit_20->setText("");
			ui->comboBox_31->setCurrentIndex(0);
			ui->comboBox_34->setCurrentIndex(0);
			ui->comboBox_36->setCurrentIndex(0);
			ui->comboBox_33->setCurrentIndex(0);
			ui->comboBox_32->setCurrentIndex(0);
		}}
		  break;
	case 3: { QString type = ui->textEdit_3->toPlainText();
		type = type.simplified();
		speaking = ui->textEdit_14->toPlainText();
		total = ui->textEdit_13->toPlainText();
		if (total == "" || total == "0") { ui->checkBox_3->setCheckState(Qt::CheckState::Unchecked); return; }
		else if (type == "Unmod" || type == "unmod" || type == "Unmoderated" || type == "unmoderated" || speaking == "" || speaking == "0") { awards->hide(); speaking = ui->textEdit_13->toPlainText(); total = QString::number(0); }
		else {
			speaking = ui->textEdit_14->toPlainText();

			total = ui->textEdit_13->toPlainText();

			ui->textEdit->setText("");
			ui->textEdit_2->setText("");
			ui->textEdit_4->setText("");
			ui->textEdit_5->setText("");
			ui->textEdit_6->setText("");
			ui->textEdit_9->setText("");
			ui->textEdit_10->setText("");

			ui->textEdit_7->setText("");

			ui->textEdit_15->setText("");
			ui->textEdit_17->setText("");
			ui->textEdit_19->setText("");
			ui->textEdit_8->setText("");

			ui->textEdit_16->setText("");
			ui->textEdit_18->setText("");
			ui->textEdit_20->setText("");
			ui->comboBox_31->setCurrentIndex(0);
			ui->comboBox_35->setCurrentIndex(0);
			ui->comboBox_36->setCurrentIndex(0);
			ui->comboBox_33->setCurrentIndex(0);
			ui->comboBox_32->setCurrentIndex(0);
		}}
		  break;
	case 4: { QString type = ui->textEdit_6->toPlainText();
		type = type.simplified();
		speaking = ui->textEdit_16->toPlainText();
		total = ui->textEdit_15->toPlainText();
		if (total == "" || total == "0") { ui->checkBox_4->setCheckState(Qt::CheckState::Unchecked); return; }
		else if (type == "Unmod" || type == "unmod" || type == "Unmoderated" || type == "unmoderated" || speaking == "" || speaking == "0") { awards->hide(); speaking = ui->textEdit_15->toPlainText(); total = QString::number(0); }
		else {
			speaking = ui->textEdit_16->toPlainText();

			total = ui->textEdit_15->toPlainText();
			ui->textEdit->setText("");
			ui->textEdit_2->setText("");
			ui->textEdit_3->setText("");
			ui->textEdit_4->setText("");
			ui->textEdit_5->setText("");

			ui->textEdit_9->setText("");
			ui->textEdit_10->setText("");

			ui->textEdit_7->setText("");
			ui->textEdit_13->setText("");

			ui->textEdit_17->setText("");
			ui->textEdit_19->setText("");
			ui->textEdit_8->setText("");
			ui->textEdit_14->setText("");

			ui->textEdit_18->setText("");
			ui->textEdit_20->setText("");
			ui->comboBox_31->setCurrentIndex(0);
			ui->comboBox_35->setCurrentIndex(0);
			ui->comboBox_34->setCurrentIndex(0);
			ui->comboBox_33->setCurrentIndex(0);
			ui->comboBox_32->setCurrentIndex(0);

		}}
		  break;
	case 5: { QString type = ui->textEdit_9->toPlainText();
		type = type.simplified();
		speaking = ui->textEdit_18->toPlainText();
		total = ui->textEdit_17->toPlainText();
		if (total == "" || total == "0") { ui->checkBox_5->setCheckState(Qt::CheckState::Unchecked); return; }
		else if (type == "Unmod" || type == "unmod" || type == "Unmoderated" || type == "unmoderated" || speaking == "" || speaking == "0") { awards->hide(); speaking = ui->textEdit_17->toPlainText(); total = QString::number(0); }
		else {
			speaking = ui->textEdit_18->toPlainText();

			total = ui->textEdit_17->toPlainText();


			ui->textEdit->setText("");
			ui->textEdit_2->setText("");
			ui->textEdit_3->setText("");
			ui->textEdit_4->setText("");
			ui->textEdit_5->setText("");
			ui->textEdit_6->setText("");

			ui->textEdit_10->setText("");


			ui->textEdit_7->setText("");
			ui->textEdit_13->setText("");
			ui->textEdit_15->setText("");

			ui->textEdit_19->setText("");
			ui->textEdit_8->setText("");
			ui->textEdit_14->setText("");
			ui->textEdit_16->setText("");

			ui->textEdit_20->setText("");
			ui->comboBox_31->setCurrentIndex(0);
			ui->comboBox_35->setCurrentIndex(0);
			ui->comboBox_34->setCurrentIndex(0);
			ui->comboBox_36->setCurrentIndex(0);
			ui->comboBox_32->setCurrentIndex(0);

		}}
		  break;
	case 6: { QString type = ui->textEdit_10->toPlainText();
		type = type.simplified();
		speaking = ui->textEdit_20->toPlainText();
		total = ui->textEdit_19->toPlainText();
		if (total == "" || total == "0") { ui->checkBox_6->setCheckState(Qt::CheckState::Unchecked); return; }
		else if (type == "Unmod" || type == "unmod" || type == "Unmoderated" || type == "unmoderated" || speaking == "" || speaking == "0") { awards->hide(); speaking = ui->textEdit_19->toPlainText(); total = QString::number(0); }
		else {
			speaking = ui->textEdit_20->toPlainText();

			total = ui->textEdit_19->toPlainText();
			ui->textEdit->setText("");
			ui->textEdit_2->setText("");

			ui->textEdit_3->setText("");
			ui->textEdit_4->setText("");
			ui->textEdit_5->setText("");
			ui->textEdit_6->setText("");
			ui->textEdit_9->setText("");



			ui->textEdit_7->setText("");
			ui->textEdit_13->setText("");
			ui->textEdit_15->setText("");
			ui->textEdit_17->setText("");

			ui->textEdit_8->setText("");
			ui->textEdit_14->setText("");
			ui->textEdit_16->setText("");
			ui->textEdit_18->setText("");
			ui->comboBox_31->setCurrentIndex(0);
			ui->comboBox_35->setCurrentIndex(0);
			ui->comboBox_34->setCurrentIndex(0);
			ui->comboBox_36->setCurrentIndex(0);
			ui->comboBox_33->setCurrentIndex(0);

		}}
		  break;
	}
	speakingt = speaking.toInt();
	totalt = total.toInt();
	if (speakingt == 0) { speakingt = 60; }
	if (totalt == 0 && pos != 0) { totalt = 600; }
	if (progress == false) {
		QVBoxLayout* main = new QVBoxLayout;

		int length = present.size();
		awards->addItem("");
		for (int x = 0; x <= length - 1; x++)
		{
			awards->addItem(present[x]);
		}
		start->setText("Start");
		main->addWidget(timer);
		main->addWidget(awards);
		main->addWidget(start);
		int minutes = speakingt / 60;
		int seconds = speakingt % 60;
		QTime timee(0, minutes, seconds);
		QString text = timee.toString("mm:ss");
		timer->display(text);
		progress = true;
		ui->checkBox->setCheckable(false);
		ui->checkBox_2->setCheckable(false);
		ui->checkBox_3->setCheckable(false);
		ui->checkBox_4->setCheckable(false);
		ui->checkBox_5->setCheckable(false);
		ui->checkBox_6->setCheckable(false);
		disconnect(this->start, SIGNAL(pressed()), this, SLOT(on_stop_clicked()));
		connect(this->start, SIGNAL(pressed()), this, SLOT(on_start_clicked()));
		wid->setLayout(main);
		wid->show();
	}
	else {
		wid->show(); awards->clear(); int length = status.size();
		awards->addItem("");
		for (int x = 0; x <= length - 1; x++)
		{
			if (status[x] == 0 || status[x] == 1)
			{
				awards->addItem(keys.at(x));
			}
		}
	}
	int minutes = speakingt / 60;
	int seconds = speakingt % 60;
	QTime timee(0, minutes, seconds);
	QString text = timee.toString("mm:ss");
	timer->display(text);
	start->setText("Start");
	switch (pos)
	{
	case 1: {if (settings4->value("Automatically Select Last Speaker").toInt() == 0) { awards->setCurrentText(ui->comboBox_31->currentText()); } currentt = ui->comboBox_31->currentText(); }
		  break;
	case 2: {if (settings4->value("Automatically Select Last Speaker").toInt() == 0) { awards->setCurrentText(ui->comboBox_35->currentText()); } currentt = ui->comboBox_35->currentText(); }
		  break;
	case 3: {if (settings4->value("Automatically Select Last Speaker").toInt() == 0) { awards->setCurrentText(ui->comboBox_34->currentText()); } currentt = ui->comboBox_34->currentText(); }
		  break;
	case 4: {if (settings4->value("Automatically Select Last Speaker").toInt() == 0) { awards->setCurrentText(ui->comboBox_36->currentText()); } currentt = ui->comboBox_36->currentText(); }
		  break;
	case 5: {if (settings4->value("Automatically Select Last Speaker").toInt() == 0) { awards->setCurrentText(ui->comboBox_33->currentText()); } currentt = ui->comboBox_33->currentText(); }
		  break;
	case 6: {if (settings4->value("Automatically Select Last Speaker").toInt() == 0) { awards->setCurrentText(ui->comboBox_32->currentText()); } currentt = ui->comboBox_32->currentText(); }
		  break;
	}
	wid->show();
}

void MainWindow::load()
{
	disconnect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_currentIndexChanged()));
	disconnect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_2_currentIndexChanged()));
	disconnect(ui->comboBox_3, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_3_currentIndexChanged()));
	disconnect(ui->comboBox_4, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_4_currentIndexChanged()));
	disconnect(ui->comboBox_5, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_5_currentIndexChanged()));
	disconnect(ui->comboBox_6, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_6_currentIndexChanged()));
	disconnect(ui->comboBox_7, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_7_currentIndexChanged()));
	disconnect(ui->comboBox_8, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_8_currentIndexChanged()));
	disconnect(ui->comboBox_9, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_9_currentIndexChanged()));
	disconnect(ui->comboBox_10, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_10_currentIndexChanged()));
	disconnect(ui->comboBox_11, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_11_currentIndexChanged()));
	disconnect(ui->comboBox_12, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_12_currentIndexChanged()));
	disconnect(ui->comboBox_13, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_13_currentIndexChanged()));
	disconnect(ui->comboBox_14, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_14_currentIndexChanged()));
	disconnect(ui->comboBox_15, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_15_currentIndexChanged()));
	disconnect(ui->comboBox_16, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_16_currentIndexChanged()));
	disconnect(ui->comboBox_17, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_17_currentIndexChanged()));
	disconnect(ui->comboBox_18, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_18_currentIndexChanged()));
	disconnect(ui->comboBox_19, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_19_currentIndexChanged()));
	disconnect(ui->comboBox_20, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_20_currentIndexChanged()));
	disconnect(ui->comboBox_21, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_21_currentIndexChanged()));
	disconnect(ui->comboBox_22, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_22_currentIndexChanged()));
	disconnect(ui->comboBox_23, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_23_currentIndexChanged()));
	disconnect(ui->comboBox_24, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_24_currentIndexChanged()));
	disconnect(ui->comboBox_25, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_25_currentIndexChanged()));
	disconnect(ui->comboBox_26, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_26_currentIndexChanged()));
	disconnect(ui->comboBox_27, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_27_currentIndexChanged()));
	disconnect(ui->comboBox_28, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_28_currentIndexChanged()));
	disconnect(ui->comboBox_29, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_29_currentIndexChanged()));
	disconnect(ui->comboBox_30, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_30_currentIndexChanged()));
	present.clear();
	status.clear();

	keys = settings->allKeys();
	keys2 = settings2->allKeys();
	int size = keys.size();

	if (settings4->value("Show Absent Delegates in Speaker Selector").toInt() == 1) {
		for (int x = 0; x <= size - 1; x++)
		{
			status.push_back(settings->value(keys.at(x)).toInt());
			if (status[x] == 0 || status[x] == 1) { present.push_back(keys.at(x)); }
		}
	}
	else {
		for (int x = 0; x <= size - 1; x++)
		{
			status.push_back(settings->value(keys.at(x)).toInt());
			if (status[x] != 3) { present.push_back(keys.at(x)); }
		}
	}
	for (int x = 0; x <= size - 1; x++)
	{
		if (status[x] == 3) { settings->remove(keys[x]); keys.erase(keys.begin() + x); status.erase(status.begin() + x); }
	}
	ui->comboBox->clear();
	ui->comboBox_2->clear();
	ui->comboBox_3->clear();
	ui->comboBox_4->clear();
	ui->comboBox_5->clear();
	ui->comboBox_6->clear();
	ui->comboBox_7->clear();
	ui->comboBox_8->clear();
	ui->comboBox_9->clear();
	ui->comboBox_10->clear();
	ui->comboBox_11->clear();
	ui->comboBox_12->clear();
	ui->comboBox_13->clear();
	ui->comboBox_14->clear();
	ui->comboBox_15->clear();
	ui->comboBox_16->clear();
	ui->comboBox_17->clear();
	ui->comboBox_18->clear();
	ui->comboBox_19->clear();
	ui->comboBox_20->clear();
	ui->comboBox_21->clear();
	ui->comboBox_22->clear();
	ui->comboBox_23->clear();
	ui->comboBox_24->clear();
	ui->comboBox_25->clear();
	ui->comboBox_26->clear();
	ui->comboBox_27->clear();
	ui->comboBox_28->clear();
	ui->comboBox_29->clear();
	ui->comboBox_30->clear();
	ui->comboBox_31->clear();
	ui->comboBox_32->clear();
	ui->comboBox_33->clear();
	ui->comboBox_34->clear();
	ui->comboBox_35->clear();
	ui->comboBox_36->clear();

	ui->comboBox->addItem("");
	ui->comboBox_2->addItem("");
	ui->comboBox_3->addItem("");
	ui->comboBox_4->addItem("");
	ui->comboBox_5->addItem("");
	ui->comboBox_6->addItem("");
	ui->comboBox_7->addItem("");
	ui->comboBox_8->addItem("");
	ui->comboBox_9->addItem("");
	ui->comboBox_10->addItem("");
	ui->comboBox_11->addItem("");
	ui->comboBox_12->addItem("");
	ui->comboBox_13->addItem("");
	ui->comboBox_14->addItem("");
	ui->comboBox_15->addItem("");
	ui->comboBox_16->addItem("");
	ui->comboBox_17->addItem("");
	ui->comboBox_18->addItem("");
	ui->comboBox_19->addItem("");
	ui->comboBox_20->addItem("");
	ui->comboBox_21->addItem("");
	ui->comboBox_22->addItem("");
	ui->comboBox_23->addItem("");
	ui->comboBox_24->addItem("");
	ui->comboBox_25->addItem("");
	ui->comboBox_26->addItem("");
	ui->comboBox_27->addItem("");
	ui->comboBox_28->addItem("");
	ui->comboBox_29->addItem("");
	ui->comboBox_30->addItem("");
	ui->comboBox_31->addItem("");
	ui->comboBox_32->addItem("");
	ui->comboBox_33->addItem("");
	ui->comboBox_34->addItem("");
	ui->comboBox_35->addItem("");
	ui->comboBox_36->addItem("");
	int lenght = present.size();
	for (int x = 0; x < lenght; x++)
	{
		ui->comboBox->addItem(present[x]);
		ui->comboBox_2->addItem(present[x]);
		ui->comboBox_3->addItem(present[x]);
		ui->comboBox_4->addItem(present[x]);
		ui->comboBox_5->addItem(present[x]);
		ui->comboBox_6->addItem(present[x]);
		ui->comboBox_7->addItem(present[x]);
		ui->comboBox_8->addItem(present[x]);
		ui->comboBox_9->addItem(present[x]);
		ui->comboBox_10->addItem(present[x]);
		ui->comboBox_11->addItem(present[x]);
		ui->comboBox_12->addItem(present[x]);
		ui->comboBox_13->addItem(present[x]);
		ui->comboBox_14->addItem(present[x]);
		ui->comboBox_15->addItem(present[x]);
		ui->comboBox_16->addItem(present[x]);
		ui->comboBox_17->addItem(present[x]);
		ui->comboBox_18->addItem(present[x]);
		ui->comboBox_19->addItem(present[x]);
		ui->comboBox_20->addItem(present[x]);
		ui->comboBox_21->addItem(present[x]);
		ui->comboBox_22->addItem(present[x]);
		ui->comboBox_23->addItem(present[x]);
		ui->comboBox_24->addItem(present[x]);
		ui->comboBox_25->addItem(present[x]);
		ui->comboBox_26->addItem(present[x]);
		ui->comboBox_27->addItem(present[x]);
		ui->comboBox_28->addItem(present[x]);
		ui->comboBox_29->addItem(present[x]);
		ui->comboBox_30->addItem(present[x]);
		ui->comboBox_31->addItem(present[x]);
		ui->comboBox_32->addItem(present[x]);
		ui->comboBox_33->addItem(present[x]);
		ui->comboBox_34->addItem(present[x]);
		ui->comboBox_35->addItem(present[x]);
		ui->comboBox_36->addItem(present[x]);
	}
	if (settings4->value("Save and Load Speakers Lists") == 0)
	{
		ui->comboBox_8->setCurrentText(settings3->value("Primary Speakers List 1").toString());
		ui->comboBox_14->setCurrentText(settings3->value("Primary Speakers List 2").toString());
		ui->comboBox_13->setCurrentText(settings3->value("Primary Speakers List 3").toString());
		ui->comboBox_15->setCurrentText(settings3->value("Primary Speakers List 4").toString());
		ui->comboBox_12->setCurrentText(settings3->value("Primary Speakers List 5").toString());
		ui->comboBox_11->setCurrentText(settings3->value("Primary Speakers List 6").toString());
		ui->comboBox_10->setCurrentText(settings3->value("Primary Speakers List 7").toString());
		ui->comboBox_9->setCurrentText(settings3->value("Primary Speakers List 8").toString());
		ui->comboBox_7->setCurrentText(settings3->value("Primary Speakers List 9").toString());
		ui->comboBox_6->setCurrentText(settings3->value("Primary Speakers List 10").toString());
		ui->comboBox_5->setCurrentText(settings3->value("Primary Speakers List 11").toString());
		ui->comboBox_4->setCurrentText(settings3->value("Primary Speakers List 12").toString());
		ui->comboBox_2->setCurrentText(settings3->value("Primary Speakers List 13").toString());
		ui->comboBox_3->setCurrentText(settings3->value("Primary Speakers List 14").toString());
		ui->comboBox->setCurrentText(settings3->value("Primary Speakers List 15").toString());

		ui->comboBox_24->setCurrentText(settings3->value("Secondary Speakers List 1").toString());
		ui->comboBox_27->setCurrentText(settings3->value("Secondary Speakers List 2").toString());
		ui->comboBox_28->setCurrentText(settings3->value("Secondary Speakers List 3").toString());
		ui->comboBox_30->setCurrentText(settings3->value("Secondary Speakers List 4").toString());
		ui->comboBox_29->setCurrentText(settings3->value("Secondary Speakers List 5").toString());
		ui->comboBox_26->setCurrentText(settings3->value("Secondary Speakers List 6").toString());
		ui->comboBox_25->setCurrentText(settings3->value("Secondary Speakers List 7").toString());
		ui->comboBox_23->setCurrentText(settings3->value("Secondary Speakers List 8").toString());
		ui->comboBox_21->setCurrentText(settings3->value("Secondary Speakers List 9").toString());
		ui->comboBox_22->setCurrentText(settings3->value("Secondary Speakers List 10").toString());
		ui->comboBox_20->setCurrentText(settings3->value("Secondary Speakers List 11").toString());
		ui->comboBox_19->setCurrentText(settings3->value("Secondary Speakers List 12").toString());
		ui->comboBox_18->setCurrentText(settings3->value("Secondary Speakers List 13").toString());
		ui->comboBox_17->setCurrentText(settings3->value("Secondary Speakers List 14").toString());
		ui->comboBox_16->setCurrentText(settings3->value("Secondary Speakers List 15").toString());
	}
	int quor = present.size();
	if (settings4->value("Quorum") == 0)
	{
		ui->lcdNumber->display((quor / 2) + 1);
	}
	if (settings4->value("Quorum") == 1)
	{
		ui->lcdNumber->display(((quor * 2) / 3) + 1);
	}
	if (settings4->value("Save and Load Speakers Lists") == 0)
	{
		connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_currentIndexChanged()));
		connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_2_currentIndexChanged()));
		connect(ui->comboBox_3, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_3_currentIndexChanged()));
		connect(ui->comboBox_4, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_4_currentIndexChanged()));
		connect(ui->comboBox_5, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_5_currentIndexChanged()));
		connect(ui->comboBox_6, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_6_currentIndexChanged()));
		connect(ui->comboBox_7, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_7_currentIndexChanged()));
		connect(ui->comboBox_8, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_8_currentIndexChanged()));
		connect(ui->comboBox_9, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_9_currentIndexChanged()));
		connect(ui->comboBox_10, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_10_currentIndexChanged()));
		connect(ui->comboBox_11, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_11_currentIndexChanged()));
		connect(ui->comboBox_12, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_12_currentIndexChanged()));
		connect(ui->comboBox_13, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_13_currentIndexChanged()));
		connect(ui->comboBox_14, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_14_currentIndexChanged()));
		connect(ui->comboBox_15, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_15_currentIndexChanged()));
		connect(ui->comboBox_16, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_16_currentIndexChanged()));
		connect(ui->comboBox_17, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_17_currentIndexChanged()));
		connect(ui->comboBox_18, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_18_currentIndexChanged()));
		connect(ui->comboBox_19, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_19_currentIndexChanged()));
		connect(ui->comboBox_20, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_20_currentIndexChanged()));
		connect(ui->comboBox_21, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_21_currentIndexChanged()));
		connect(ui->comboBox_22, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_22_currentIndexChanged()));
		connect(ui->comboBox_23, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_23_currentIndexChanged()));
		connect(ui->comboBox_24, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_24_currentIndexChanged()));
		connect(ui->comboBox_25, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_25_currentIndexChanged()));
		connect(ui->comboBox_26, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_26_currentIndexChanged()));
		connect(ui->comboBox_27, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_27_currentIndexChanged()));
		connect(ui->comboBox_28, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_28_currentIndexChanged()));
		connect(ui->comboBox_29, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_29_currentIndexChanged()));
		connect(ui->comboBox_30, SIGNAL(currentIndexChanged(int)), this, SLOT(onn_comboBox_30_currentIndexChanged()));
	}
}

void MainWindow::reset()
{
	QString delegate = awards->currentText();
	if (delegate != "") {

		int time;
		if (settings2->contains(delegate)) { time = (settings2->value(delegate).toInt()) + (speakingt - speakingtt); }
		else { time = speakingt - speakingtt; }
		settings2->setValue(delegate, time);
	}
	speakingt = 0; totalt = 0;  caucus_time = 0;
	ui->textEdit->setText("");
	ui->textEdit_2->setText("");
	ui->textEdit_3->setText("");
	ui->textEdit_4->setText("");
	ui->textEdit_5->setText("");
	ui->textEdit_6->setText("");
	ui->textEdit_9->setText("");
	ui->textEdit_10->setText("");


	ui->textEdit_7->setText("");
	ui->textEdit_13->setText("");
	ui->textEdit_15->setText("");
	ui->textEdit_17->setText("");

	ui->textEdit_8->setText("");
	ui->textEdit_14->setText("");
	ui->textEdit_16->setText("");
	ui->textEdit_18->setText("");
	ui->textEdit_19->setText("");
	ui->textEdit_20->setText("");
	ui->comboBox_31->setCurrentIndex(0);
	ui->comboBox_35->setCurrentIndex(0);
	ui->comboBox_34->setCurrentIndex(0);
	ui->comboBox_36->setCurrentIndex(0);
	ui->comboBox_33->setCurrentIndex(0);
	ui->comboBox_32->setCurrentIndex(0);

	ui->checkBox->setChecked(false);
	ui->checkBox_2->setChecked(false);
	ui->checkBox_3->setChecked(false);
	ui->checkBox_4->setChecked(false);
	ui->checkBox_5->setChecked(false);
	ui->checkBox_6->setChecked(false);
	ui->checkBox->setCheckable(true);
	ui->checkBox_2->setCheckable(true);
	ui->checkBox_3->setCheckable(true);
	ui->checkBox_4->setCheckable(true);
	ui->checkBox_5->setCheckable(true);
	ui->checkBox_6->setCheckable(true);
	disconnect(start, SIGNAL(pressed()), this, SLOT(lastSpeaker()));
	disconnect(start, SIGNAL(pressed()), this, SLOT(on_stop_clicked()));
	connect(start, SIGNAL(pressed()), this, SLOT(on_start_clicked()));
	firstt = true;
	lastSpeak = false;

	timerr->stop();
	start->setText("Start");
	awards->setCurrentIndex(0);
	awards->setCurrentIndex(0);
	awards->show();
	if (stopped == false) { on_stop_clicked(); }
	stopped = false;
}


void MainWindow::on_pushButton_pressed()
{
	speak(0);
	awards->setCurrentText(ui->comboBox_8->currentText());
	ui->comboBox_8->setCurrentText(ui->comboBox_14->currentText());
	ui->comboBox_14->setCurrentText(ui->comboBox_13->currentText());
	ui->comboBox_13->setCurrentText(ui->comboBox_15->currentText());
	ui->comboBox_15->setCurrentText(ui->comboBox_12->currentText());
	ui->comboBox_12->setCurrentText(ui->comboBox_11->currentText());
	ui->comboBox_11->setCurrentText(ui->comboBox_10->currentText());
	ui->comboBox_10->setCurrentText(ui->comboBox_9->currentText());
	ui->comboBox_9->setCurrentText(ui->comboBox_7->currentText());
	ui->comboBox_7->setCurrentText(ui->comboBox_6->currentText());
	ui->comboBox_6->setCurrentText(ui->comboBox_5->currentText());
	ui->comboBox_5->setCurrentText(ui->comboBox_4->currentText());
	ui->comboBox_4->setCurrentText(ui->comboBox_2->currentText());
	ui->comboBox_2->setCurrentText(ui->comboBox_3->currentText());
	ui->comboBox_3->setCurrentText(ui->comboBox->currentText());
	ui->comboBox->setCurrentIndex(0);

	onn_comboBox_currentIndexChanged();
	onn_comboBox_2_currentIndexChanged();
	onn_comboBox_3_currentIndexChanged();
	onn_comboBox_4_currentIndexChanged();
	onn_comboBox_5_currentIndexChanged();
	onn_comboBox_6_currentIndexChanged();
	onn_comboBox_7_currentIndexChanged();
	onn_comboBox_8_currentIndexChanged();
	onn_comboBox_9_currentIndexChanged();
	onn_comboBox_10_currentIndexChanged();
	onn_comboBox_11_currentIndexChanged();
	onn_comboBox_12_currentIndexChanged();
	onn_comboBox_13_currentIndexChanged();
	onn_comboBox_14_currentIndexChanged();
	onn_comboBox_15_currentIndexChanged();

}




void MainWindow::on_pushButton_2_pressed()
{
	speak(0);
	awards->setCurrentText(ui->comboBox_24->currentText());
	ui->comboBox_24->setCurrentText(ui->comboBox_27->currentText());
	ui->comboBox_27->setCurrentText(ui->comboBox_28->currentText());
	ui->comboBox_28->setCurrentText(ui->comboBox_30->currentText());
	ui->comboBox_30->setCurrentText(ui->comboBox_29->currentText());
	ui->comboBox_29->setCurrentText(ui->comboBox_26->currentText());
	ui->comboBox_26->setCurrentText(ui->comboBox_25->currentText());
	ui->comboBox_25->setCurrentText(ui->comboBox_23->currentText());
	ui->comboBox_23->setCurrentText(ui->comboBox_21->currentText());
	ui->comboBox_21->setCurrentText(ui->comboBox_22->currentText());
	ui->comboBox_22->setCurrentText(ui->comboBox_20->currentText());
	ui->comboBox_20->setCurrentText(ui->comboBox_19->currentText());
	ui->comboBox_19->setCurrentText(ui->comboBox_18->currentText());
	ui->comboBox_18->setCurrentText(ui->comboBox_17->currentText());
	ui->comboBox_17->setCurrentText(ui->comboBox_16->currentText());
	ui->comboBox_16->setCurrentIndex(0);

	onn_comboBox_16_currentIndexChanged();
	onn_comboBox_17_currentIndexChanged();
	onn_comboBox_18_currentIndexChanged();
	onn_comboBox_19_currentIndexChanged();
	onn_comboBox_20_currentIndexChanged();
	onn_comboBox_21_currentIndexChanged();
	onn_comboBox_22_currentIndexChanged();
	onn_comboBox_23_currentIndexChanged();
	onn_comboBox_24_currentIndexChanged();
	onn_comboBox_25_currentIndexChanged();
	onn_comboBox_26_currentIndexChanged();
	onn_comboBox_27_currentIndexChanged();
	onn_comboBox_28_currentIndexChanged();
	onn_comboBox_29_currentIndexChanged();
	onn_comboBox_30_currentIndexChanged();

}


void MainWindow::on_actionSetup_Delegates_triggered()
{
	CloseableWidget* wdg = new CloseableWidget;
	connect(wdg, SIGNAL(onClose(QCloseEvent*)), this, SLOT(load()));
	QScrollArea* scroll = new QScrollArea;
	scroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	QWidget* content_widget = new QWidget;
	QVBoxLayout* lay = new QVBoxLayout;
	QFormLayout* formLayout = new QFormLayout(content_widget);

	QStringList items{ "Present", "Present and Voting", "Absent", "Absent from Commitee" };

	for (int x = 0; x < keys.size(); x++)
	{

		QCheckBox* check = new QCheckBox;
		check->setProperty("MyIndex", x);
		QLabel* label = new QLabel;
		label->setText(keys.at(x));
		QFont font = label->font();
		font.setPointSize(20);
		font.setBold(true);
		label->setFont(font);
		check->setStyleSheet("QCheckBox::indicator { width:50px; height: 50px;}");
		formLayout->addRow(label, check);
		if (settings->value(keys.at(x)) == 4) { check->setChecked(false); }
		else { check->setChecked(true); }
		connect(check, SIGNAL(stateChanged(int)), this, SLOT(addCountry(int)));
	}

	scroll->setWidget(content_widget);
	wdg->setLayout(lay);
	wdg->layout()->addWidget(scroll);
	QDesktopWidget desktop;
	wdg->resize(desktop.width() * 0.5, desktop.height() * 0.9);
	wdg->move(desktop.width() / 4, 0);
	QIcon icon("icon.png");
	wdg->setWindowIcon(icon);
	wdg->show();

}

void MainWindow::addCountry(int one)
{
	int y = sender()->property("MyIndex").toInt();

	status[y] = one;
	if (one == 0) { settings->setValue(keys.at(y), 4); }
	if (one == 2) { settings->setValue(keys.at(y), 0); }
}

void MainWindow::clearCountries()
{
	settings->clear();

}

void MainWindow::on_actionClear_Speakers_Lists_triggered()
{
	settings3->clear();
	ui->comboBox_2->setCurrentIndex(0);
	ui->comboBox_3->setCurrentIndex(0);
	ui->comboBox_4->setCurrentIndex(0);
	ui->comboBox_5->setCurrentIndex(0);
	ui->comboBox_6->setCurrentIndex(0);
	ui->comboBox_7->setCurrentIndex(0);
	ui->comboBox_8->setCurrentIndex(0);
	ui->comboBox_9->setCurrentIndex(0);
	ui->comboBox_10->setCurrentIndex(0);
	ui->comboBox_11->setCurrentIndex(0);
	ui->comboBox_12->setCurrentIndex(0);
	ui->comboBox_13->setCurrentIndex(0);
	ui->comboBox_14->setCurrentIndex(0);
	ui->comboBox_15->setCurrentIndex(0);
	ui->comboBox_16->setCurrentIndex(0);
	ui->comboBox_17->setCurrentIndex(0);
	ui->comboBox_18->setCurrentIndex(0);
	ui->comboBox_19->setCurrentIndex(0);
	ui->comboBox_20->setCurrentIndex(0);
	ui->comboBox_21->setCurrentIndex(0);
	ui->comboBox_22->setCurrentIndex(0);
	ui->comboBox_23->setCurrentIndex(0);
	ui->comboBox_24->setCurrentIndex(0);
	ui->comboBox_25->setCurrentIndex(0);
	ui->comboBox_26->setCurrentIndex(0);
	ui->comboBox_27->setCurrentIndex(0);
	ui->comboBox_28->setCurrentIndex(0);
	ui->comboBox_29->setCurrentIndex(0);
	ui->comboBox_30->setCurrentIndex(0);

}

void MainWindow::on_actionClear_Motions_triggered()
{
	ui->textEdit->setText("");
	ui->textEdit_2->setText("");
	ui->textEdit_3->setText("");
	ui->textEdit_4->setText("");
	ui->textEdit_5->setText("");
	ui->textEdit_6->setText("");
	ui->textEdit_7->setText("");
	ui->textEdit_8->setText("");
	ui->textEdit_9->setText("");
	ui->textEdit_10->setText("");

	ui->textEdit_13->setText("");
	ui->textEdit_14->setText("");
	ui->textEdit_15->setText("");
	ui->textEdit_16->setText("");
	ui->textEdit_17->setText("");
	ui->textEdit_18->setText("");
	ui->textEdit_19->setText("");
	ui->textEdit_20->setText("");
	ui->comboBox_31->setCurrentIndex(0);
	ui->comboBox_35->setCurrentIndex(0);
	ui->comboBox_34->setCurrentIndex(0);
	ui->comboBox_36->setCurrentIndex(0);
	ui->comboBox_33->setCurrentIndex(0);
	ui->comboBox_32->setCurrentIndex(0);


}

void MainWindow::on_actionClear_Speaking_Times_triggered()
{
	settings2->clear();
}

void MainWindow::on_actionView_Speaking_Times_triggered()
{
	keys2 = settings2->allKeys();
	QWidget* wdg = new QWidget;
	QScrollArea* scroll = new QScrollArea;
	scroll->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	QFormLayout* formLayout = new QFormLayout();
	QDesktopWidget desktop;
	int len = keys2.size();
	for (int x = 0; x < len; x++)
	{

		QLCDNumber* time = new QLCDNumber;
		QLabel* label = new QLabel;
		label->setText(keys2.at(x));
		QFont font("Arial", 20);
		label->setFont(font);
		formLayout->addRow(label, time);
		time->setFixedHeight(desktop.height() / 21);
		int z = settings2->value(keys2.at(x)).toInt();
		int minutes = z / 60;
		int seconds = z % 60;
		QTime t;
		t.setHMS(0, minutes, seconds);
		QString p = t.toString();
		time->display(p);

	}

	scroll->setLayout(formLayout);
	wdg->setLayout(new QVBoxLayout);
	wdg->layout()->addWidget(scroll);

	wdg->resize(wdg->width(), desktop.height() * 0.9);
	wdg->move(desktop.width() / 3, 0);
	QIcon icon("icon.png");
	wdg->setWindowIcon(icon);
	wdg->show();
}


void MainWindow::onn_comboBox_8_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 1", ui->comboBox_8->currentText());

}

void MainWindow::onn_comboBox_14_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 2", ui->comboBox_14->currentText());

}

void MainWindow::onn_comboBox_13_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 3", ui->comboBox_13->currentText());

}

void MainWindow::onn_comboBox_15_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 4", ui->comboBox_15->currentText());

}

void MainWindow::onn_comboBox_12_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 5", ui->comboBox_12->currentText());

}

void MainWindow::onn_comboBox_11_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 6", ui->comboBox_11->currentText());

}

void MainWindow::onn_comboBox_10_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 7", ui->comboBox_10->currentText());

}

void MainWindow::onn_comboBox_9_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 8", ui->comboBox_9->currentText());

}

void MainWindow::onn_comboBox_7_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 9", ui->comboBox_7->currentText());

}

void MainWindow::onn_comboBox_6_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 10", ui->comboBox_6->currentText());

}

void MainWindow::onn_comboBox_5_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 11", ui->comboBox_5->currentText());

}

void MainWindow::onn_comboBox_4_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 12", ui->comboBox_4->currentText());

}

void MainWindow::onn_comboBox_2_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 13", ui->comboBox_2->currentText());

}

void MainWindow::onn_comboBox_3_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 14", ui->comboBox_3->currentText());

}

void MainWindow::onn_comboBox_currentIndexChanged()
{
	settings3->setValue("Primary Speakers List 15", ui->comboBox->currentText());
}

void MainWindow::onn_comboBox_24_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 1", ui->comboBox_24->currentText());

}

void MainWindow::onn_comboBox_27_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 2", ui->comboBox_27->currentText());

}

void MainWindow::onn_comboBox_28_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 3", ui->comboBox_28->currentText());

}

void MainWindow::onn_comboBox_30_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 4", ui->comboBox_30->currentText());

}

void MainWindow::onn_comboBox_29_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 5", ui->comboBox_29->currentText());

}

void MainWindow::onn_comboBox_26_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 6", ui->comboBox_26->currentText());

}

void MainWindow::onn_comboBox_25_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 7", ui->comboBox_25->currentText());

}

void MainWindow::onn_comboBox_23_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 8", ui->comboBox_23->currentText());

}

void MainWindow::onn_comboBox_21_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 9", ui->comboBox_21->currentText());

}

void MainWindow::onn_comboBox_22_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 10", ui->comboBox_22->currentText());

}

void MainWindow::onn_comboBox_20_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 11", ui->comboBox_20->currentText());

}

void MainWindow::onn_comboBox_19_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 12", ui->comboBox_19->currentText());

}

void MainWindow::onn_comboBox_18_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 13", ui->comboBox_18->currentText());

}

void MainWindow::onn_comboBox_17_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 14", ui->comboBox_17->currentText());

}

void MainWindow::onn_comboBox_16_currentIndexChanged()
{
	settings3->setValue("Secondary Speakers List 15", ui->comboBox_16->currentText());
}




void MainWindow::on_actionSettings_triggered()
{
	QWidget* widgy = new QWidget;
	QFormLayout* layed = new QFormLayout;
	for (int x = 0; x < 4; x++)
	{
		QComboBox* comboo = new QComboBox;
		comboo->setProperty("MyIndex", x);
		comboo->addItem("Yes");
		comboo->addItem("No");
		switch (x)
		{
		case 0: {layed->addRow("Save and Load Speakers Lists", comboo); comboo->setCurrentIndex(settings4->value("Save and Load Speakers Lists").toInt()); } break;
		case 1: {layed->addRow("Automatically Select First Speaker", comboo); comboo->setCurrentIndex(settings4->value("Automatically Select First Speaker").toInt()); } break;
		case 2: {layed->addRow("Automatically Select Last Speaker", comboo); comboo->setCurrentIndex(settings4->value("Automatically Select Last Speaker").toInt()); } break;
		case 3: {layed->addRow("Show Absent Delegates in Speaker Selector", comboo); comboo->setCurrentIndex(settings4->value("Show Absent Delegates in Speaker Selector").toInt()); } break;

		}
		connect(comboo, SIGNAL(currentIndexChanged(int)), this, SLOT(rollied(int)));
	}

	QComboBox* comb = new QComboBox;
	comb->addItem("Simple Majority");
	comb->addItem("Two Thirds");
	layed->addRow("Quorum", comb);
	comb->setProperty("MyIndex", 4);
	comb->setCurrentIndex(settings4->value("Quorum").toInt());
	connect(comb, SIGNAL(currentIndexChanged(int)), this, SLOT(rollied(int)));
	QIcon icon("icon.png");
	widgy->setWindowIcon(icon);
	widgy->setLayout(layed);
	widgy->show();
}
void MainWindow::rollied(int arg1)
{
	int y = sender()->property("MyIndex").toInt();
	switch (y)
	{
	case 0: {settings4->setValue("Save and Load Speakers Lists", arg1); }
		  break;
	case 1: {settings4->setValue("Automatically Select First Speaker", arg1); }
		  break;
	case 2: {settings4->setValue("Automatically Select Last Speaker", arg1); }
		  break;
	case 3: {settings4->setValue("Show Absent Delegates in Speaker Selector", arg1); load(); }
		  break;
	case 4: {settings4->setValue("Quorum", arg1); int quor = present.size();
		if (settings4->value("Quorum") == 0)
		{
			ui->lcdNumber->display(quor / 2 + 1);
		}
		if (settings4->value("Quorum") == 1)
		{
			ui->lcdNumber->display(((quor * 2) / 3) + 1);
		}}
	}

}
