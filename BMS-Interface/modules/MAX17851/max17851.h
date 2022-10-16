#ifndef MAX17851_H
#define MAX17851_H
#include <stdint.h>
namespace max17851
{
    class Register
    {
    public:
        uint8_t iWriteAddress;
        uint8_t iReadAddress;
        Register(uint8_t writeAddress, uint8_t readAddress) : iWriteAddress(writeAddress), iReadAddress(readAddress) {}
    };

}

#endif