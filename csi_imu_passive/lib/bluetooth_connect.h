#ifndef BL_CONNECT_H
#define BL_CONNECT_H

#include <HardwareSerial.h>

#define RX2_PIN 3
#define TX2_PIN 1

void bluetooth_setup() {
  Serial1.begin(9600, SERIAL_8N1, RX2_PIN, TX2_PIN);
}

void bluetooth_loop(const char * data) {
  printf("Passing bluetooth data: %s",data);
  Serial1.println(data);
}

 #endif;