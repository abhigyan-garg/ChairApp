/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ModelUN/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CloseableWidget_t {
    QByteArrayData data[5];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CloseableWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CloseableWidget_t qt_meta_stringdata_CloseableWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "CloseableWidget"
QT_MOC_LITERAL(1, 16, 7), // "onClose"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "QCloseEvent*"
QT_MOC_LITERAL(4, 38, 1) // "e"

    },
    "CloseableWidget\0onClose\0\0QCloseEvent*\0"
    "e"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CloseableWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void CloseableWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CloseableWidget *_t = static_cast<CloseableWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onClose((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CloseableWidget::*_t)(QCloseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CloseableWidget::onClose)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CloseableWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CloseableWidget.data,
      qt_meta_data_CloseableWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CloseableWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CloseableWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CloseableWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CloseableWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void CloseableWidget::onClose(QCloseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[60];
    char stringdata0[1638];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 28), // "on_actionRoll_Call_triggered"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(4, 66, 4), // "arg1"
QT_MOC_LITERAL(5, 71, 16), // "on_start_clicked"
QT_MOC_LITERAL(6, 88, 4), // "tick"
QT_MOC_LITERAL(7, 93, 15), // "on_stop_clicked"
QT_MOC_LITERAL(8, 109, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(9, 136, 26), // "on_checkBox_3_stateChanged"
QT_MOC_LITERAL(10, 163, 26), // "on_checkBox_4_stateChanged"
QT_MOC_LITERAL(11, 190, 26), // "on_checkBox_5_stateChanged"
QT_MOC_LITERAL(12, 217, 26), // "on_checkBox_6_stateChanged"
QT_MOC_LITERAL(13, 244, 4), // "roll"
QT_MOC_LITERAL(14, 249, 7), // "rollied"
QT_MOC_LITERAL(15, 257, 5), // "speak"
QT_MOC_LITERAL(16, 263, 3), // "pos"
QT_MOC_LITERAL(17, 267, 4), // "load"
QT_MOC_LITERAL(18, 272, 5), // "reset"
QT_MOC_LITERAL(19, 278, 21), // "on_pushButton_pressed"
QT_MOC_LITERAL(20, 300, 23), // "on_pushButton_2_pressed"
QT_MOC_LITERAL(21, 324, 34), // "on_actionSetup_Delegates_trig..."
QT_MOC_LITERAL(22, 359, 10), // "addCountry"
QT_MOC_LITERAL(23, 370, 3), // "one"
QT_MOC_LITERAL(24, 374, 14), // "clearCountries"
QT_MOC_LITERAL(25, 389, 39), // "on_actionClear_Speakers_Lists..."
QT_MOC_LITERAL(26, 429, 32), // "on_actionClear_Motions_triggered"
QT_MOC_LITERAL(27, 462, 39), // "on_actionClear_Speaking_Times..."
QT_MOC_LITERAL(28, 502, 38), // "on_actionView_Speaking_Times_..."
QT_MOC_LITERAL(29, 541, 34), // "onn_comboBox_8_currentIndexCh..."
QT_MOC_LITERAL(30, 576, 35), // "onn_comboBox_14_currentIndexC..."
QT_MOC_LITERAL(31, 612, 35), // "onn_comboBox_13_currentIndexC..."
QT_MOC_LITERAL(32, 648, 35), // "onn_comboBox_15_currentIndexC..."
QT_MOC_LITERAL(33, 684, 35), // "onn_comboBox_12_currentIndexC..."
QT_MOC_LITERAL(34, 720, 35), // "onn_comboBox_11_currentIndexC..."
QT_MOC_LITERAL(35, 756, 35), // "onn_comboBox_10_currentIndexC..."
QT_MOC_LITERAL(36, 792, 34), // "onn_comboBox_9_currentIndexCh..."
QT_MOC_LITERAL(37, 827, 34), // "onn_comboBox_7_currentIndexCh..."
QT_MOC_LITERAL(38, 862, 34), // "onn_comboBox_6_currentIndexCh..."
QT_MOC_LITERAL(39, 897, 34), // "onn_comboBox_5_currentIndexCh..."
QT_MOC_LITERAL(40, 932, 34), // "onn_comboBox_4_currentIndexCh..."
QT_MOC_LITERAL(41, 967, 34), // "onn_comboBox_2_currentIndexCh..."
QT_MOC_LITERAL(42, 1002, 34), // "onn_comboBox_3_currentIndexCh..."
QT_MOC_LITERAL(43, 1037, 32), // "onn_comboBox_currentIndexChanged"
QT_MOC_LITERAL(44, 1070, 35), // "onn_comboBox_24_currentIndexC..."
QT_MOC_LITERAL(45, 1106, 35), // "onn_comboBox_27_currentIndexC..."
QT_MOC_LITERAL(46, 1142, 35), // "onn_comboBox_28_currentIndexC..."
QT_MOC_LITERAL(47, 1178, 35), // "onn_comboBox_30_currentIndexC..."
QT_MOC_LITERAL(48, 1214, 35), // "onn_comboBox_29_currentIndexC..."
QT_MOC_LITERAL(49, 1250, 35), // "onn_comboBox_26_currentIndexC..."
QT_MOC_LITERAL(50, 1286, 35), // "onn_comboBox_25_currentIndexC..."
QT_MOC_LITERAL(51, 1322, 35), // "onn_comboBox_23_currentIndexC..."
QT_MOC_LITERAL(52, 1358, 35), // "onn_comboBox_21_currentIndexC..."
QT_MOC_LITERAL(53, 1394, 35), // "onn_comboBox_22_currentIndexC..."
QT_MOC_LITERAL(54, 1430, 35), // "onn_comboBox_20_currentIndexC..."
QT_MOC_LITERAL(55, 1466, 35), // "onn_comboBox_19_currentIndexC..."
QT_MOC_LITERAL(56, 1502, 35), // "onn_comboBox_18_currentIndexC..."
QT_MOC_LITERAL(57, 1538, 35), // "onn_comboBox_17_currentIndexC..."
QT_MOC_LITERAL(58, 1574, 35), // "onn_comboBox_16_currentIndexC..."
QT_MOC_LITERAL(59, 1610, 27) // "on_actionSettings_triggered"

    },
    "MainWindow\0on_actionRoll_Call_triggered\0"
    "\0on_checkBox_stateChanged\0arg1\0"
    "on_start_clicked\0tick\0on_stop_clicked\0"
    "on_checkBox_2_stateChanged\0"
    "on_checkBox_3_stateChanged\0"
    "on_checkBox_4_stateChanged\0"
    "on_checkBox_5_stateChanged\0"
    "on_checkBox_6_stateChanged\0roll\0rollied\0"
    "speak\0pos\0load\0reset\0on_pushButton_pressed\0"
    "on_pushButton_2_pressed\0"
    "on_actionSetup_Delegates_triggered\0"
    "addCountry\0one\0clearCountries\0"
    "on_actionClear_Speakers_Lists_triggered\0"
    "on_actionClear_Motions_triggered\0"
    "on_actionClear_Speaking_Times_triggered\0"
    "on_actionView_Speaking_Times_triggered\0"
    "onn_comboBox_8_currentIndexChanged\0"
    "onn_comboBox_14_currentIndexChanged\0"
    "onn_comboBox_13_currentIndexChanged\0"
    "onn_comboBox_15_currentIndexChanged\0"
    "onn_comboBox_12_currentIndexChanged\0"
    "onn_comboBox_11_currentIndexChanged\0"
    "onn_comboBox_10_currentIndexChanged\0"
    "onn_comboBox_9_currentIndexChanged\0"
    "onn_comboBox_7_currentIndexChanged\0"
    "onn_comboBox_6_currentIndexChanged\0"
    "onn_comboBox_5_currentIndexChanged\0"
    "onn_comboBox_4_currentIndexChanged\0"
    "onn_comboBox_2_currentIndexChanged\0"
    "onn_comboBox_3_currentIndexChanged\0"
    "onn_comboBox_currentIndexChanged\0"
    "onn_comboBox_24_currentIndexChanged\0"
    "onn_comboBox_27_currentIndexChanged\0"
    "onn_comboBox_28_currentIndexChanged\0"
    "onn_comboBox_30_currentIndexChanged\0"
    "onn_comboBox_29_currentIndexChanged\0"
    "onn_comboBox_26_currentIndexChanged\0"
    "onn_comboBox_25_currentIndexChanged\0"
    "onn_comboBox_23_currentIndexChanged\0"
    "onn_comboBox_21_currentIndexChanged\0"
    "onn_comboBox_22_currentIndexChanged\0"
    "onn_comboBox_20_currentIndexChanged\0"
    "onn_comboBox_19_currentIndexChanged\0"
    "onn_comboBox_18_currentIndexChanged\0"
    "onn_comboBox_17_currentIndexChanged\0"
    "onn_comboBox_16_currentIndexChanged\0"
    "on_actionSettings_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  289,    2, 0x08 /* Private */,
       3,    1,  290,    2, 0x08 /* Private */,
       5,    0,  293,    2, 0x08 /* Private */,
       6,    0,  294,    2, 0x08 /* Private */,
       7,    0,  295,    2, 0x08 /* Private */,
       8,    1,  296,    2, 0x08 /* Private */,
       9,    1,  299,    2, 0x08 /* Private */,
      10,    1,  302,    2, 0x08 /* Private */,
      11,    1,  305,    2, 0x08 /* Private */,
      12,    1,  308,    2, 0x08 /* Private */,
      13,    1,  311,    2, 0x08 /* Private */,
      14,    1,  314,    2, 0x08 /* Private */,
      15,    1,  317,    2, 0x08 /* Private */,
      17,    0,  320,    2, 0x08 /* Private */,
      18,    0,  321,    2, 0x08 /* Private */,
      19,    0,  322,    2, 0x08 /* Private */,
      20,    0,  323,    2, 0x08 /* Private */,
      21,    0,  324,    2, 0x08 /* Private */,
      22,    1,  325,    2, 0x08 /* Private */,
      24,    0,  328,    2, 0x08 /* Private */,
      25,    0,  329,    2, 0x08 /* Private */,
      26,    0,  330,    2, 0x08 /* Private */,
      27,    0,  331,    2, 0x08 /* Private */,
      28,    0,  332,    2, 0x08 /* Private */,
      29,    0,  333,    2, 0x08 /* Private */,
      30,    0,  334,    2, 0x08 /* Private */,
      31,    0,  335,    2, 0x08 /* Private */,
      32,    0,  336,    2, 0x08 /* Private */,
      33,    0,  337,    2, 0x08 /* Private */,
      34,    0,  338,    2, 0x08 /* Private */,
      35,    0,  339,    2, 0x08 /* Private */,
      36,    0,  340,    2, 0x08 /* Private */,
      37,    0,  341,    2, 0x08 /* Private */,
      38,    0,  342,    2, 0x08 /* Private */,
      39,    0,  343,    2, 0x08 /* Private */,
      40,    0,  344,    2, 0x08 /* Private */,
      41,    0,  345,    2, 0x08 /* Private */,
      42,    0,  346,    2, 0x08 /* Private */,
      43,    0,  347,    2, 0x08 /* Private */,
      44,    0,  348,    2, 0x08 /* Private */,
      45,    0,  349,    2, 0x08 /* Private */,
      46,    0,  350,    2, 0x08 /* Private */,
      47,    0,  351,    2, 0x08 /* Private */,
      48,    0,  352,    2, 0x08 /* Private */,
      49,    0,  353,    2, 0x08 /* Private */,
      50,    0,  354,    2, 0x08 /* Private */,
      51,    0,  355,    2, 0x08 /* Private */,
      52,    0,  356,    2, 0x08 /* Private */,
      53,    0,  357,    2, 0x08 /* Private */,
      54,    0,  358,    2, 0x08 /* Private */,
      55,    0,  359,    2, 0x08 /* Private */,
      56,    0,  360,    2, 0x08 /* Private */,
      57,    0,  361,    2, 0x08 /* Private */,
      58,    0,  362,    2, 0x08 /* Private */,
      59,    0,  363,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionRoll_Call_triggered(); break;
        case 1: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_start_clicked(); break;
        case 3: _t->tick(); break;
        case 4: _t->on_stop_clicked(); break;
        case 5: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBox_3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_checkBox_4_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_5_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBox_6_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->roll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->rollied((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->speak((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->load(); break;
        case 14: _t->reset(); break;
        case 15: _t->on_pushButton_pressed(); break;
        case 16: _t->on_pushButton_2_pressed(); break;
        case 17: _t->on_actionSetup_Delegates_triggered(); break;
        case 18: _t->addCountry((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->clearCountries(); break;
        case 20: _t->on_actionClear_Speakers_Lists_triggered(); break;
        case 21: _t->on_actionClear_Motions_triggered(); break;
        case 22: _t->on_actionClear_Speaking_Times_triggered(); break;
        case 23: _t->on_actionView_Speaking_Times_triggered(); break;
        case 24: _t->onn_comboBox_8_currentIndexChanged(); break;
        case 25: _t->onn_comboBox_14_currentIndexChanged(); break;
        case 26: _t->onn_comboBox_13_currentIndexChanged(); break;
        case 27: _t->onn_comboBox_15_currentIndexChanged(); break;
        case 28: _t->onn_comboBox_12_currentIndexChanged(); break;
        case 29: _t->onn_comboBox_11_currentIndexChanged(); break;
        case 30: _t->onn_comboBox_10_currentIndexChanged(); break;
        case 31: _t->onn_comboBox_9_currentIndexChanged(); break;
        case 32: _t->onn_comboBox_7_currentIndexChanged(); break;
        case 33: _t->onn_comboBox_6_currentIndexChanged(); break;
        case 34: _t->onn_comboBox_5_currentIndexChanged(); break;
        case 35: _t->onn_comboBox_4_currentIndexChanged(); break;
        case 36: _t->onn_comboBox_2_currentIndexChanged(); break;
        case 37: _t->onn_comboBox_3_currentIndexChanged(); break;
        case 38: _t->onn_comboBox_currentIndexChanged(); break;
        case 39: _t->onn_comboBox_24_currentIndexChanged(); break;
        case 40: _t->onn_comboBox_27_currentIndexChanged(); break;
        case 41: _t->onn_comboBox_28_currentIndexChanged(); break;
        case 42: _t->onn_comboBox_30_currentIndexChanged(); break;
        case 43: _t->onn_comboBox_29_currentIndexChanged(); break;
        case 44: _t->onn_comboBox_26_currentIndexChanged(); break;
        case 45: _t->onn_comboBox_25_currentIndexChanged(); break;
        case 46: _t->onn_comboBox_23_currentIndexChanged(); break;
        case 47: _t->onn_comboBox_21_currentIndexChanged(); break;
        case 48: _t->onn_comboBox_22_currentIndexChanged(); break;
        case 49: _t->onn_comboBox_20_currentIndexChanged(); break;
        case 50: _t->onn_comboBox_19_currentIndexChanged(); break;
        case 51: _t->onn_comboBox_18_currentIndexChanged(); break;
        case 52: _t->onn_comboBox_17_currentIndexChanged(); break;
        case 53: _t->onn_comboBox_16_currentIndexChanged(); break;
        case 54: _t->on_actionSettings_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
