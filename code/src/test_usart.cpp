#include <test_usart.hpp>

namespace r2d2::usart {
    test_usart_c::test_usart_c(){
    }

    void test_usart_c::enable() {
        // Not needed in test implementation
    }

    void test_usart_c::disable() {
        // Not needed in test implementation
    }

    bool test_usart_c::send(const uint8_t c) {
        // Not needed in test implementation
        return false;
    }

    void test_usart_c::putc(char c) {
        send(c);
    }

    uint8_t test_usart_c::receive() {
        return 0xAA;
    }

    bool test_usart_c::char_available() {
        return true;
    }

    char test_usart_c::getc() {
        return receive();
    }

    unsigned int test_usart_c::available() {
        return 1;
    }
}; // namespace r2d2::usart