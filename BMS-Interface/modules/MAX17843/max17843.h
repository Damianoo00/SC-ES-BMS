#ifndef MAX17843_H
#define MAX17843_H

namespace max17843
{
    class Register
    {
        uint8_t address;
        Register(uint8_t address)::address(address);
        {
        }
    };
    const Register VERSION(0x00);    // Device model and version address
    const Register ADDRESS(0x01);    // Device addresses address                                             // namespace ADDRESS
    const Register STATUS(0x02);     // Status flags address
    const Register FMEA1(0x03);      // Failure mode flags 1 address
    const Register ALRTCELL(0x04);   // Voltage-fault alert flags address
    const Register ALRTOVCELL(0x05); // Overvoltage alert flags address
    const Register ALRTUVCELL(0x07); // Undervoltage alert flags address
    const Register ALRTBALSW(0x08);  // Balancing switch alert flags address
    const Register MINMAXCELL(0x0A); // Cell number for the highest and lowest voltages measured address
    const Register FMEA2(0x0B);      // Failure mode flags 2 address
    const Register ADR(0x0C);        // AUTOBALSWDIS Delay Register address
    const Register ID1(0x0D);        // Device ID 1 address
    const Register ID2(0x0E);        // Device ID 2 address
    const Register DEVCFG1(0x10);    // Device configuration 1 address
    const Register GPIO(0x11);       // GPIO status and configuration address
    const Register MEASUREEN(0x12);  // Measurement enables address
    const Register SCANCTRL(0x13);   // Acquisition control and status addres
    const Register ALRTOVEN(0x14);   // Overvoltage alert enables address
    const Register ALRTUVEN(0x15);   // Undervoltage alert enables address
    const Register TIMERCFG(0x18);   // Timer configuration address
    const Register ACQCFG(0x19);     // Acquisition configuration address
    const Register BALSWEN(0x1A);    // Balancing switch enables address
    const Register DEVCFG2(0x1B);    // Device configuration 2 address
    const Register BALDIAGCFG(0x1C); // Balancing diagnostic configuration address
    const Register BALSWDCHG(0x1D);  // Balancing switch discharge configuration address
    const Register TOPCELL(0x1E);    // Top cell configuration address
    const Register CELL1(0x20);      // Cell 1 measurement result address
    const Register CELL2(0x21);      // Cell 2 measurement result address
    const Register CELL3(0x22);      // Cell 3 measurement result address
    const Register CELL4(0x23);      // Cell 4 measurement result address
    const Register CELL5(0x24);      // Cell 5 measurement result address
    const Register CELL6(0x25);      // Cell 6 measurement result address
    const Register CELL7(0x26);      // Cell 7 measurement result address
    const Register CELL8(0x27);      // Cell 8 measurement result address
    const Register CELL9(0x28);      // Cell 9 measurement result address
    const Register CELL10(0x29);     // Cell 10 measurement result address
    const Register CELL11(0x2A);     // Cell 11 measurement result address
    const Register CELL12(0x2B);     // Cell 12 measurement result address
    const Register BLOCK(0x2C);      // block measurement result address
    const Register AIN1(0x2D);       // AUXIN1 measurement result address
    const Register AIN2(0x2E);       // AUXIN2 measurement result address
    const Register TOTAL(0x2F);      // Sum of all cell measurements address
    const Register OVTHCLR(0x40);    // Cell overvoltage clear threshold address
    const Register OVTHSET(0x42);    // Cell overvoltage set threshold address
    const Register UVTHCLR(0x44);    // Cell undervoltage clear threshold address
    const Register UVTHSET(0x46);    // Cell undervoltage set threshold address
    const Register MSMTCH(0x48);     // Cell mismatch threshold address
    const Register AINOT(0x49);      // AUXIN overtemperature threshold address
    const Register AINUT(0x4A);      // AUXIN undertemperature threshold address
    const Register BALSHRTTHR(0x4B); // Balancing switch diagnostic, short-circuit threshold address
    const Register BALLOWTHR(0x4C);  // Balancing switch diagnostic, on-state low threshold address
    const Register BALHIGHTHR(0x4D); // Balancing switch diagnostic, on-state high threshold address
    const Register DIAG(0x50);       // Diagnostic measurement result address
    const Register DIAGCFG(0x51);    // Diagnostic configuration address
    const Register CTSTCFG(0x52);    // Test source configuration address
    const Register ADCTEST1A(0x57);  // User-specified data for ALU diagnostic address
    const Register ADCTEST1B(0x58);  // User-specified data for ALU diagnostic address
    const Register ADCTEST2A(0x59);  // User-specified data for ALU diagnostic address
    const Register ADCTEST2B(0x5A);  // User-specified data for ALU diagnostic address
}
#endif
