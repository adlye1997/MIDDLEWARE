#ifndef __MID_PORT_H
#define __MID_PORT_H

#include "stm32f1xx_hal.h"

typedef struct {
	void (*Transmit)(uint8_t *txbuf, uint16_t len);
	void (*ReceiveCallback)(uint8_t *rxbuf, uint16_t len);
}Port;

void PortSetup(void);

static void PortInit(Port *port, void Transmit(uint8_t*, uint16_t), \
			void ReceiveCallback(uint8_t*, uint16_t));

#endif // !__MID_PORT_H
