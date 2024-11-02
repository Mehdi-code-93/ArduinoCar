// Inclure la bibliothèque de contrôle des moteurs
#include <AFMotor.h>

// Définir le numéro de broche pour chaque moteur
#define MOTOR_1 1
#define MOTOR_2 2
#define MOTOR_3 3
#define MOTOR_4 4

// Créer une instance de la classe de contrôle des moteurs
AF_DCMotor motor1(MOTOR_1);
AF_DCMotor motor2(MOTOR_2);
AF_DCMotor motor3(MOTOR_3);
AF_DCMotor motor4(MOTOR_4);

void setup() {
  // Définir la vitesse maximale des moteurs (0 à 255)
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);
}

void loop() {
  // Faire tourner les moteurs dans un sens
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);

  // Attendre une seconde
  delay(1000);

  // Faire tourner les moteurs dans l'autre sens
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);

  // Attendre une seconde
  delay(1000);
}
