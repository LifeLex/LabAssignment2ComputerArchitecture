/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QPushButton *GuardarpushButton;
    QLabel *label_9;
    QGridLayout *MainConfig;
    QComboBox *ColorcomboBox;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_8;
    QRadioButton *RuedaRpuestoradioButton;
    QLCDNumber *lcdNumber;
    QLabel *label_3;
    QRadioButton *KitRadioButton;
    QComboBox *CombustiblecomboBox;
    QLineEdit *nombreLineEdit;
    QComboBox *NRuedascomboBox;
    QLabel *label;
    QSlider *HPSlider;
    QGridLayout *Accesorios;
    QCheckBox *BurbujacheckBox;
    QCheckBox *PortavasoscheckBox;
    QLabel *label_5;
    QSpinBox *BocinasspinBox;
    QGridLayout *Matricula;
    QPushButton *GenerarpushButton;
    QLabel *label_6;
    QLineEdit *MatriculalineEdit;
    QTextEdit *textEdit;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLCDNumber *VehiculosGuardadoslcdNumber;
    QLineEdit *lineEdit;
    QPushButton *CargarpushButton;
    QSpinBox *VehiculoGuardadoCargarspinBox;
    QPushButton *ResetpushButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(808, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        GuardarpushButton = new QPushButton(centralWidget);
        GuardarpushButton->setObjectName(QString::fromUtf8("GuardarpushButton"));

        gridLayout_4->addWidget(GuardarpushButton, 8, 0, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 3, 1, 1, 1);

        MainConfig = new QGridLayout();
        MainConfig->setSpacing(6);
        MainConfig->setObjectName(QString::fromUtf8("MainConfig"));
        ColorcomboBox = new QComboBox(centralWidget);
        ColorcomboBox->addItem(QString());
        ColorcomboBox->addItem(QString());
        ColorcomboBox->addItem(QString());
        ColorcomboBox->addItem(QString());
        ColorcomboBox->setObjectName(QString::fromUtf8("ColorcomboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ColorcomboBox->sizePolicy().hasHeightForWidth());
        ColorcomboBox->setSizePolicy(sizePolicy1);

        MainConfig->addWidget(ColorcomboBox, 3, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        MainConfig->addWidget(label_4, 3, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        MainConfig->addWidget(label_2, 1, 0, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        MainConfig->addWidget(label_8, 5, 0, 1, 1);

        RuedaRpuestoradioButton = new QRadioButton(centralWidget);
        RuedaRpuestoradioButton->setObjectName(QString::fromUtf8("RuedaRpuestoradioButton"));
        sizePolicy1.setHeightForWidth(RuedaRpuestoradioButton->sizePolicy().hasHeightForWidth());
        RuedaRpuestoradioButton->setSizePolicy(sizePolicy1);

        MainConfig->addWidget(RuedaRpuestoradioButton, 4, 0, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy2);

        MainConfig->addWidget(lcdNumber, 2, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        MainConfig->addWidget(label_3, 2, 0, 1, 1);

        KitRadioButton = new QRadioButton(centralWidget);
        KitRadioButton->setObjectName(QString::fromUtf8("KitRadioButton"));
        sizePolicy1.setHeightForWidth(KitRadioButton->sizePolicy().hasHeightForWidth());
        KitRadioButton->setSizePolicy(sizePolicy1);

        MainConfig->addWidget(KitRadioButton, 4, 1, 1, 1);

        CombustiblecomboBox = new QComboBox(centralWidget);
        CombustiblecomboBox->addItem(QString());
        CombustiblecomboBox->addItem(QString());
        CombustiblecomboBox->addItem(QString());
        CombustiblecomboBox->setObjectName(QString::fromUtf8("CombustiblecomboBox"));

        MainConfig->addWidget(CombustiblecomboBox, 5, 1, 1, 1);

        nombreLineEdit = new QLineEdit(centralWidget);
        nombreLineEdit->setObjectName(QString::fromUtf8("nombreLineEdit"));
        sizePolicy1.setHeightForWidth(nombreLineEdit->sizePolicy().hasHeightForWidth());
        nombreLineEdit->setSizePolicy(sizePolicy1);

        MainConfig->addWidget(nombreLineEdit, 0, 1, 1, 1);

        NRuedascomboBox = new QComboBox(centralWidget);
        NRuedascomboBox->addItem(QString());
        NRuedascomboBox->addItem(QString());
        NRuedascomboBox->addItem(QString());
        NRuedascomboBox->setObjectName(QString::fromUtf8("NRuedascomboBox"));
        sizePolicy1.setHeightForWidth(NRuedascomboBox->sizePolicy().hasHeightForWidth());
        NRuedascomboBox->setSizePolicy(sizePolicy1);

        MainConfig->addWidget(NRuedascomboBox, 1, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        MainConfig->addWidget(label, 0, 0, 1, 1);

        HPSlider = new QSlider(centralWidget);
        HPSlider->setObjectName(QString::fromUtf8("HPSlider"));
        sizePolicy1.setHeightForWidth(HPSlider->sizePolicy().hasHeightForWidth());
        HPSlider->setSizePolicy(sizePolicy1);
        HPSlider->setMaximum(999);
        HPSlider->setSingleStep(10);
        HPSlider->setOrientation(Qt::Horizontal);

        MainConfig->addWidget(HPSlider, 2, 1, 1, 1);


        gridLayout_4->addLayout(MainConfig, 0, 0, 1, 1);

        Accesorios = new QGridLayout();
        Accesorios->setSpacing(6);
        Accesorios->setObjectName(QString::fromUtf8("Accesorios"));
        BurbujacheckBox = new QCheckBox(centralWidget);
        BurbujacheckBox->setObjectName(QString::fromUtf8("BurbujacheckBox"));
        sizePolicy1.setHeightForWidth(BurbujacheckBox->sizePolicy().hasHeightForWidth());
        BurbujacheckBox->setSizePolicy(sizePolicy1);

        Accesorios->addWidget(BurbujacheckBox, 0, 0, 1, 1);

        PortavasoscheckBox = new QCheckBox(centralWidget);
        PortavasoscheckBox->setObjectName(QString::fromUtf8("PortavasoscheckBox"));
        sizePolicy1.setHeightForWidth(PortavasoscheckBox->sizePolicy().hasHeightForWidth());
        PortavasoscheckBox->setSizePolicy(sizePolicy1);

        Accesorios->addWidget(PortavasoscheckBox, 0, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        Accesorios->addWidget(label_5, 1, 0, 1, 1);

        BocinasspinBox = new QSpinBox(centralWidget);
        BocinasspinBox->setObjectName(QString::fromUtf8("BocinasspinBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(BocinasspinBox->sizePolicy().hasHeightForWidth());
        BocinasspinBox->setSizePolicy(sizePolicy3);

        Accesorios->addWidget(BocinasspinBox, 1, 1, 1, 1);


        gridLayout_4->addLayout(Accesorios, 1, 0, 1, 1);

        Matricula = new QGridLayout();
        Matricula->setSpacing(6);
        Matricula->setObjectName(QString::fromUtf8("Matricula"));
        GenerarpushButton = new QPushButton(centralWidget);
        GenerarpushButton->setObjectName(QString::fromUtf8("GenerarpushButton"));

        Matricula->addWidget(GenerarpushButton, 1, 0, 1, 2);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        Matricula->addWidget(label_6, 0, 0, 1, 1);

        MatriculalineEdit = new QLineEdit(centralWidget);
        MatriculalineEdit->setObjectName(QString::fromUtf8("MatriculalineEdit"));
        sizePolicy3.setHeightForWidth(MatriculalineEdit->sizePolicy().hasHeightForWidth());
        MatriculalineEdit->setSizePolicy(sizePolicy3);
        MatriculalineEdit->setReadOnly(true);

        Matricula->addWidget(MatriculalineEdit, 0, 1, 1, 1);


        gridLayout_4->addLayout(Matricula, 2, 0, 1, 1);

        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_4->addWidget(textEdit, 0, 1, 3, 4);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        VehiculosGuardadoslcdNumber = new QLCDNumber(centralWidget);
        VehiculosGuardadoslcdNumber->setObjectName(QString::fromUtf8("VehiculosGuardadoslcdNumber"));
        sizePolicy2.setHeightForWidth(VehiculosGuardadoslcdNumber->sizePolicy().hasHeightForWidth());
        VehiculosGuardadoslcdNumber->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(VehiculosGuardadoslcdNumber, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 3, 0, 1, 1);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit, 3, 4, 1, 1);

        CargarpushButton = new QPushButton(centralWidget);
        CargarpushButton->setObjectName(QString::fromUtf8("CargarpushButton"));
        sizePolicy1.setHeightForWidth(CargarpushButton->sizePolicy().hasHeightForWidth());
        CargarpushButton->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(CargarpushButton, 8, 1, 1, 1);

        VehiculoGuardadoCargarspinBox = new QSpinBox(centralWidget);
        VehiculoGuardadoCargarspinBox->setObjectName(QString::fromUtf8("VehiculoGuardadoCargarspinBox"));
        sizePolicy2.setHeightForWidth(VehiculoGuardadoCargarspinBox->sizePolicy().hasHeightForWidth());
        VehiculoGuardadoCargarspinBox->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(VehiculoGuardadoCargarspinBox, 8, 2, 1, 1);

        ResetpushButton = new QPushButton(centralWidget);
        ResetpushButton->setObjectName(QString::fromUtf8("ResetpushButton"));

        gridLayout_4->addWidget(ResetpushButton, 8, 4, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(HPSlider, SIGNAL(sliderMoved(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "El coche de homer", nullptr));
        GuardarpushButton->setText(QApplication::translate("MainWindow", "Guardar", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Tu vehiculo es :", nullptr));
        ColorcomboBox->setItemText(0, QApplication::translate("MainWindow", "Rojo", nullptr));
        ColorcomboBox->setItemText(1, QApplication::translate("MainWindow", "Azul", nullptr));
        ColorcomboBox->setItemText(2, QApplication::translate("MainWindow", "Amarillo", nullptr));
        ColorcomboBox->setItemText(3, QApplication::translate("MainWindow", "Verde", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Color", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Numero Ruedas", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Tipo de Combustible", nullptr));
        RuedaRpuestoradioButton->setText(QApplication::translate("MainWindow", "Rueda de repuesto", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "HP", nullptr));
        KitRadioButton->setText(QApplication::translate("MainWindow", "Kit de reparacion", nullptr));
        CombustiblecomboBox->setItemText(0, QApplication::translate("MainWindow", "Gasolina", nullptr));
        CombustiblecomboBox->setItemText(1, QApplication::translate("MainWindow", "Diesel", nullptr));
        CombustiblecomboBox->setItemText(2, QApplication::translate("MainWindow", "Electrico", nullptr));

        NRuedascomboBox->setItemText(0, QApplication::translate("MainWindow", "2", nullptr));
        NRuedascomboBox->setItemText(1, QApplication::translate("MainWindow", "4", nullptr));
        NRuedascomboBox->setItemText(2, QApplication::translate("MainWindow", "30", nullptr));

        label->setText(QApplication::translate("MainWindow", "Nombre", nullptr));
        BurbujacheckBox->setText(QApplication::translate("MainWindow", "Burbuja", nullptr));
        PortavasoscheckBox->setText(QApplication::translate("MainWindow", "Portavasos Gigante", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Numero de Bocinas", nullptr));
        GenerarpushButton->setText(QApplication::translate("MainWindow", "Generar Matricula", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Matricula", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Numero de Vehiculos guardados", nullptr));
        CargarpushButton->setText(QApplication::translate("MainWindow", "Cargar Vehiculo Numero", nullptr));
        ResetpushButton->setText(QApplication::translate("MainWindow", "RESET", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
