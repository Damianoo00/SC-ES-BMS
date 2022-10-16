#include <max17851.h>
// STATUS  Registers
namespace max17851
{
    Register STATUS_RX(0x00, 0x01);
    Register STATUS_TX(0x02, 0x03);
    Register STATUS_LSSM_BYTE(0x04, 0x05);
    Register STATUS_GEN(0x06, 0x07);
    Register STATUS_OPSTATE(0x08, 0x09);
    Register STATUS_BUF(0x0A, 0x0B);
    Register STATUS_WD(0x0C, 0x0D);
    Register STATUS_GPIO(0x0E, 0x0F);

    // ALERT  Registers
    Register ALERT_RX(0x10, 0x11);
    Register ALERT_TX(0x12, 0x13);
    Register ALERT_LSSM_BYTE(0x14, 0x15);
    Register ALERT_GEN(0x16, 0x17);
    Register ALERT_OPSTATE(0x18, 0x19);
    Register ALERT_BUF(0x1A, 0x1B);
    Register ALERT_WD(0x1C, 0x1D);
    Register ALERT_GPIO(0x1E, 0x1F);

    // ALRTEN  Registers
    Register ALRTEN_RX(0x20, 0x21);
    Register ALRTEN_TX(0x22, 0x23);
    Register ALRTEN_LSSM_BYTE(0x24, 0x25);
    Register ALRTEN_GEN(0x26, 0x27);
    Register ALRTEN_OPSTATE(0x28, 0x29);
    Register ALRTEN_BUF(0x2A, 0x2B);
    Register ALRTEN_WD(0x2C, 0x2D);
    Register ALRTEN_GPIO(0x2E, 0x2F);

    // COMMAND  Registers
    Register CLR_TXBUF(0x40, 0x41);
    Register CLR_RXBUF(0x42, 0x43);
    Register CLR_LSSM(0x44, 0x45);
    Register CLR_ALIVECOUNT_SEED(0x46, 0x47);
    Register SWPOR(0x4A, 0x4B);
    Register SLP_EN(0x4C, 0x4D);
    Register VER_CONFIG(0x4E, 0x4F);
    Register LOAD_CONFIG(0x50, 0x51);
    Register WD_KEY(0x52, 0x53);

    // CONFIG  Registers
    Register CONFIG_GEN0(0x60, 0x61);
    Register CONFIG_GEN1(0x62, 0x63);
    Register CONFIG_GEN2(0x64, 0x65);
    Register CONFIG_GEN3(0x66, 0x67);
    Register CONFIG_GEN4(0x68, 0x69);
    Register CONFIG_GEN5(0x6A, 0x6B);
    Register CONFIG_SAFEMON0(0x6C, 0x6D);
    Register CONFIG_SAFEMON1(0x6E, 0x6F);
    Register CONFIG_SAFEMON2(0x70, 0x71);
    Register CONFIG_SAFEMON3(0x72, 0x73);
    Register CONFIG_SLP(0x74, 0x75);
    Register CONFIG_COMM(0x76, 0x77);
    Register STATUS_DBNC_MASK0(0x78, 0x79);
    Register STATUS_DBNC_MASK1(0x7A, 0x7B);
    Register STATUS_ERR_MASK0(0x7C, 0x7D);
    Register STATUS_ERR_MASK1(0x7E, 0x7F);
    Register CONFIG_GPIO12(0x80, 0x81);
    Register CONFIG_GPIO34(0x82, 0x83);
    Register CONFIG_WD0(0x84, 0x85);
    Register CONFIG_WD1(0x86, 0x87);
    Register CONFIG_WD2(0x88, 0x89);

    // RX COMMAND  Registers
    Register ALRTPCKTBUF_RD_PTR(0x8C, 0x8D);
    Register ALRTPCKTBUF_RD_MSG(0x8E, 0x8F);
    Register RX_RD_MSG(0x90, 0x91);
    Register RX_RD_NXT_MSG(0x92, 0x93);
    Register TX_QUEUE_SEL(0x94, 0x95);
    Register RX_RD_PTR(0x96, 0x97);
    Register RX_WR_PTR(0x98, 0x99);
    Register RX_NXT_MSG_PTR(0x9A, 0x9B);
    Register RX_SPACE(0x9C, 0x9D);
    Register RX_BYTE(0x9E, 0x9F);

    // TX COMMAND  Registers
    Register NXT_LDQ(0xB0, 0xB1);
    Register LDQ(0xC0, 0xC1);
    Register LDQ_PTR(0xC2, 0xC3);
    Register CONFIGQ(0xD0, 0xD1);
    Register CONFIG_PTR(0xD2, 0xD3);

    // INFO  Registers
    Register STATE(0xDC, 0xDD);
    Register COMM_RTRY_CNT(0xDE, 0xDF);
    Register ALRTPCKT_ERR_CNT(0xE0, 0xE1);
    Register WD_FAULT_CNT(0xE2, 0xE3);
    Register ALIVECOUNT_SEED(0xE4, 0xE5);
    Register ALIVECOUNT_RET(0xE6, 0xE7);
    Register ALIVECOUNT_Q(0xE8, 0xE9);
    Register FAULT_TIMER0(0xEA, 0xEB);
    Register FAULT_TIMER1(0xEC, 0xED);
    Register SLP_CBTIMER0(0xEE, 0xEF);
    Register SLP_CBTIMER1(0xF0, 0xF1);
    Register VERSION(0xF2, 0xF3);
    Register MODEL(0xF4, 0xF5);
}