#include "mid_port.h"

/***
 * example
Port port_uart1;

void Uart1Transmit(uint8_t *txbuf, uint16_t len) {
	HAL_UART_Transmit_DMA(&huart1, txbuf, len);
	WaitUsartTramsmitDmaEnd(&huart1);
}

extern Protocol protocol;
void Uart1ReceiveCallback(uint8_t *rxbuf, uint16_t len) {
	protocol.ReceiveCallback(rxbuf, len);
}
*/

void PortSetup(void) {
	// PortInit(&port_uart1, Uart1Transmit, Uart1ReceiveCallback);
}

static void PortInit(Port *port, void Transmit(uint8_t*, uint16_t), \
			void ReceiveCallback(uint8_t*, uint16_t)) {
	port->Transmit = Transmit;
	port->ReceiveCallback = ReceiveCallback;
}
