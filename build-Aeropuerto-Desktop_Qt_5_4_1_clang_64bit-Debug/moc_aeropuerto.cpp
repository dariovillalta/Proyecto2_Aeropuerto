/****************************************************************************
** Meta object code from reading C++ file 'aeropuerto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../aeropuerto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aeropuerto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Aeropuerto_t {
    QByteArrayData data[15];
    char stringdata[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Aeropuerto_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Aeropuerto_t qt_meta_stringdata_Aeropuerto = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Aeropuerto"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 58, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 82, 32), // "on_actionAgregar_Vuelo_triggered"
QT_MOC_LITERAL(6, 115, 32), // "on_actionAgregar_Avion_triggered"
QT_MOC_LITERAL(7, 148, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(8, 180, 5), // "index"
QT_MOC_LITERAL(9, 186, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(10, 210, 33), // "on_actionCalcular_Horas_trigg..."
QT_MOC_LITERAL(11, 244, 34), // "on_actionModificar_Vuelo_trig..."
QT_MOC_LITERAL(12, 279, 33), // "on_actionEliminar_Vuelo_trigg..."
QT_MOC_LITERAL(13, 313, 34), // "on_actionModificar_Avion_trig..."
QT_MOC_LITERAL(14, 348, 33) // "on_actionEliminar_Avion_trigg..."

    },
    "Aeropuerto\0on_pushButton_clicked\0\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_actionAgregar_Vuelo_triggered\0"
    "on_actionAgregar_Avion_triggered\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_pushButton_4_clicked\0"
    "on_actionCalcular_Horas_triggered\0"
    "on_actionModificar_Vuelo_triggered\0"
    "on_actionEliminar_Vuelo_triggered\0"
    "on_actionModificar_Avion_triggered\0"
    "on_actionEliminar_Avion_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Aeropuerto[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    1,   79,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Aeropuerto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Aeropuerto *_t = static_cast<Aeropuerto *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_actionAgregar_Vuelo_triggered(); break;
        case 4: _t->on_actionAgregar_Avion_triggered(); break;
        case 5: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_actionCalcular_Horas_triggered(); break;
        case 8: _t->on_actionModificar_Vuelo_triggered(); break;
        case 9: _t->on_actionEliminar_Vuelo_triggered(); break;
        case 10: _t->on_actionModificar_Avion_triggered(); break;
        case 11: _t->on_actionEliminar_Avion_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject Aeropuerto::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Aeropuerto.data,
      qt_meta_data_Aeropuerto,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Aeropuerto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Aeropuerto::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Aeropuerto.stringdata))
        return static_cast<void*>(const_cast< Aeropuerto*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Aeropuerto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
