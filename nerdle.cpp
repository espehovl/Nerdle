#include "nerdle.h"
#include "words.h"

#include <QDateTime>
#include <QRandomGenerator>

#include <QDebug>

Nerdle::Nerdle(QObject *parent):
  QObject(parent),
  gameRunning(false)
{
  // Get a RNG seed from the Unix timestamp, so that we get "different words every day".
  QDateTime dateTime  = QDateTime::currentDateTime();
  QString   timestamp = dateTime.date().toString();

  uint32_t seed = 0;
  // Simply sump up the ASCII values of each letter in today's date
  foreach (QChar c, timestamp) {
    seed += c.toLatin1();
  }

  rng = new QRandomGenerator(seed);

  newGame();
}

Nerdle::~Nerdle()
{

}

void Nerdle::runGame()
{
  gameRunning = true;


  // TODO: Implement game logic
  // ...
}

void Nerdle::newGame()
{
  solution = getNerdleWord();





}

QString Nerdle::getNerdleWord()
{
  // Might be updated in the future with something more database-based

  uint32_t randomNumber = rng->generate();
  qDebug() << randomNumber;

  QString word = words.at(randomNumber % words.size()).toUpper();

  qDebug() << word;

  return word;
}


