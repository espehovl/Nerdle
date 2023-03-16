#ifndef NERDLE_H
#define NERDLE_H

#include <QObject>

class QRandomGenerator;

class Nerdle : public QObject
{
  Q_OBJECT

public:
  Nerdle(QObject *parent = nullptr);
  ~Nerdle();

signals:
  void gameConcluded();

public slots:
  void runGame();

private:
  void newGame();
  QString getNerdleWord();

  QRandomGenerator *rng;

  bool gameRunning;
  QString solution;
};

#endif // NERDLE_H
