#ifndef MEMBERBOOK_H
#define MEMBERBOOK_H

#include <QObject>

class MemberBook : public QObject
{
    Q_OBJECT
public:
    explicit MemberBook(QObject *parent = NULL);

signals:

public slots:
};

#endif // MEMBERBOOK_H
