#define VERSION_ADDR 0x00 // Device model and version address
#define VERSION_POR xxxxh // Device model and version power on restart bit

#define ADDRESS_ADDR 0x01 // Device addresses address
#define ADDRESS_POR 0000h // Device addresses power on restart bit

#define STATUS_ADDR 0x02 // Status flags address
#define STATUS_POR 8000h // Status flags power on restart bit

#define FMEA1_ADDR 0x03 // Failure mode flags 1 address
#define FMEA1_POR 0000h // Failure mode flags 1 power on restart bit

#define ALRTCELL_ADDR 0x04 // Voltage-fault alert flags address
#define ALRTCELL_POR 0000h // Voltage-fault alert flags power on restart bit

#define ALRTOVCELL_ADDR 0x05 // Overvoltage alert flags address
#define ALRTOVCELL_POR 0000h // Overvoltage alert flags power on restart bit

#define ALRTUVCELL_ADDR 0x07 // Undervoltage alert flags address
#define ALRTUVCELL_POR 0000h // Undervoltage alert flags power on restart bit

#define ALRTBALSW_ADDR 0x08 // Balancing switch alert flags address
#define ALRTBALSW_POR 0000h // Balancing switch alert flags power on restart bit

#define MINMAXCELL_ADDR 0x0A // Cell number for the highest and lowest voltages measured address
#define MINMAXCELL_POR 0F0Fh // Cell number for the highest and lowest voltages measured power on restart bit

#define FMEA2_ADDR 0x0B // Failure mode flags 2 address
#define FMEA2_POR 0000h // Failure mode flags 2 power on restart bit

#define ADR_ADDR 0x0C // AUTOBALSWDIS Delay Register address
#define ADR_POR 0000h // AUTOBALSWDIS Delay Register power on restart bit

#define ID1_ADDR 0x0D // Device ID 1 address
#define ID1_POR XXXXh // Device ID 1 power on restart bit

#define ID2_ADDR 0x0E // Device ID 2 address
#define ID2_POR XXXXh // Device ID 2 power on restart bit

#define DEVCFG1_ADDR 0x10 // Device configuration 1 address
#define DEVCFG1_POR 1002h // Device configuration 1 power on restart bit

#define GPIO_ADDR 0x11 // GPIO status and configuration address
#define GPIO_POR 0000h // GPIO status and configuration power on restart bit

#define MEASUREEN_ADDR 0x12 // Measurement enables address
#define MEASUREEN_POR 0000h // Measurement enables power on restart bit

#define SCANCTRL_ADDR 0x13 // Acquisition control and status address
#define SCANCTRL_POR 0000h // Acquisition control and status power on restart bit

#define ALRTOVEN_ADDR 0x14 // Overvoltage alert enables address
#define ALRTOVEN_POR 0000h // Overvoltage alert enables power on restart bit

#define ALRTUVEN_ADDR 0x15 // Undervoltage alert enables address
#define ALRTUVEN_POR 0000h // Undervoltage alert enables power on restart bit

#define TIMERCFG_ADDR 0x18 // Timer configuration address
#define TIMERCFG_POR 0000h // Timer configuration power on restart bit

#define ACQCFG_ADDR 0x19 // Acquisition configuration address
#define ACQCFG_POR 0000h // Acquisition configuration power on restart bit

#define BALSWEN_ADDR 0x1A // Balancing switch enables address
#define BALSWEN_POR 0000h // Balancing switch enables power on restart bit

#define DEVCFG2_ADDR 0x1B // Device configuration 2 address
#define DEVCFG2_POR 0000h // Device configuration 2 power on restart bit

#define BALDIAGCFG_ADDR 0x1C // Balancing diagnostic configuration address
#define BALDIAGCFG_POR 0000h // Balancing diagnostic configuration power on restart bit

#define BALSWDCHG_ADDR 0x1D // Balancing switch discharge configuration address
#define BALSWDCHG_POR 0000h // Balancing switch discharge configuration power on restart bit

#define TOPCELL_ADDR 0x1E // Top cell configuration address
#define TOPCELL_POR 000Ch // Top cell configuration power on restart bit

#define CELL1_ADDR 0x20 // Cell 1 measurement result address
#define CELL1_POR 0000h // Cell 1 measurement result power on restart bit

#define CELL2_ADDR 0x21 // Cell 2 measurement result address
#define CELL2_POR 0000h // Cell 2 measurement result power on restart bit

#define CELL3_ADDR 0x22 // Cell 3 measurement result address
#define CELL3_POR 0000h // Cell 3 measurement result power on restart bit

#define CELL4_ADDR 0x23 // Cell 4 measurement result address
#define CELL4_POR 0000h // Cell 4 measurement result power on restart bit

#define CELL5_ADDR 0x24 // Cell 5 measurement result address
#define CELL5_POR 0000h // Cell 5 measurement result power on restart bit

#define CELL6_ADDR 0x25 // Cell 6 measurement result address
#define CELL6_POR 0000h // Cell 6 measurement result power on restart bit

#define CELL7_ADDR 0x26 // Cell 7 measurement result address
#define CELL7_POR 0000h // Cell 7 measurement result power on restart bit

#define CELL8_ADDR 0x27 // Cell 8 measurement result address
#define CELL8_POR 0000h // Cell 8 measurement result power on restart bit

#define CELL9_ADDR 0x28 // Cell 9 measurement result address
#define CELL9_POR 0000h // Cell 9 measurement result power on restart bit

#define CELL10_ADDR 0x29 // Cell 10 measurement result address
#define CELL10_POR 0000h // Cell 10 measurement result power on restart bit

#define CELL11_ADDR 0x2A // Cell 11 measurement result address
#define CELL11_POR 0000h // Cell 11 measurement result power on restart bit

#define CELL12_ADDR 0x2B // Cell 12 measurement result address
#define CELL12_POR 0000h // Cell 12 measurement result power on restart bit

<NA>

<NA>

#define AIN2_ADDR 0x2E // AUXIN2 measurement result address
#define AIN2_POR 0000h // AUXIN2 measurement result power on restart bit

#define TOTAL_ADDR 0x2F // Sum of all cell measurements address
#define TOTAL_POR 0000h // Sum of all cell measurements power on restart bit

#define OVTHCLR_ADDR 0x40 // Cell overvoltage clear threshold address
#define OVTHCLR_POR FFFCh // Cell overvoltage clear threshold power on restart bit

#define OVTHSET_ADDR 0x42 // Cell overvoltage set threshold address
#define OVTHSET_POR FFFCh // Cell overvoltage set threshold power on restart bit

#define UVTHCLR_ADDR 0x44 // Cell undervoltage clear threshold address
#define UVTHCLR_POR 0000h // Cell undervoltage clear threshold power on restart bit

#define UVTHSET_ADDR 0x46 // Cell undervoltage set threshold address
#define UVTHSET_POR 0000h // Cell undervoltage set threshold power on restart bit

#define MSMTCH_ADDR 0x48 // Cell mismatch threshold address
#define MSMTCH_POR FFFCh // Cell mismatch threshold power on restart bit

#define AINOT_ADDR 0x49 // AUXIN overtemperature threshold address
#define AINOT_POR 0000h // AUXIN overtemperature threshold power on restart bit

#define AINUT_ADDR 0x4A // AUXIN undertemperature threshold address
#define AINUT_POR FFF0h // AUXIN undertemperature threshold power on restart bit

#define BALSHRTTHR_ADDR 0x4B // Balancing switch diagnostic, short-circuit threshold address
#define BALSHRTTHR_POR 0000h // Balancing switch diagnostic, short-circuit threshold power on restart bit

#define BALLOWTHR_ADDR 0x4C // Balancing switch diagnostic, on-state low threshold address
#define BALLOWTHR_POR 0000h // Balancing switch diagnostic, on-state low threshold power on restart bit

#define BALHIGHTHR_ADDR 0x4D // Balancing switch diagnostic, on-state high threshold address
#define BALHIGHTHR_POR 0000h // Balancing switch diagnostic, on-state high threshold power on restart bit

#define DIAG_ADDR 0x50 // Diagnostic measurement result address
#define DIAG_POR 0000h // Diagnostic measurement result power on restart bit

#define DIAGCFG_ADDR 0x51 // Diagnostic configuration address
#define DIAGCFG_POR 0000h // Diagnostic configuration power on restart bit

#define CTSTCFG_ADDR 0x52 // Test source configuration address
#define CTSTCFG_POR 0000h // Test source configuration power on restart bit

#define ADCTEST1A_ADDR 0x57 // User-specified data for ALU diagnostic address
#define ADCTEST1A_POR 0000h // User-specified data for ALU diagnostic power on restart bit

#define ADCTEST1B_ADDR 0x58 // User-specified data for ALU diagnostic address
#define ADCTEST1B_POR 0000h // User-specified data for ALU diagnostic power on restart bit

#define ADCTEST2A_ADDR 0x59 // User-specified data for ALU diagnostic address
#define ADCTEST2A_POR 0000h // User-specified data for ALU diagnostic power on restart bit

#define ADCTEST2B_ADDR 0x5A // User-specified data for ALU diagnostic address
#define ADCTEST2B_POR 0000h // User-specified data for ALU diagnostic power on restart bit
