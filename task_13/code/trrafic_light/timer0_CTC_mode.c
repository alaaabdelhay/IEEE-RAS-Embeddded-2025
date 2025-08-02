
#include "timer0_CTC_mode.h"

void timer0_ctc_init(void)
{

	CLR_BIT(TCCR0, WGM00);
	SET_BIT(TCCR0, WGM01);
	OCR0 = 252;
	SET_BIT(TCCR0, CS00);
	CLR_BIT(TCCR0, CS01);
	SET_BIT(TCCR0, CS02);
	sei();
	SET_BIT(TIMSK, OCIE0);
}
