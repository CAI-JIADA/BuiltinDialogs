#ifndef CBUILTINDIA_H
#define CBUILTINDIA_H

#include <QDialog>
#include<QPushButton>
#include<QTextEdit>

class CBuiltinDia : public QDialog
{
    Q_OBJECT

public:
    CBuiltinDia(QWidget *parent = nullptr);
    ~CBuiltinDia();

private:
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
    QPushButton *setPushBtn;
private slots://槽函數(slot)宣告
    void doPushBtn();
private slots:
    void doTextcolor();
};
#endif // CBUILTINDIA_H
