// BootUIElement.cpp

#include "AllUIElement.h"
#include <WiFi.h>
#include <string>

extern String apSSID;

// handle touch on this page ////////////////////////////////////////////////
bool BootUIElement::handleTouch(long x, long y) {
  return true;
}

// writes various things including mac address and wifi ssid ///////////////
void BootUIElement::draw(){

  m_tft->setTextColor(CYAN);
  m_tft->setTextSize(3);
  m_tft->setCursor(5, 5);
  m_tft->println("Alarm clock booting");
}

//////////////////////////////////////////////////////////////////////////
void BootUIElement::runEachTurn(){

}