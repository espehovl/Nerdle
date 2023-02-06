#include "nerdle.h"

Nerdle::Nerdle(QObject *parent):
  QObject(parent)
{
  // Get a RNG seed from the Unix timestamp, so that we get "different words every day".
}

Nerdle::~Nerdle()
{

}

void Nerdle::run()
{

}


