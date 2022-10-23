#ifndef MAX17851_H
#define MAX17851_H
#include <stdint.h>
#include <string>
namespace max17851
{
    class Bits
    {
    public:
        uint16_t startBit;
        uint16_t length;
        Bits(const uint16_t startBit, const uint16_t length) : startBit(startBit), length(length) {}
    };

    class Register
    {
    public:
        uint8_t iWriteAddress;
        uint8_t iReadAddress;
        Register(const uint8_t writeAddress, const uint8_t readAddress) : iWriteAddress(writeAddress), iReadAddress(readAddress) {}
    };

    class StatusRxRegister : Register
    {
    public:
        Bits RX_EMPTY;
        Bits RX_STOP;
        Bits RX_FULL;
        Bits RX_OVRFLW_ERR;
        Bits RX_IDLE;
        Bits RX_BUSY;
        Bits RX_ERR;
        StatusRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  RX_EMPTY(0, 1), RX_STOP(1, 1), RX_FULL(2, 1),
                                                                                  RX_OVRFLW_ERR(3, 1), RX_IDLE(4, 1), RX_BUSY(5, 1),
                                                                                  RX_ERR(7, 1) {}
    };

    class StatusTxRegister : Register
    {
    public:
        Bits TX_EMPTY;
        Bits TX_STOP;
        Bits TX_FULL;
        Bits TX_OVRFLW_ERR;
        Bits TX_IDLE;
        Bits TX_BUSY;
        Bits TX_ERR;
        StatusTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  TX_EMPTY(0, 1), TX_STOP(1, 1), TX_FULL(2, 1),
                                                                                  TX_OVRFLW_ERR(3, 1), TX_IDLE(4, 1), TX_BUSY(5, 1),
                                                                                  TX_ERR(7, 1) {}
    };

    class StatusLssmByteRegister : Register
    {
    public:
        Bits HW_ERR;
        Bits ALIVECOUNT_ERR;
        Bits COMMAND_OP;
        Bits COMM_MSMTCH_ERR;
        Bits ALRTPCKT_ERR;
        Bits COMM_ERR;
        Bits ALRTPCKT_STATUS_ERR;
        Bits RX_READY;
        StatusLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        HW_ERR(0, 1), ALIVECOUNT_ERR(1, 1), COMMAND_OP(2, 1),
                                                                                        COMM_MSMTCH_ERR(3, 1), ALRTPCKT_ERR(4, 1), COMM_ERR(5, 1),
                                                                                        ALRTPCKT_STATUS_ERR(6, 1), RX_READY(7, 1) {}
    };

    class StatusGenRegister : Register
    {
    public:
        Bits ALRTPCKTBUF_HW_ERR;
        Bits ALRTPCKT_COMM_ERR;
        Bits DATAPATH_ERR;
        Bits GPIO_ERR;
        Bits WD_ERR;
        Bits DEV_COUNT_ERR;
        Bits HFOSC_HW_ERRB;
        StatusGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   ALRTPCKTBUF_HW_ERR(0, 1), ALRTPCKT_COMM_ERR(1, 1), DATAPATH_ERR(3, 1),
                                                                                   GPIO_ERR(4, 1), WD_ERR(5, 1), DEV_COUNT_ERR(6, 1), HFOSC_HW_ERRB(7, 1) {}
    };

    class StatusOpstateRegister : Register
    {
    public:
        Bits SAFEMON;
        StatusOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       SAFEMON(3, 1) {}
    };

    class StatusBufRegister : Register
    {
    public:
        Bits LSSM_FULL;
        Bits ALRTPCKTBUF_FULL;
        StatusBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   LSSM_FULL(3, 1), ALRTPCKTBUF_FULL(7, 1) {}
    };

    class StatusWdRegister : Register
    {
    public:
        Bits WD_EXP_ERR;
        Bits WD_RJCT_ERR;
        Bits WD_LFSR_ERR;
        Bits WD_OPEN;
        Bits WD_TO_ERR;
        StatusWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  WD_EXP_ERR(0, 1), WD_RJCT_ERR(1, 1), WD_LFSR_ERR(2, 1), WD_OPEN(3, 1), WD_TO_ERR(4, 1) {}
    };

    class StatusGpioRegister : Register
    {
    public:
        Bits GPIO1_ERR;
        Bits GPIO2_ERR;
        Bits GPIO3_ERR;
        Bits GPIO4_ERR;
        Bits GPIO1_RD;
        Bits GPIO2_RD;
        Bits GPIO3_RD;
        Bits GPIO4_RD;
        StatusGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    GPIO1_ERR(0, 1), GPIO2_ERR(1, 1), GPIO3_ERR(2, 1), GPIO4_ERR(3, 1),
                                                                                    GPIO1_RD(4, 1), GPIO2_RD(5, 1), GPIO3_RD(6, 1), GPIO4_RD(7, 1) {}
    };

    const StatusRxRegister STATUS_RX(0x00, 0x01);
    const StatusTxRegister STATUS_TX(0x02, 0x03);
    const StatusLssmByteRegister STATUS_LSSM_BYTE(0x04, 0x05);
    const StatusGenRegister STATUS_GEN(0x06, 0x07);
    const StatusOpstateRegister STATUS_OPSTATE(0x08, 0x09);
    const StatusBufRegister STATUS_BUF(0x0A, 0x0B);
    const StatusWdRegister STATUS_WD(0x0C, 0x0D);
    const StatusGpioRegister STATUS_GPIO(0x0E, 0x0F);

    class AlertRxRegister : Register
    {
    public:
        Bits RX_EMPTY_ALRTEN;
        Bits RX_STOP_ALRTEN;
        Bits RX_FULL_ALRTEN;
        Bits RX_OVRFLW_ERR_ALRTEN;
        Bits RX_IDLE_ALRTEN;
        Bits RX_BUSY_ALRTEN;
        Bits RX_ERR_ALRTEN;
        AlertRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_EMPTY_ALRTEN(0, 1), RX_STOP_ALRTEN(1, 1), RX_FULL_ALRTEN(2, 1),
                                                                                 RX_OVRFLW_ERR_ALRTEN(3, 1), RX_IDLE_ALRTEN(4, 1), RX_BUSY_ALRTEN(5, 1),
                                                                                 RX_ERR_ALRTEN(7, 1) {}
    };

    class AlertTxRegister : Register
    {
    public:
        Bits TX_EMPTY_ALRT;
        Bits TX_STOP_ALRT;
        Bits TX_FULL_ALRT;
        Bits TX_OVRFLW_ERR_ALRT;
        Bits TX_IDLE_ALRT;
        Bits TX_BUSY_ALRT;
        Bits TX_ERR_ALRT;
        AlertTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 TX_EMPTY_ALRT(0, 1), TX_STOP_ALRT(1, 1), TX_FULL_ALRT(2, 1),
                                                                                 TX_OVRFLW_ERR_ALRT(3, 1), TX_IDLE_ALRT(4, 1), TX_BUSY_ALRT(5, 1),
                                                                                 TX_ERR_ALRT(7, 1) {}
    };

    class AlertLssmByteRegister : Register
    {
    public:
        Bits HW_ERR_ALRT;
        Bits ALIVECOUNT_ERR_ALRT;
        Bits COMMAND_OP_ALRT;
        Bits COMM_MSMTCH_ERR_ALRT;
        Bits ALRTPCKT_ERR_ALRT;
        Bits COMM_ERR_ALRT;
        Bits ALRTPCKT_STATUS_ERR_ALRT;
        Bits RX_READY_ALRT;
        AlertLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       HW_ERR_ALRT(0, 1), ALIVECOUNT_ERR_ALRT(1, 1), COMMAND_OP_ALRT(2, 1),
                                                                                       COMM_MSMTCH_ERR_ALRT(3, 1), ALRTPCKT_ERR_ALRT(4, 1), COMM_ERR_ALRT(5, 1),
                                                                                       ALRTPCKT_STATUS_ERR_ALRT(6, 1), RX_READY_ALRT(7, 1) {}
    };

    class AlertGenRegister : Register
    {
    public:
        Bits ALRTPCKTBUF_HW_ERR_ALRT;
        Bits ALRTPCKT_COMM_ERR_ALRT;
        Bits DATAPATH_ERR_ALRT;
        Bits GPIO_ERR_ALRT;
        Bits WD_ERR_ALRT;
        Bits DEV_COUNT_ERR_ALRT;
        Bits HFOSC_HW_ERRB_ALRT;
        AlertGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  ALRTPCKTBUF_HW_ERR_ALRT(0, 1), ALRTPCKT_COMM_ERR_ALRT(1, 1), DATAPATH_ERR_ALRT(3, 1),
                                                                                  GPIO_ERR_ALRT(4, 1), WD_ERR_ALRT(5, 1), DEV_COUNT_ERR_ALRT(6, 1), HFOSC_HW_ERRB_ALRT(7, 1) {}
    };

    class AlertOpstateRegister : Register
    {
    public:
        Bits SAFEMON_ALRT;
        AlertOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                      SAFEMON_ALRT(3, 1) {}
    };

    class AlertBufRegister : Register
    {
    public:
        Bits LSSM_FULL_ALRT;
        Bits ALRTPCKTBUF_FULL_ALRT;
        AlertBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  LSSM_FULL_ALRT(3, 1), ALRTPCKTBUF_FULL_ALRT(7, 1) {}
    };

    class AlertWdRegister : Register
    {
    public:
        Bits WD_EXP_ERR_ALRT;
        Bits WD_RJCT_ERR_ALRT;
        Bits WD_LFSR_ERR_ALRT;
        Bits WD_OPEN_ALRT;
        Bits WD_TO_ERR_ALRT;
        AlertWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 WD_EXP_ERR_ALRT(0, 1), WD_RJCT_ERR_ALRT(1, 1), WD_LFSR_ERR_ALRT(2, 1), WD_OPEN_ALRT(3, 1), WD_TO_ERR_ALRT(4, 1) {}
    };

    class AlertGpioRegister : Register
    {
    public:
        Bits GPIO1_ERR_ALRT;
        Bits GPIO2_ERR_ALRT;
        Bits GPIO3_ERR_ALRT;
        Bits GPIO4_ERR_ALRT;
        AlertGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   GPIO1_ERR_ALRT(0, 1), GPIO2_ERR_ALRT(1, 1), GPIO3_ERR_ALRT(2, 1), GPIO4_ERR_ALRT(3, 1) {}
    };

    // ALERT  Registers
    const AlertRxRegister ALERT_RX(0x10, 0x11);
    const AlertTxRegister ALERT_TX(0x12, 0x13);
    const AlertLssmByteRegister ALERT_LSSM_BYTE(0x14, 0x15);
    const AlertGenRegister ALERT_GEN(0x16, 0x17);
    const AlertOpstateRegister ALERT_OPSTATE(0x18, 0x19);
    const AlertBufRegister ALERT_BUF(0x1A, 0x1B);
    const AlertWdRegister ALERT_WD(0x1C, 0x1D);
    const AlertGpioRegister ALERT_GPIO(0x1E, 0x1F);

    class AlrtenRxRegister : Register
    {
    public:
        Bits RX_EMPTY_ALRTEN;
        Bits RX_STOP_ALRTEN;
        Bits RX_FULL_ALRTEN;
        Bits RX_OVRFLW_ERR_ALRTEN;
        Bits RX_IDLE_ALRTEN;
        Bits RX_BUSY_ALRTEN;
        Bits RX_ERR_ALRTEN;
        AlrtenRxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  RX_EMPTY_ALRTEN(0, 1), RX_STOP_ALRTEN(1, 1), RX_FULL_ALRTEN(2, 1),
                                                                                  RX_OVRFLW_ERR_ALRTEN(3, 1), RX_IDLE_ALRTEN(4, 1), RX_BUSY_ALRTEN(5, 1),
                                                                                  RX_ERR_ALRTEN(7, 1) {}
    };

    class AlrtenTxRegister : Register
    {
    public:
        Bits TX_EMPTY_ALRTEN;
        Bits TX_STOP_ALRTEN;
        Bits TX_FULL_ALRTEN;
        Bits TX_OVRFLW_ERR_ALRTEN;
        Bits TX_IDLE_ALRTEN;
        Bits TX_BUSY_ALRTEN;
        Bits TX_ERR_ALRTEN;
        AlrtenTxRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  TX_EMPTY_ALRTEN(0, 1), TX_STOP_ALRTEN(1, 1), TX_FULL_ALRTEN(2, 1),
                                                                                  TX_OVRFLW_ERR_ALRTEN(3, 1), TX_IDLE_ALRTEN(4, 1), TX_BUSY_ALRTEN(5, 1),
                                                                                  TX_ERR_ALRTEN(7, 1) {}
    };

    class AlrtenLssmByteRegister : Register
    {
    public:
        Bits HW_ERR_ALRTEN;
        Bits ALIVECOUNT_ERR_ALRTEN;
        Bits COMMAND_OP_ALRTEN;
        Bits COMM_MSMTCH_ERR_ALRTEN;
        Bits ALRTPCKT_ERR_ALRTEN;
        Bits COMM_ERR_ALRTEN;
        Bits ALRTPCKT_STATUS_ERR_ALRTEN;
        Bits RX_READY_ALRTEN;
        AlrtenLssmByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        HW_ERR_ALRTEN(0, 1), ALIVECOUNT_ERR_ALRTEN(1, 1), COMMAND_OP_ALRTEN(2, 1),
                                                                                        COMM_MSMTCH_ERR_ALRTEN(3, 1), ALRTPCKT_ERR_ALRTEN(4, 1), COMM_ERR_ALRTEN(5, 1),
                                                                                        ALRTPCKT_STATUS_ERR_ALRTEN(6, 1), RX_READY_ALRTEN(7, 1) {}
    };

    class AlrtenGenRegister : Register
    {
    public:
        Bits ALRTPCKTBUF_HW_ERR_ALRTEN;
        Bits ALRTPCKT_COMM_ERR_ALRTEN;
        Bits DATAPATH_ERR_ALRTEN;
        Bits GPIO_ERR_ALRTEN;
        Bits WD_ERR_ALRTEN;
        Bits DEV_COUNT_ERR_ALRTEN;
        Bits HFOSC_HW_ERRB_ALRTEN;
        AlrtenGenRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   ALRTPCKTBUF_HW_ERR_ALRTEN(0, 1), ALRTPCKT_COMM_ERR_ALRTEN(1, 1), DATAPATH_ERR_ALRTEN(3, 1),
                                                                                   GPIO_ERR_ALRTEN(4, 1), WD_ERR_ALRTEN(5, 1), DEV_COUNT_ERR_ALRTEN(6, 1), HFOSC_HW_ERRB_ALRTEN(7, 1) {}
    };

    class AlrtenOpstateRegister : Register
    {
    public:
        Bits SAFEMON_ALRTEN;
        AlrtenOpstateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       SAFEMON_ALRTEN(3, 1) {}
    };

    class AlrtenBufRegister : Register
    {
    public:
        Bits LSSM_FULL_ALRTEN;
        Bits ALRTPCKTBUF_FULL_ALRTEN;
        AlrtenBufRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   LSSM_FULL_ALRTEN(3, 1), ALRTPCKTBUF_FULL_ALRTEN(7, 1) {}
    };

    class AlrtenWdRegister : Register
    {
    public:
        Bits WD_EXP_ERR_ALRTEN;
        Bits WD_RJCT_ERR_ALRTEN;
        Bits WD_LFSR_ERR_ALRTEN;
        Bits WD_OPEN_ALRTEN;
        Bits WD_TO_ERR_ALRTEN;
        AlrtenWdRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                  WD_EXP_ERR_ALRTEN(0, 1), WD_RJCT_ERR_ALRTEN(1, 1), WD_LFSR_ERR_ALRTEN(2, 1), WD_OPEN_ALRTEN(3, 1), WD_TO_ERR_ALRTEN(4, 1) {}
    };

    class AlrtenGpioRegister : Register
    {
    public:
        Bits GPIO1_ERR_ALRTEN;
        Bits GPIO2_ERR_ALRTEN;
        Bits GPIO3_ERR_ALRTEN;
        Bits GPIO4_ERR_ALRTEN;
        AlrtenGpioRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    GPIO1_ERR_ALRTEN(0, 1), GPIO2_ERR_ALRTEN(1, 1), GPIO3_ERR_ALRTEN(2, 1), GPIO4_ERR_ALRTEN(3, 1) {}
    };

    // ALRTEN  Registers
    const AlrtenRxRegister ALRTEN_RX(0x20, 0x21);
    const AlrtenTxRegister ALRTEN_TX(0x22, 0x23);
    const AlrtenLssmByteRegister ALRTEN_LSSM_BYTE(0x24, 0x25);
    const AlrtenGenRegister ALRTEN_GEN(0x26, 0x27);
    const AlrtenOpstateRegister ALRTEN_OPSTATE(0x28, 0x29);
    const AlrtenBufRegister ALRTEN_BUF(0x2A, 0x2B);
    const AlrtenWdRegister ALRTEN_WD(0x2C, 0x2D);
    const AlrtenGpioRegister ALRTEN_GPIO(0x2E, 0x2F);

    class SwporRegister : public Register
    {
    public:
        Bits SWPOR;
        SwporRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SWPOR(0, 1) {}
    };
    class SlpEnRegister : public Register
    {
    public:
        Bits SLP_EN;
        SlpEnRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SLP_EN(0, 1) {}
    };

    class VerConfigRegister : public Register
    {
    public:
        Bits VER_CONFIG;
        VerConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), VER_CONFIG(0, 1) {}
    };

    class LoadConfigRegister : public Register
    {
    public:
        Bits LOAD_CONFIG;
        LoadConfigRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), LOAD_CONFIG(0, 1) {}
    };

    class WdKeyRegister : public Register
    {
    public:
        Bits WD_KEY;
        WdKeyRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_KEY(0, 8) {}
    };
    // COMMAND Registers
    const Register CLR_TXBUF(0x40, 0x41);
    const Register CLR_RXBUF(0x42, 0x43);
    const Register CLR_LSSM(0x44, 0x45);
    const Register CLR_ALIVECOUNT_SEED(0x46, 0x47);
    const SwporRegister SWPOR(0x4A, 0x4B);
    const SlpEnRegister SLP_EN(0x4C, 0x4D);
    const VerConfigRegister VER_CONFIG(0x4E, 0x4F);
    const LoadConfigRegister LOAD_CONFIG(0x50, 0x51);
    const WdKeyRegister WD_KEY(0x52, 0x53);

    class ConfigGen0Register : public Register
    {
    public:
        Bits DEV_COUNT;
        ConfigGen0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), DEV_COUNT(0, 6) {}
    };

    class ConfigGen1Register : public Register
    {
    public:
        Bits BAUD_RATE;
        Bits SINGLE_ENDED;
        ConfigGen1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), BAUD_RATE(4, 3), SINGLE_ENDED(7, 1) {}
    };

    class ConfigGen2Register : public Register
    {
    public:
        Bits TX_NOPREAMBLE;
        Bits TX_NOSTOP;
        Bits TX_PAUSE;
        Bits TX_ODDPARITY;
        Bits TX_QUEUE;
        Bits TX_PREAMBLES;
        Bits TX_RAW_DATA;
        ConfigGen2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    TX_NOPREAMBLE(0, 1), TX_NOSTOP(1, 1), TX_PAUSE(2, 1), TX_ODDPARITY(3, 1), TX_QUEUE(4, 1), TX_PREAMBLES(5, 1), TX_RAW_DATA(6, 2) {}
    };

    class ConfigGen3Register : public Register
    {
    public:
        Bits ALRTPCKT_TIMING;
        Bits SPI_DOUT_EN;
        Bits TX_UNLIMITED;
        Bits TX_AUTO;
        ConfigGen3Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    ALRTPCKT_TIMING(0, 4), SPI_DOUT_EN(5, 1), TX_UNLIMITED(6, 1), TX_AUTO(7, 1) {}
    };

    class ConfigGen4Register : public Register
    {
    public:
        Bits ALIVECOUNT_EN;
        Bits DC_EN;
        Bits MS_EN;
        Bits RXSWAP_EN;
        Bits CO_ALRTPCKTEN;
        ConfigGen4Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    ALIVECOUNT_EN(0, 2), DC_EN(2, 2), MS_EN(5, 2), RXSWAP_EN(6, 1), CO_ALRTPCKTEN(7, 1) {}
    };

    class ConfigGen5Register : public Register
    {
    public:
        Bits SPI_SFTYCSB;
        Bits SPI_SFTYSDI;
        Bits SPI_SFTYSCLK;
        Bits ALRTPCKT_DBNC;
        Bits TX_HI_Z;
        Bits TX_START_SETUP;

        ConfigGen5Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    SPI_SFTYCSB(0, 1), SPI_SFTYSDI(1, 1), SPI_SFTYSCLK(2, 1), ALRTPCKT_DBNC(3, 3), TX_HI_Z(6, 1), TX_START_SETUP(7, 1) {}
    };

    class ConfigSafeMon0Register : public Register
    {
    public:
        Bits GPIOREC_DLY;
        ConfigSafeMon0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), GPIOREC_DLY(0, 8) {}
    };

    class ConfigSafeMon1Register : public Register
    {
    public:
        Bits CONT_TIMER_DLY;
        ConfigSafeMon1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), CONT_TIMER_DLY(0, 8) {}
    };

    class ConfigSafeMon2Register : public Register
    {
    public:
        Bits SAFEMON_SCAN_DLY;
        ConfigSafeMon2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SAFEMON_SCAN_DLY(0, 1) {}
    };

    class ConfigSafeMon3Register : public Register
    {
    public:
        Bits SM_GPIO1_MASK;
        Bits SM_GPIO2_MASK;
        Bits SM_GPIO3_MASK;
        Bits SM_GPIO4_MASK;
        Bits NOMON;
        ConfigSafeMon3Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SM_GPIO1_MASK(0, 1), SM_GPIO2_MASK(1, 1), SM_GPIO3_MASK(2, 1), SM_GPIO4_MASK(3, 1), NOMON(8, 1) {}
    };

    class ConfigSlpRegister : public Register
    {
    public:
        Bits SLP_CBNTFY;
        Bits SLP_ALRTPCKTEN;
        Bits SLP_SCAN_DLY;
        ConfigSlpRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), SLP_CBNTFY(0, 3), SLP_ALRTPCKTEN(3, 1), SLP_SCAN_DLY(4, 2) {}
    };

    class ConfigCommRegister : Register
    {
    public:
        Bits COMM_TO_DLY;
        Bits COMM_RTRY;
        ConfigCommRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), COMM_TO_DLY(0, 3), COMM_RTRY(4, 2) {}
    };

    class StatusDbncMaskRegister : Register
    {
    public:
        Bits STATUS_DBNC_MASK;
        StatusDbncMaskRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), STATUS_DBNC_MASK(0, 8) {}
    };

    class StatusErrorMaskRegister : Register
    {
    public:
        Bits STATUS_ERROR_MASK;
        StatusErrorMaskRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), STATUS_ERROR_MASK(0, 8) {}
    };

    class ConfigGpio12Register : public Register
    {
    public:
        Bits GPIO1_CFG;
        Bits GPIO2_CFG;
        ConfigGpio12Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), GPIO1_CFG(0, 3), GPIO2_CFG(4, 3) {}
    };

    class ConfigGpio34Register : public Register
    {
    public:
        Bits GPIO3_CFG;
        Bits GPIO4_CFG;
        ConfigGpio34Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), GPIO3_CFG(0, 3), GPIO4_CFG(4, 3) {}
    };

    class ConfigWd0Register : Register
    {
    public:
        Bits WD_CLO;
        Bits WD_OPN;
        ConfigWd0Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_CLO(0, 4), WD_OPN(4, 4) {}
    };

    class ConfigWd1Register : public Register
    {
    public:
        Bits WD_DIV;
        Bits WD_1UD;
        ConfigWd1Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_DIV(0, 5), WD_1UD(5, 3) {}
    };

    class ConfigWd2Register : public Register
    {
    public:
        Bits WD_DBNC;
        Bits WD_SWW;
        Bits WD_EN;
        ConfigWd2Register(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress), WD_DBNC(0, 3), WD_SWW(3, 1), WD_EN(7, 1) {}
    };

    // CONFIG  Registers
    const ConfigGen0Register CONFIG_GEN0(0x60, 0x61);
    const ConfigGen1Register CONFIG_GEN1(0x62, 0x63);
    const ConfigGen2Register CONFIG_GEN2(0x64, 0x65);
    const ConfigGen3Register CONFIG_GEN3(0x66, 0x67);
    const ConfigGen4Register CONFIG_GEN4(0x68, 0x69);
    const ConfigGen5Register CONFIG_GEN5(0x6A, 0x6B);
    const ConfigSafeMon0Register CONFIG_SAFEMON0(0x6C, 0x6D);
    const ConfigSafeMon1Register CONFIG_SAFEMON1(0x6E, 0x6F);
    const ConfigSafeMon2Register CONFIG_SAFEMON2(0x70, 0x71);
    const ConfigSafeMon3Register CONFIG_SAFEMON3(0x72, 0x73);
    const ConfigSlpRegister CONFIG_SLP(0x74, 0x75);
    const ConfigCommRegister CONFIG_COMM(0x76, 0x77);
    const StatusDbncMaskRegister STATUS_DBNC_MASK0(0x78, 0x79);
    const StatusDbncMaskRegister STATUS_DBNC_MASK1(0x7A, 0x7B);
    const StatusErrorMaskRegister STATUS_ERR_MASK0(0x7C, 0x7D);
    const StatusErrorMaskRegister STATUS_ERR_MASK1(0x7E, 0x7F);
    const ConfigGpio12Register CONFIG_GPIO12(0x80, 0x81);
    const ConfigGpio34Register CONFIG_GPIO34(0x82, 0x83);
    const ConfigWd0Register CONFIG_WD0(0x84, 0x85);
    const ConfigWd1Register CONFIG_WD1(0x86, 0x87);
    const ConfigWd2Register CONFIG_WD2(0x88, 0x89);

    class AlrtpcktbufRdPtrRegister : public Register
    {
    public:
        Bits ALRTPCKTBUF_RD_PTR;
        AlrtpcktbufRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                          ALRTPCKTBUF_RD_PTR(0, 3) {}
    };

    class AlrtpcktbufRdMsgRegister : public Register
    {
    public:
        Bits ALRTPCKTBUF_RD_MSG;
        AlrtpcktbufRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                          ALRTPCKTBUF_RD_MSG(0, 8) {}
    };

    class RxRdMsgRegister : public Register
    {
    public:
        Bits RX_RD_MSG;
        RxRdMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_RD_MSG(0, 8) {}
    };

    class RxRdNxtMsgRegister : public Register
    {
    public:
        Bits RX_RD_NXT_MSG;
        RxRdNxtMsgRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    RX_RD_NXT_MSG(0, 8) {}
    };

    class TxQueueSelRegister : public Register
    {
    public:
        Bits LD_Q;
        Bits TX_Q;
        TxQueueSelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    LD_Q(0, 1), TX_Q(1, 1) {}
    };

    class RxRdPtrRegister : public Register
    {
    public:
        Bits RX_RD_PTR;
        RxRdPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_RD_PTR(0, 7) {}
    };

    class RxWrPtrRegister : public Register
    {
    public:
        Bits RX_WR_PTR;
        RxWrPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_WR_PTR(0, 7) {}
    };

    class RxNxtMsgPtrRegister : public Register
    {
    public:
        Bits RX_NXT_MSG_PTR;
        RxNxtMsgPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                     RX_NXT_MSG_PTR(0, 7) {}
    };

    class RxSpaceRegister : public Register
    {
    public:
        Bits RX_SPACE;
        RxSpaceRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 RX_SPACE(0, 7) {}
    };

    class RxByteRegister : public Register
    {
    public:
        Bits RX_LAST_BYTE;
        Bits RX_BYTE_ERR;
        Bits RX_FIRST_BYTE;
        RxByteRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                RX_LAST_BYTE(0, 1), RX_BYTE_ERR(1, 1), RX_FIRST_BYTE(2, 1) {}
    };

    // RX COMMAND Registers
    const AlrtpcktbufRdPtrRegister ALRTPCKTBUF_RD_PTR(0x8C, 0x8D);
    const AlrtpcktbufRdMsgRegister ALRTPCKTBUF_RD_MSG(0x8E, 0x8F);
    const RxRdMsgRegister RX_RD_MSG(0x90, 0x91);
    const RxRdNxtMsgRegister RX_RD_NXT_MSG(0x92, 0x93);
    const TxQueueSelRegister TX_QUEUE_SEL(0x94, 0x95);
    const RxRdPtrRegister RX_RD_PTR(0x96, 0x97);
    const RxWrPtrRegister RX_WR_PTR(0x98, 0x99);
    const RxNxtMsgPtrRegister RX_NXT_MSG_PTR(0x9A, 0x9B);
    const RxSpaceRegister RX_SPACE(0x9C, 0x9D);
    const RxByteRegister RX_BYTE(0x9E, 0x9F);

    class NxtLdqRegister : public Register
    {
    public:
        Bits NXT_LDQ;
        NxtLdqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                NXT_LDQ(0, 8) {}
    };

    class LdqRegister : public Register
    {
    public:
        Bits LDQ;
        LdqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                             LDQ(0, 8) {}
    };

    class LdqPtrRegister : public Register
    {
    public:
        Bits LDQ_PTR;
        LdqPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                LDQ_PTR(0, 5) {}
    };

    class ConfigqRegister : public Register
    {
    public:
        Bits CONFIGQ;
        ConfigqRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 CONFIGQ(0, 8) {}
    };

    class ConfigPtrRegister : public Register
    {
    public:
        Bits CONFIG_BYTE_PTR;
        Bits CONFIG_QUEUE_PTR;
        ConfigPtrRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                   CONFIG_BYTE_PTR(0, 5), CONFIG_QUEUE_PTR(5, 2) {}
    };

    // TX COMMAND Registers
    const NxtLdqRegister NXT_LDQ(0xB0, 0xB1);
    const LdqRegister LDQ(0xC0, 0xC1);
    const LdqPtrRegister LDQ_PTR(0xC2, 0xC3);
    const ConfigqRegister CONFIGQ(0xD0, 0xD1);
    const ConfigPtrRegister CONFIG_PTR(0xD2, 0xD3);

    class StateRegister : public Register
    {
    public:
        Bits STATE;
        StateRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                               STATE(0, 3) {}
    };

    class CommRtryCntRegister : public Register
    {
    public:
        Bits COMM_RTRY_CNT;
        CommRtryCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                     COMM_RTRY_CNT(0, 4) {}
    };

    class AlrtpcktErrCntRegister : public Register
    {
    public:
        Bits ALRTPCKT_ERR_CNT;
        AlrtpcktErrCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        ALRTPCKT_ERR_CNT(0, 8) {}
    };

    class WdFaultCntRegister : public Register
    {
    public:
        Bits WD_FAULT_CNT;
        WdFaultCntRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    WD_FAULT_CNT(0, 8) {}
    };

    class AlivecountSeedRegister : public Register
    {
    public:
        Bits ALIVECOUNT_SEED;
        AlivecountSeedRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                        ALIVECOUNT_SEED(0, 8) {}
    };

    class AlivecountRetRegister : public Register
    {
    public:
        Bits ALIVECOUNT_RET;
        AlivecountRetRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                       ALIVECOUNT_RET(0, 8) {}
    };

    class AlivecountQRegister : public Register
    {
    public:
        Bits ALIVECOUNT_Q;
        AlivecountQRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                     ALIVECOUNT_Q(0, 3) {}
    };

    class FaultTimerRegister : public Register
    {
    public:
        Bits FAULT_TIMER;
        FaultTimerRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    FAULT_TIMER(0, 8) {}
    };

    class SlpCbtimerRegister : public Register
    {
    public:
        Bits SLP_CBTIMER;
        SlpCbtimerRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                    SLP_CBTIMER(0, 8) {}
    };

    class VersionRegister : public Register
    {
    public:
        Bits VERSION;
        Bits MODEL;
        VersionRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                                 VERSION(0, 4), MODEL(4, 4) {}
    };

    class ModelRegister : public Register
    {
    public:
        Bits MODEL;
        ModelRegister(const uint8_t writeAddress, const uint8_t readAddress) : Register(writeAddress, readAddress),
                                                                               MODEL(0, 8) {}
    };

    // INFO Registers
    const StateRegister STATE(0xDC, 0xDD);
    const CommRtryCntRegister COMM_RTRY_CNT(0xDE, 0xDF);
    const AlrtpcktErrCntRegister ALRTPCKT_ERR_CNT(0xE0, 0xE1);
    const WdFaultCntRegister WD_FAULT_CNT(0xE2, 0xE3);
    const AlivecountSeedRegister ALIVECOUNT_SEED(0xE4, 0xE5);
    const AlivecountRetRegister ALIVECOUNT_RET(0xE6, 0xE7);
    const AlivecountQRegister ALIVECOUNT_Q(0xE8, 0xE9);
    const FaultTimerRegister FAULT_TIMER0(0xEA, 0xEB);
    const FaultTimerRegister FAULT_TIMER1(0xEC, 0xED);
    const SlpCbtimerRegister SLP_CBTIMER0(0xEE, 0xEF);
    const SlpCbtimerRegister SLP_CBTIMER1(0xF0, 0xF1);
    const VersionRegister VERSION(0xF2, 0xF3);
    const ModelRegister MODEL(0xF4, 0xF5);
}

#endif