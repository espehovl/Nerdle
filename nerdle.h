#ifndef NERDLE_H
#define NERDLE_H

#include <QObject>

class Nerdle : public QObject
{
public:
  Nerdle(QObject *parent = 0);
  ~Nerdle();

signals:
  void gameConcluded();

public slots:
  void run();
};

#endif // NERDLE_H
