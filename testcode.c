
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>

int main(void)
{
    int i;

    rcc_periph_clock_enable(RCC_GPIOA);
    gpio_mode_setup(GPIOA, GPIO_MODE_OUTPUT, GPIO_PUPD_NONE, GPIO5);

    for(;;) {
        gpio_toggle(GPIOA, GPIO5);
        for(i=0; i<1<<20; i++)
            __asm__("nop");
    }

    return 0;
}
