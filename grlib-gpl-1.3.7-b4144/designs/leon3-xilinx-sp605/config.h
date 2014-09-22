/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED
#define CONFIG_LEON3FT_PRESENT 1
#define CONFIG_HAS_SHARED_GRFPU 1
/*
 * Synthesis      
 */
#undef  CONFIG_SYN_INFERRED
#undef  CONFIG_SYN_STRATIX
#undef  CONFIG_SYN_STRATIXII
#undef  CONFIG_SYN_STRATIXIII
#undef  CONFIG_SYN_STRATIXIV
#undef  CONFIG_SYN_CYCLONEIII
#undef  CONFIG_SYN_ALTERA
#undef  CONFIG_SYN_AXCEL
#undef  CONFIG_SYN_AXDSP
#undef  CONFIG_SYN_PROASIC
#undef  CONFIG_SYN_PROASICPLUS
#undef  CONFIG_SYN_PROASIC3
#undef  CONFIG_SYN_PROASIC3E
#undef  CONFIG_SYN_PROASIC3L
#undef  CONFIG_SYN_IGLOO
#undef  CONFIG_SYN_FUSION
#undef  CONFIG_SYN_UT025CRH
#undef  CONFIG_SYN_UT130HBD
#undef  CONFIG_SYN_UT90NHBD
#undef  CONFIG_SYN_ATC18
#undef  CONFIG_SYN_ATC18RHA
#undef  CONFIG_SYN_CMOS9SF
#undef  CONFIG_SYN_CUSTOM1
#undef  CONFIG_SYN_EASIC90
#undef  CONFIG_SYN_EASIC45
#undef  CONFIG_SYN_IHP25
#undef  CONFIG_SYN_IHP25RH
#undef  CONFIG_SYN_LATTICE
#undef  CONFIG_SYN_ECLIPSE
#undef  CONFIG_SYN_PEREGRINE
#undef  CONFIG_SYN_RH_LIB18T
#undef  CONFIG_SYN_RHUMC
#undef  CONFIG_SYN_SAED32
#undef  CONFIG_SYN_DARE
#undef  CONFIG_SYN_SMIC13
#undef  CONFIG_SYN_TM65GPLUS
#undef  CONFIG_SYN_TSMC90
#undef  CONFIG_SYN_UMC
#undef  CONFIG_SYN_ARTIX7
#undef  CONFIG_SYN_KINTEX7
#undef  CONFIG_SYN_SPARTAN3
#undef  CONFIG_SYN_SPARTAN3E
#define CONFIG_SYN_SPARTAN6 1
#undef  CONFIG_SYN_VIRTEXE
#undef  CONFIG_SYN_VIRTEX2
#undef  CONFIG_SYN_VIRTEX4
#undef  CONFIG_SYN_VIRTEX5
#undef  CONFIG_SYN_VIRTEX6
#undef  CONFIG_SYN_VIRTEX7
#undef  CONFIG_SYN_ZYNQ7000
#undef  CONFIG_SYN_INFER_RAM
#undef  CONFIG_SYN_INFER_PADS
#undef  CONFIG_SYN_NO_ASYNC
#undef  CONFIG_SYN_SCAN
/*
 * Clock generation
 */
#undef  CONFIG_CLK_INFERRED
#undef  CONFIG_CLK_HCLKBUF
#undef  CONFIG_CLK_UT130HBD
#undef  CONFIG_CLK_ALTDLL
#undef  CONFIG_CLK_LATDLL
#undef  CONFIG_CLK_PRO3PLL
#undef  CONFIG_CLK_PRO3EPLL
#undef  CONFIG_CLK_PRO3LPLL
#undef  CONFIG_CLK_FUSPLL
#undef  CONFIG_CLK_LIB18T
#undef  CONFIG_CLK_RHUMC
#undef  CONFIG_CLK_DARE
#undef  CONFIG_CLK_SAED32
#undef  CONFIG_CLK_EASIC45
#undef  CONFIG_CLK_CLKPLLE2
#undef  CONFIG_CLK_CLKDLL
#define CONFIG_CLK_DCM 1
#define CONFIG_CLK_MUL (5)
#define CONFIG_CLK_DIV (3)
#undef  CONFIG_PCI_CLKDLL
#undef  CONFIG_CLK_NOFB
#undef  CONFIG_PCI_SYSCLK
/*
 * Processor            
 */
#define CONFIG_LEON3 1
#define CONFIG_PROC_NUM (1)
#undef  CONFIG_LEON3_MIN
#undef  CONFIG_LEON3_GP
#undef  CONFIG_LEON3_HP
#define CONFIG_LEON3_CUSTOM 1
/*
 * Integer unit                                           
 */
#define CONFIG_IU_NWINDOWS (8)
#define CONFIG_IU_V8MULDIV 1
#define CONFIG_IU_MUL_LATENCY_2 1
#undef  CONFIG_IU_MUL_LATENCY_4
#undef  CONFIG_IU_MUL_LATENCY_5
#define CONFIG_IU_MUL_INFERRED 1
#undef  CONFIG_IU_MUL_MODGEN
#undef  CONFIG_IU_MUL_TECHSPEC
#undef  CONFIG_IU_MUL_DW
#define CONFIG_IU_BP 1
#define CONFIG_IU_SVT 1
#define CONFIG_NOTAG 1
#define CONFIG_IU_LDELAY (1)
#define CONFIG_IU_WATCHPOINTS (2)
#define CONFIG_PWD 1
#define CONFIG_IU_RSTADDR 00000
/*
 * Floating-point unit
 */
#undef  CONFIG_FPU_ENABLE
/*
 * Cache system
 */
#define CONFIG_ICACHE_ENABLE 1
#undef  CONFIG_ICACHE_ASSO1
#define CONFIG_ICACHE_ASSO2 1
#undef  CONFIG_ICACHE_ASSO3
#undef  CONFIG_ICACHE_ASSO4
#undef  CONFIG_ICACHE_SZ1
#undef  CONFIG_ICACHE_SZ2
#undef  CONFIG_ICACHE_SZ4
#define CONFIG_ICACHE_SZ8 1
#undef  CONFIG_ICACHE_SZ16
#undef  CONFIG_ICACHE_SZ32
#undef  CONFIG_ICACHE_SZ64
#undef  CONFIG_ICACHE_SZ128
#undef  CONFIG_ICACHE_SZ256
#undef  CONFIG_ICACHE_LZ16
#define CONFIG_ICACHE_LZ32 1
#define CONFIG_ICACHE_ALGORND 1
#undef  CONFIG_ICACHE_ALGODIR
#undef  CONFIG_ICACHE_ALGOLRR
#undef  CONFIG_ICACHE_ALGOLRU
#undef  CONFIG_ICACHE_LOCK
#define CONFIG_DCACHE_ENABLE 1
#undef  CONFIG_DCACHE_ASSO1
#define CONFIG_DCACHE_ASSO2 1
#undef  CONFIG_DCACHE_ASSO3
#undef  CONFIG_DCACHE_ASSO4
#undef  CONFIG_DCACHE_SZ1
#undef  CONFIG_DCACHE_SZ2
#define CONFIG_DCACHE_SZ4 1
#undef  CONFIG_DCACHE_SZ8
#undef  CONFIG_DCACHE_SZ16
#undef  CONFIG_DCACHE_SZ32
#undef  CONFIG_DCACHE_SZ64
#undef  CONFIG_DCACHE_SZ128
#undef  CONFIG_DCACHE_SZ256
#define CONFIG_DCACHE_LZ16 1
#undef  CONFIG_DCACHE_LZ32
#define CONFIG_DCACHE_ALGORND 1
#undef  CONFIG_DCACHE_ALGODIR
#undef  CONFIG_DCACHE_ALGOLRR
#undef  CONFIG_DCACHE_ALGOLRU
#undef  CONFIG_DCACHE_LOCK
#define CONFIG_DCACHE_SNOOP 1
#define CONFIG_DCACHE_SNOOP_SEPTAG 1
#define CONFIG_CACHE_FIXED 0
/*
 * MMU
 */
#define CONFIG_MMU_ENABLE 1
#undef  CONFIG_MMU_COMBINED
#define CONFIG_MMU_SPLIT 1
#define CONFIG_MMU_REPARRAY 1
#undef  CONFIG_MMU_REPINCREMENT
#undef  CONFIG_MMU_I2
#undef  CONFIG_MMU_I4
#define CONFIG_MMU_I8 1
#undef  CONFIG_MMU_I16
#undef  CONFIG_MMU_I32
#undef  CONFIG_MMU_I64
#undef  CONFIG_MMU_D2
#undef  CONFIG_MMU_D4
#define CONFIG_MMU_D8 1
#undef  CONFIG_MMU_D16
#undef  CONFIG_MMU_D32
#undef  CONFIG_MMU_D64
#define CONFIG_MMU_FASTWB 1
#define CONFIG_MMU_PAGE_4K 1
#undef  CONFIG_MMU_PAGE_8K
#undef  CONFIG_MMU_PAGE_16K
#undef  CONFIG_MMU_PAGE_32K
#undef  CONFIG_MMU_PAGE_PROG
/*
 * Debug Support Unit        
 */
#define CONFIG_DSU_ENABLE 1
#define CONFIG_DSU_ITRACE 1
#undef  CONFIG_DSU_ITRACESZ1
#undef  CONFIG_DSU_ITRACESZ2
#define CONFIG_DSU_ITRACESZ4 1
#undef  CONFIG_DSU_ITRACESZ8
#undef  CONFIG_DSU_ITRACESZ16
#define CONFIG_DSU_ATRACE 1
#undef  CONFIG_DSU_ATRACESZ1
#undef  CONFIG_DSU_ATRACESZ2
#define CONFIG_DSU_ATRACESZ4 1
#undef  CONFIG_DSU_ATRACESZ8
#undef  CONFIG_DSU_ATRACESZ16
/*
 * Fault-tolerance  
 */
#undef  CONFIG_LEON3FT_EN
/*
 * VHDL debug settings       
 */
#undef  CONFIG_IU_DISAS
#undef  CONFIG_DEBUG_PC32
/*
 * AMBA configuration
 */
#define CONFIG_AHB_DEFMST (0)
#define CONFIG_AHB_RROBIN 1
#undef  CONFIG_AHB_SPLIT
#undef  CONFIG_AHB_FPNPEN
#define CONFIG_AHB_IOADDR FFF
#define CONFIG_APB_HADDR 800
#undef  CONFIG_AHB_MON
#undef  CONFIG_AHB_DTRACE
/*
 * Debug Link           
 */
#define CONFIG_DSU_JTAG 1
#define CONFIG_DSU_ETH 1
#undef  CONFIG_DSU_ETHSZ1
#define CONFIG_DSU_ETHSZ2 1
#undef  CONFIG_DSU_ETHSZ4
#undef  CONFIG_DSU_ETHSZ8
#undef  CONFIG_DSU_ETHSZ16
#define CONFIG_DSU_IPMSB C0A8
#define CONFIG_DSU_IPLSB 0033
#define CONFIG_DSU_ETHMSB 020605
#define CONFIG_DSU_ETHLSB 000987
#undef  CONFIG_DSU_ETH_PROG
/*
 * Peripherals             
 */
/*
 * Memory controller             
 */
/*
 * Leon2 memory controller        
 */
#define CONFIG_MCTRL_LEON2 1
#undef  CONFIG_MCTRL_8BIT
#define CONFIG_MCTRL_16BIT 1
#undef  CONFIG_MCTRL_5CS
#undef  CONFIG_MCTRL_SDRAM
/*
 * MIG memory controller   
 */
#define CONFIG_MIG_DDR2 1
#define CONFIG_MIG_RANKS (1)
#define CONFIG_MIG_COLBITS (10)
#define CONFIG_MIG_ROWBITS (13)
#define CONFIG_MIG_BANKBITS (2)
#define CONFIG_MIG_HMASK F00
#define CONFIG_AHBSTAT_ENABLE 1
#define CONFIG_AHBSTAT_NFTSLV (1)
/*
 * On-chip RAM/ROM                 
 */
#undef  CONFIG_AHBROM_ENABLE
#undef  CONFIG_AHBRAM_ENABLE
/*
 * Ethernet             
 */
#define CONFIG_GRETH_ENABLE 1
#undef  CONFIG_GRETH_GIGA
#undef  CONFIG_GRETH_FIFO4
#undef  CONFIG_GRETH_FIFO8
#undef  CONFIG_GRETH_FIFO16
#define CONFIG_GRETH_FIFO32 1
#undef  CONFIG_GRETH_FIFO64
#undef  CONFIG_GRETH_FT
/*
 * UART, timer, I/O port and interrupt controller
 */
#define CONFIG_UART1_ENABLE 1
#undef  CONFIG_UA1_FIFO1
#undef  CONFIG_UA1_FIFO2
#define CONFIG_UA1_FIFO4 1
#undef  CONFIG_UA1_FIFO8
#undef  CONFIG_UA1_FIFO16
#undef  CONFIG_UA1_FIFO32
#define CONFIG_IRQ3_ENABLE 1
#undef  CONFIG_IRQ3_SEC
#define CONFIG_GPT_ENABLE 1
#define CONFIG_GPT_NTIM (2)
#define CONFIG_GPT_SW (8)
#define CONFIG_GPT_TW (32)
#define CONFIG_GPT_IRQ (8)
#define CONFIG_GPT_SEPIRQ 1
#undef  CONFIG_GPT_WDOGEN
#define CONFIG_GRGPIO_ENABLE 1
#define CONFIG_GRGPIO_WIDTH (8)
#define CONFIG_GRGPIO_IMASK 0000
/*
 * Keybord and VGA interface
 */
#undef  CONFIG_KBD_ENABLE
#undef  CONFIG_VGA_ENABLE
#define CONFIG_SVGA_ENABLE 1
/*
 * SPI
 */
/*
 * SPI memory controller 
 */
#undef  CONFIG_SPIMCTRL
/*
 * SPI controller(s) 
 */
#undef  CONFIG_SPICTRL_ENABLE
/*
 * System ACE Interface Controller
 */
#define CONFIG_GRACECTRL 1
/*
 * PCI EXPRESS              
 */
#undef  CONFIG_PCIEXP_MASTER_TARGET
#undef  CONFIG_PCIEXP_MASTER_FIFO
/*
 * VHDL Debugging        
 */
#undef  CONFIG_DEBUG_UART
