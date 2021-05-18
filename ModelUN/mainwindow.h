#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include <QLCDNumber>
#include <QPushButton>
#include <QTimer>
#include <QSignalMapper>
#include <vector>
#include <QSettings>
#include <QComboBox>
#include <QWidget>
#include <QLineEdit>
#include <QTime>
namespace Ui {
class MainWindow;
}

class CloseableWidget: public QWidget {
    Q_OBJECT
public:
    CloseableWidget(QWidget* parent = nullptr): QWidget(parent) {}
signals:
    void onClose(QCloseEvent* e);
protected:
    void closeEvent(QCloseEvent* e) override {
        emit onClose(e);
    }
};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    int speakingt;//The int version of the speaking time for the caucus
    bool stopped=false;//Lets the program know if you stopped the timer before closing the window
    int speakingtt;//The int that is reduced by the the tick method and is displayed on the timer
    int caucus_time=0;//This is used to store the time elapsed in the caucus
    bool progress = false;//This variable is used to make sure the timer window isn't recreated when reopened in one instance
    CloseableWidget *wid=new CloseableWidget;//This is the widget that is opened when a motion is passed
    int totalt;//The int version of the total time for the caucus
    QLCDNumber *timer = new QLCDNumber;// This is the display for the caucus timer
    QPushButton *start = new QPushButton;//This is the start button for the timer
    QTimer *timerr= new QTimer;//This is the QTimer which runs the timer
    bool stoptimer=0;//This boolean is used to stop the timer when it reaches 0 or the stop button is clicked
QSettings *settings=new QSettings("Matrix.ini", QSettings::IniFormat);//This is used to open the file with the countries and their roll call
QSettings *settings2=new QSettings("Speaking_Time.ini", QSettings::IniFormat);//This is used to open the file which has total speech time for delegates
QSettings *settings3=new QSettings("Speakers_Lists.ini", QSettings::IniFormat);
QSettings *settings4=new QSettings("Settings.ini", QSettings::IniFormat);
QString speaking;//This is used to read the speaking time from the text edit
QString total;//This is used to read the total time from the text edit
QStringList keys;//This reads and holds the country names from Matrix.ini
QStringList keys2;
QComboBox *awards = new QComboBox;//This is the combo box to select a speaker in a caucus
std::vector<int> status;//This reads and hold the country roll call from Matrix.ini
std::vector<QString> present;
   QLineEdit *ed=new QLineEdit;
   bool firstt=true;
QString currentt;
bool lastSpeak;
QTime time;
protected:
    void resizeEvent(QResizeEvent *e);//This slot is used to adjust the text size of the the textBrowsers when resized
private slots:



    void on_actionRoll_Call_triggered();//Slot for roll call

    void on_checkBox_stateChanged(int arg1);//Slot for when caucus is passed in 1st row
    void on_start_clicked();
    void tick();//Used to keep timer ticking

void on_stop_clicked();//Triggered when stop button is clicked on the timer window
    void on_checkBox_2_stateChanged(int arg1);//Slot for when caucus is passed in 2st row

    void on_checkBox_3_stateChanged(int arg1);//Slot for when caucus is passed in 3st row
    void on_checkBox_4_stateChanged(int arg1);//Slot for when caucus is passed in 4st row

    void on_checkBox_5_stateChanged(int arg1);//Slot for when caucus is passed in 5st row

    void on_checkBox_6_stateChanged(int arg1);//Slot for when caucus is passed in 6st row
    void roll(int arg1);//This is triggered when the roll call combo box is changed and saves it to the vector and file
    void rollied(int arg1);
    void speak(int pos);//Triggered from checkbox slots, makes new window and all the other stuff
void load();//Is triggered on startup to read the Matrix.ini and put it into the list and vector
void reset();
void on_pushButton_pressed();

void on_pushButton_2_pressed();

void on_actionSetup_Delegates_triggered();
void addCountry(int one);
void clearCountries();
void on_actionClear_Speakers_Lists_triggered();

void on_actionClear_Motions_triggered();

void on_actionClear_Speaking_Times_triggered();

void on_actionView_Speaking_Times_triggered();

void onn_comboBox_8_currentIndexChanged( );

void onn_comboBox_14_currentIndexChanged( );

void onn_comboBox_13_currentIndexChanged( );

void onn_comboBox_15_currentIndexChanged( );

void onn_comboBox_12_currentIndexChanged( );

void onn_comboBox_11_currentIndexChanged( );

void onn_comboBox_10_currentIndexChanged( );

void onn_comboBox_9_currentIndexChanged( );

void onn_comboBox_7_currentIndexChanged( );

void onn_comboBox_6_currentIndexChanged( );

void onn_comboBox_5_currentIndexChanged( );

void onn_comboBox_4_currentIndexChanged( );

void onn_comboBox_2_currentIndexChanged( );

void onn_comboBox_3_currentIndexChanged( );

void onn_comboBox_currentIndexChanged( );

void onn_comboBox_24_currentIndexChanged( );

void onn_comboBox_27_currentIndexChanged( );

void onn_comboBox_28_currentIndexChanged( );

void onn_comboBox_30_currentIndexChanged( );

void onn_comboBox_29_currentIndexChanged( );

void onn_comboBox_26_currentIndexChanged( );

void onn_comboBox_25_currentIndexChanged( );

void onn_comboBox_23_currentIndexChanged( );

void onn_comboBox_21_currentIndexChanged( );

void onn_comboBox_22_currentIndexChanged( );

void onn_comboBox_20_currentIndexChanged( );

void onn_comboBox_19_currentIndexChanged( );

void onn_comboBox_18_currentIndexChanged( );

void onn_comboBox_17_currentIndexChanged( );

void onn_comboBox_16_currentIndexChanged( );

void on_actionSettings_triggered();

private:
    Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
