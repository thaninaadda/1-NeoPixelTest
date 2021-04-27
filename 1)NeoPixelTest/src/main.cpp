/**
    NéoPixel Projet
    Expérimentations sur l'utilisation d'un NéoPixel et  un ESP32
    @file main.cpp
    @author ThaninaAdda 
    @version 1.0 20/04/21  
    
    Historique des vérsions   
                            Versions  Date      Auteur      Déscription
                            1.0      20/04/21   Ta          Première version qui démontre l'utilisation des un esp32 et un anneau Led.
                            
    platform = espressif32
    board = esp32doit-devkit-v1
    framework = arduino
    lib_deps = 
            adafruit/Adafruit NéoPixel @ ^1.7.0         (Pour le Néo Pixel)
    Classes du système

        Main      V1.0    qui contient le projet
            Pin 25.
            NUMPIXELS 8 (Contient 8 Led)
**/

#include <Adafruit_NeoPixel.h>
// le numéro de la pin ou le fil Vert a été branché.
#define PIN            25

// le nombre de pixels 
#define NUMPIXELS      8

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // la durée est d'une demi seconde

void setup() 
{
  pixels.begin(); // l'initalisation de la librairie de NéoPixel
}

void loop() 
{
  for(int i=0;i<NUMPIXELS;i++)
  {
    // pixels.Color prend des valeurs RVB, de 0,0,0 à 255,255,255
    pixels.setPixelColor(i, pixels.Color(255,0,0)); // la lumière Rouge s'allume.
    pixels.show(); // Ceci envoie la couleur de pixel mise à jour au matériel.
    delay(delayval); // Délai pour une période de temps (en millisecondes).
  }

  for(int i=0;i<NUMPIXELS;i++)
  {
    // pixels.Color prend les valeurs RGB, de 0,0,0 jusqu'a 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,255,0)); // la lumière verte s'allume.
    pixels.show(); // Ceci envoie la couleur de pixel mise à jour au matériel.
    delay(delayval); // Délai pour une période de temps (en millisecondes).
  }

  for(int i=0;i<NUMPIXELS;i++)
  {
   // pixels.Color prend les valeurs RGB, de 0,0,0 jusqu'a 255,255,255
    pixels.setPixelColor(i, pixels.Color(0,0,255)); // la lumière Bleu s'allume.
    pixels.show(); // Ceci envoie la couleur de pixel mise à jour au matériel.
    delay(delayval); // Délai pour une période de temps (en millisecondes).
  }
}