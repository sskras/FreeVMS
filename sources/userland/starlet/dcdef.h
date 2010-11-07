#ifndef dcdef_h
#define dcdef_h

/* most of these are not available */
/* we are regrettably stuck with isa and pci */

#define AT$_MBA 0                       
#define AT$_UBA 1                       
#define AT$_DR 2                        
#define AT$_MPM 3                       
#define AT$_CI 4                        
#define AT$_NULL 5                      
#define AT$_BDA 6                       
#define AT$_DMB32 7                     
#define AT$_DRB32 8                     
#define AT$_BVP 9                       
#define AT$_BVP_SSP 10                  
#define AT$_BVP_NIP 11                  
#define AT$_KA410 12                    
#define AT$_KA420 12                    
#define AT$_GENBI 13                    
#define AT$_NBI 14                      
#define AT$_DISK9 15
#define AT$_XBI 16
#define AT$_TERM9 17
#define AT$_TAPE9 18
#define AT$_PRTR9 19
#define AT$_SFUN9 20
#define AT$_USER9 21
#define AT$_MBUSIO 22
#define AT$_MBUSGFX 23
#define AT$_KA640 24
#define AT$_XWATCH 25
#define AT$_XBI_PLUS_XMI 26
#define AT$_XBI_PLUS_BI 27
#define AT$_XJA 28
#define AT$_HSX50 29
#define AT$_KDM70 29
#define AT$_NI 30
#define AT$_KA43 31
#define AT$_SJA 32
#define AT$_GENXMI 33
#define AT$_KA440 34
#define AT$_KA46 34
#define AT$_KA520 35
#define AT$_XSA 36
#define AT$_XZA 37
#define AT$_XZA_SCSI 37
#define AT$_VME 38
#define AT$_IOP 39
#define AT$_LAMB 40
#define AT$_KA49 41
#define AT$_TC 42
#define AT$_X1303 43
#define AT$_XMI 44
#define AT$_FBUS 45
#define AT$_COREIO 46
#define AT$_KA0202 47
#define AT$_KA0202_LBUS 48
#define AT$_KA0302 49
#define AT$_KA0402 50
#define AT$_TURBO_SCSI 51
#define AT$_CIMNA 52
#define AT$_XZA_DSSI 53
#define AT$_DEMNA 54
#define AT$_FFA 55
#define AT$_KA0602 56
#define AT$_EISA 57
#define AT$_VTI_COMBO 58
#define AT$_KA0702 64
#define AT$_TC_MULTI_NI 65
#define AT$_AHA_1742A 66
#define AT$_KA0902 67
#define AT$_PCI 68
#define AT$_KA0802 69
#define AT$_MULTIFUNCTION_PCI 70
#define AT$_ISA 71
#define AT$_XBUS 72
#define AT$_KA0C05 73
#define AT$_KA0E04 74
#define AT$_KA0D02 75
#define AT$_THIRDPARTY0 76
#define AT$_THIRDPARTY1 77
#define AT$_THIRDPARTY2 78
#define AT$_THIRDPARTY3 79
#define AT$_THIRDPARTY4 80
#define AT$_THIRDPARTY5 81
#define AT$_THIRDPARTY6 82
#define AT$_THIRDPARTY7 83
#define AT$_MULTIFUNCTION_ISA 84
#define AT$_KA0F05 85
#define AT$_LMCP 86
#define AT$_TIOP 87
#define AT$_ITIOP 88
#define AT$_KA1102 89
#define AT$_KA1504 90
#define AT$_HPC 91
#define AT$_PCMCIA 92
#define AT$_KA1402 93
#define AT$_KA0905 94
#define AT$_KA1802 95
#define AT$_KA1805 96
#define AT$_MEMCHAN 97
#define AT$_KA1B02 98
#define AT$_KA1B05 99
#define AT$_KA1A05 100
#define AT$_KA1605 101
#define AT$_MC_BUS 102
#define AT$_KA1105 103
#define AT$_KA1702 104
#define AT$_KA1E07 105
#define AT$_KA2005 106
#define AT$_KA2405 107
#define AT$_KA2208 108
#define AT$_KA2508 109
#define AT$_KA2308 110
#define AT$_WFQBB 111
#define AT$_WFIOP 112
#define AT$_WFPCA 113
#define AT$_KA2608 114

#define DC$_DISK 1                      
#define DC$_TAPE 2                      
#define DC$_SCOM 32                     
#define DC$_CARD 65                     
#define DC$_TERM 66                     
#define DC$_LP 67                       
#define DC$_WORKSTATION 70              
#define DC$_REALTIME 96                 
#define DC$_DECVOICE 97                 
#define DC$_AUDIO 98                    
#define DC$_VIDEO 99                    
#define DC$_BUS 128                     
#define DC$_MAILBOX 160                 
#define DC$_REMCSL_STORAGE 170          
#define DC$_MISC 200                    

#define DT$_RK06 1                      
#define DT$_RK07 2                      
#define DT$_RP04 3                      
#define DT$_RP05 4                      
#define DT$_RP06 5                      
#define DT$_RM03 6                      
#define DT$_RP07 7                      
#define DT$_RP07HT 8                    
#define DT$_RL01 9                      
#define DT$_RL02 10                     
#define DT$_RX02 11                     
#define DT$_RX04 12                     
#define DT$_RM80 13                     
#define DT$_TU58 14                     
#define DT$_RM05 15                     
#define DT$_RX01 16                     
#define DT$_ML11 17                     
#define DT$_RB02 18                     
#define DT$_RB80 19                     
#define DT$_RA80 20                     
#define DT$_RA81 21                     
#define DT$_RA60 22                     
#define DT$_RZ01 23                     
#define DT$_RC25 23                     
#define DT$_RZF01 24                    
#define DT$_RCF25 24                    
#define DT$_RD51 25                     
#define DT$_RX50 26                     
#define DT$_RD52 27                     
#define DT$_RD53 28                     
#define DT$_RD26 29                     
#define DT$_RA82 30                     
#define DT$_RD31 31                     
#define DT$_RD54 32                     
#define DT$_CRX50 33                    
#define DT$_RRD50 34                    
#define DT$_GENERIC_DU 35               
#define DT$_RX33 36                     
#define DT$_RX18 37                     
#define DT$_RA70 38
#define DT$_RA90 39
#define DT$_RD32 40
#define DT$_DISK9 41
#define DT$_RX35 42
#define DT$_RF30 43
#define DT$_RF70 44
#define DT$_RF71 44
#define DT$_RD33 45
#define DT$_ESE20 46
#define DT$_TU56 47
#define DT$_RZ22 48
#define DT$_RZ23 49
#define DT$_RZ24 50
#define DT$_RZ55 51
#define DT$_RRD40S 52
#define DT$_RRD40 53
#define DT$_GENERIC_DK 54
#define DT$_RX23 55
#define DT$_RF31 56
#define DT$_RF72 57
#define DT$_RAM_DISK 58
#define DT$_RZ25 59
#define DT$_RZ56 60
#define DT$_RZ57 61
#define DT$_RX23S 62
#define DT$_RX33S 63
#define DT$_RA92 64
#define DT$_SSTRIPE 65
#define DT$_RZ23L 66
#define DT$_RX26 67
#define DT$_RZ57I 68
#define DT$_RZ31 69
#define DT$_RZ58 70
#define DT$_SCSI_MO 71
#define DT$_RWZ01 71
#define DT$_RRD42 72
#define DT$_CD_LOADER_1 73
#define DT$_ESE25 74
#define DT$_RFH31 75
#define DT$_RFH72 76
#define DT$_RF73 77
#define DT$_RFH73 78
#define DT$_RA72 79
#define DT$_RA71 80
#define DT$_RAH72 80
#define DT$_RF32 81
#define DT$_RF35 81
#define DT$_RFH32 82
#define DT$_RFH35 82
#define DT$_RFF31 83
#define DT$_RF31F 83
#define DT$_RZ72 84
#define DT$_RZ73 85
#define DT$_RZ35 86
#define DT$_RZ24L 87
#define DT$_RZ25L 88
#define DT$_RZ55L 89
#define DT$_RZ56L 90
#define DT$_RZ57L 91
#define DT$_RA73 92
#define DT$_RZ26 93
#define DT$_RZ36 94
#define DT$_RZ74 95
#define DT$_ESE52 96
#define DT$_ESE56 97
#define DT$_ESE58 98
#define DT$_RZ27 99
#define DT$_RZ37 100
#define DT$_RZ34L 101
#define DT$_RZ35L 102
#define DT$_RZ36L 103
#define DT$_RZ38 104
#define DT$_RZ75 105
#define DT$_RZ59 106
#define DT$_RZ13 107
#define DT$_RZ14 108
#define DT$_RZ15 109
#define DT$_RZ16 110
#define DT$_RZ17 111
#define DT$_RZ18 112
#define DT$_EZ51 113
#define DT$_EZ52 114
#define DT$_EZ53 115
#define DT$_EZ54 116
#define DT$_EZ58 117
#define DT$_EF51 118
#define DT$_EF52 119
#define DT$_EF53 120
#define DT$_EF54 121
#define DT$_EF58 122
#define DT$_RF36 123
#define DT$_RF37 124
#define DT$_RF74 125
#define DT$_RF75 126
#define DT$_HSZ10 127
#define DT$_RZ28 128
#define DT$_GENERIC_RX 180
#define DT$_FD1 129                     
#define DT$_FD2 130                     
#define DT$_FD3 131                     
#define DT$_FD4 132                     
#define DT$_FD5 133                     
#define DT$_FD6 134                     
#define DT$_FD7 135                     
#define DT$_FD8 136                     
#define DT$_RZ29 137
#define DT$_RZ26L 138
#define DT$_RRD43 139
#define DT$_RRD44 140
#define DT$_HSX00 141
#define DT$_HSX01 142
#define DT$_RZ26B 143
#define DT$_RZ27B 144
#define DT$_RZ28B 145
#define DT$_RZ29B 146
#define DT$_RZ73B 147
#define DT$_RZ74B 148
#define DT$_RZ75B 149
#define DT$_RWZ21 150
#define DT$_RZ27L 151
#define DT$_HSZ20 152
#define DT$_HSZ40 153
#define DT$_HSZ15 154
#define DT$_RZ26M 155
#define DT$_RW504 156
#define DT$_RW510 157
#define DT$_RW514 158
#define DT$_RW516 159
#define DT$_RWZ52 160
#define DT$_RWZ53 161
#define DT$_RWZ54 162
#define DT$_RWZ31 163
#define DT$_EZ31 164
#define DT$_EZ32 165
#define DT$_EZ33 166
#define DT$_EZ34 167
#define DT$_EZ35 168
#define DT$_EZ31L 169
#define DT$_EZ32L 170
#define DT$_EZ33L 171
#define DT$_RZ28L 172
#define DT$_RWZ51 173
#define DT$_EZ56R 174
#define DT$_RAID0 175
#define DT$_RAID5 176
#define DT$_CONSOLE_CALLBACK 177
#define DT$_FILES_64 178
#define DT$_SWXCR 179
#define DT$_SNAPPY_DISK 180
#define DT$_SNAPPY_POOL 181
#define DT$_TE16 1                      
#define DT$_TU45 2                      
#define DT$_TU77 3                      
#define DT$_TS11 4                      
#define DT$_TU78 5                      
#define DT$_TA78 6                      
#define DT$_TU80 7                      
#define DT$_TU81 8                      
#define DT$_TA81 9
#define DT$_TK50 10                     
#define DT$_MR_TU70 11                  
#define DT$_MR_TU72 12                  
#define DT$_MW_TSU05 13                 
#define DT$_MW_TSV05 14                 
#define DT$_TK70 15                     
#define DT$_RV20 16
#define DT$_RV80 16
#define DT$_TK60 17                     
#define DT$_GENERIC_TU 18               
#define DT$_TA79 19                     
#define DT$_TAPE9 20
#define DT$_TA90 21
#define DT$_TF30 22
#define DT$_TF85 22
#define DT$_TF70 23
#define DT$_RV60 24
#define DT$_TZ30 25
#define DT$_TM32 26
#define DT$_TZX0 27
#define DT$_TSZ05 27
#define DT$_GENERIC_MK 28
#define DT$_TK50S 29
#define DT$_TZ30S 30
#define DT$_TK70L 31
#define DT$_TLZ04 32
#define DT$_TZK10 33
#define DT$_TSZ07 34
#define DT$_TSZ08 35
#define DT$_TA90E 36
#define DT$_TZK11 37
#define DT$_TZ85 38
#define DT$_TZ86 39
#define DT$_TZ87 40
#define DT$_TZ857 41
#define DT$_EXABYTE 42
#define DT$_TAPE_LOADER_1 43
#define DT$_TA91 44
#define DT$_TLZ06 45
#define DT$_TA85 46
#define DT$_TKZ60 47
#define DT$_TLZ6 48
#define DT$_TZ867 49
#define DT$_TZ877 50
#define DT$_TAD85 51
#define DT$_TF86 52
#define DT$_TKZ09 53
#define DT$_TA86 54
#define DT$_TA87 55
#define DT$_TD34 56
#define DT$_TD44 57
#define DT$_HST00 58
#define DT$_HST01 59
#define DT$_TLZ07 60
#define DT$_TLZ7 61
#define DT$_TZ88 62
#define DT$_TZ885 63
#define DT$_TZ887 64
#define DT$_TZ89 65
#define DT$_TZ895 66
#define DT$_TZ897 67
#define DT$_TZ875 68
#define DT$_TL810 69
#define DT$_TL820 70
#define DT$_TZ865 71

#define DT$_TTYUNKN 0                   
#define DT$_VT05 1                      
#define DT$_FT1 16                      
#define DT$_FT2 17
#define DT$_FT3 18
#define DT$_FT4 19
#define DT$_FT5 20
#define DT$_FT6 21
#define DT$_FT7 22
#define DT$_FT8 23                      
#define DT$_LAX 32                      
#define DT$_LA36 32                     
#define DT$_LA120 33
#define DT$_VT5X 64                     
#define DT$_VT52 64                     
#define DT$_VT55 65                     
#define DT$_TQ_BTS 4                    
#define DT$_TEK401X 10                  
#define DT$_VT100 96                    
#define DT$_VK100 2
#define DT$_VT173 3
#define DT$_LA34 34
#define DT$_LA38 35
#define DT$_LA12 36
#define DT$_LA24 37
#define DT$_LA100 37
#define DT$_LQP02 38
#define DT$_VT101 97
#define DT$_VT102 98
#define DT$_VT105 99
#define DT$_VT125 100
#define DT$_VT131 101
#define DT$_VT132 102
#define DT$_DZ11 66                     
#define DT$_DZ32 67                     
#define DT$_DZ730 68                    
#define DT$_DMZ32 69                    
#define DT$_DHV 70                      
#define DT$_DHU 71                      
#define DT$_SLU 72                      
#define DT$_TERM9 73                    
#define DT$_LAT 74                      
#define DT$_VS100 1                     
#define DT$_VS125 2                     
#define DT$_VL_VS8200 3                 
#define DT$_VD 4                        
#define DT$_DECW_OUTPUT 5
#define DT$_DECW_INPUT 6
#define DT$_DECW_PSEUDO 7
#define DT$_DMC11 1                     
#define DT$_DMR11 2                     
#define DT$_XK_3271 3                   
#define DT$_XJ_2780 4                   
#define DT$_NW_X25 5                    
#define DT$_NV_X29 6                    
#define DT$_SB_ISB11 7                  
#define DT$_MX_MUX200 8                 
#define DT$_DMP11 9                     
#define DT$_DMF32 10                    
#define DT$_XV_3271 11                  
#define DT$_CI 12                       
#define DT$_NI 13                       
#define DT$_UNA11 14                    
#define DT$_DEUNA 14                    
#define DT$_YN_X25 15                   
#define DT$_YO_X25 16                   
#define DT$_YP_ADCCP 17                 
#define DT$_YQ_3271 18                  
#define DT$_YR_DDCMP 19                 
#define DT$_YS_SDLC 20                  
#define DT$_UK_KTC32 21                 
#define DT$_DEQNA 22                    
#define DT$_DMV11 23                    
#define DT$_ES_LANCE 24                 
#define DT$_DELUA 25                    
#define DT$_NQ_3271 26                  
#define DT$_DMB32 27                    
#define DT$_YI_KMS11K 28                
#define DT$_ET_DEBNT 29                 
#define DT$_ET_DEBNA 29                 
#define DT$_SJ_DSV11 30                 
#define DT$_SL_DSB32 31                 
#define DT$_ZS_DST32 32                 
#define DT$_XQ_DELQA 33                 
#define DT$_ET_DEBNI 34                 
#define DT$_EZ_SGEC 35                  
#define DT$_EX_DEMNA 36
#define DT$_DIV32 37
#define DT$_XQ_DEQTA 38
#define DT$_FT_NI 39
#define DT$_EP_LANCE 40
#define DT$_KWV32 41
#define DT$_SM_DSF32 42
#define DT$_FX_DEMFA 43
#define DT$_SF_DSF32 44                 
#define DT$_SE_DUP11 45                 
#define DT$_SE_DPV11 46                 
#define DT$_ZT_DSW 47                   
#define DT$_FC_DEFZA 48                 
#define DT$_EC_PMAD 49                  
#define DT$_EZ_TGEC 50                  
#define DT$_EA_DEANA 51                 
#define DT$_EY_NITC2 52                 
#define DT$_ER_DE422 53                 
#define DT$_ER_DE200 54                 
#define DT$_EW_TULIP 55                 
#define DT$_FA_DEFAA 56                 
#define DT$_FC_DEFTA 57                 
#define DT$_FQ_DEFQA 58                 
#define DT$_FR_DEFEA 59                 
#define DT$_FW_DEFPA 60                 
#define DT$_IC_DETRA 61                 
#define DT$_IQ_DEQRA 62                 
#define DT$_IR_DW300 63                 
#define DT$_ZR_SCC 64                   
#define DT$_ZY_DSYT1 65                 
#define DT$_ZE_DNSES 66                 
#define DT$_ER_DE425 67                 
#define DT$_EW_DE435 68                 
#define DT$_ER_DE205 69                 
#define DT$_HC_OTTO 70                  
#define DT$_ZS_PBXDI 71                 
#define DT$_EL_ELAN 72                  
#define DT$_HW_OTTO 73                  
#define DT$_EO_3C598 74                 
#define DT$_IW_TC4048 75                
#define DT$_EW_DE450 76                 
#define DT$_EW_DE500 77                 
#define DT$_CL_CLIP 78                  
#define DT$_ZW_PBXDP 79                 
#define DT$_HW_METEOR 80                
#define DT$_ER_DE305 81                 
#define DT$_EW_DEGPA 82                 
#define DT$_IW_RACORE 83                
#define DT$_EB_SMLAN 84                 
#define DT$_EI_82558 85                 
#define DT$_EI_82559 86                 
#define DT$_HW_HE622 87                 
#define DT$_HW_HE155 88                 
#define DT$_LP11 1                      
#define DT$_LA11 2                      
#define DT$_LA180 3                     
#define DT$_LC_DMF32 4                  
#define DT$_LI_DMB32 5                  
#define DT$_PRTR9 6                     
#define DT$_SCSI_SCANNER_1 7            
#define DT$_PC_PRINTER 8                
#define DT$_CR11 1                      
#define DT$_MBX 1                       
#define DT$_SHRMBX 2                    
#define DT$_NULL 3                      
#define DT$_PIPE 4                      
#define DT$_DAP_DEVICE 1                
#define DT$_LPA11 1                     
#define DT$_DR780 2                     
#define DT$_DR750 3                     
#define DT$_DR11W 4                     
#define DT$_PCL11R 5                    
#define DT$_PCL11T 6                    
#define DT$_DR11C 7                     
#define DT$_BS_DT07 8                   
#define DT$_XP_PCL11B 9                 
#define DT$_IX_IEX11 10                 
#define DT$_FP_FEPCM 11                 
#define DT$_TK_FCM 12                   
#define DT$_XI_DR11C 13                 
#define DT$_XA_DRV11WA 14               
#define DT$_DRB32 15                    
#define DT$_HX_DRQ3B 16                 
#define DT$_DECVOICE 1                  
#define DT$_DTC04 2                     
#define DT$_DTC05 3                     
#define DT$_DTCN5 4                     
#define DT$_AMD79C30A 1                 
#define DT$_CI780 1                     
#define DT$_CI750 2                     
#define DT$_UQPORT 3                    
#define DT$_UDA50 3                     
#define DT$_UDA50A 4                    
#define DT$_LESI 5                      
#define DT$_TU81P 6                     
#define DT$_RDRX 7                      
#define DT$_TK50P 8                     
#define DT$_RUX50P 9                    
#define DT$_RC26P 10                    
#define DT$_QDA50 11                    
#define DT$_KDA50 11                    
#define DT$_BDA50 12                    
#define DT$_KDB50 12                    
#define DT$_RRD50P 13                   
#define DT$_QDA25 14                    
#define DT$_KDA25 14                    
#define DT$_BCI750 15                   
#define DT$_BCA 16                      
#define DT$_RQDX3 17                    
#define DT$_NISCA 18                    
#define DT$_AIO 19                      
#define DT$_KFBTA 19                    
#define DT$_AIE 20                      
#define DT$_DEBNT 20                    
#define DT$_BSA 21
#define DT$_KSB50 21
#define DT$_TK70P 22                    
#define DT$_RV20P 23
#define DT$_RV80P 23
#define DT$_TK60P 24                    
#define DT$_SII 25
#define DT$_KFSQSA 26
#define DT$_KFQSA 26
#define DT$_SHAC 27
#define DT$_CIXCD 28
#define DT$_N5380 29
#define DT$_SCSII 30
#define DT$_HSX50 31
#define DT$_KDM70 31
#define DT$_TM32P 32
#define DT$_TK7LP 33
#define DT$_SWIFT 34
#define DT$_N53C94 35
#define DT$_KFMSA 36
#define DT$_SCSI_XTENDR 37
#define DT$_FT_TRACE_RAM 38
#define DT$_XVIB 39
#define DT$_XZA_SCSI 40
#define DT$_XZA_DSSI 41
#define DT$_N710_SCSI 42
#define DT$_N710_DSSI 43
#define DT$_AHA1742A 44
#define DT$_TZA_SCSI 45
#define DT$_N810_SCSI 46
#define DT$_CIPCA 47
#define DT$_ISP1020 48
#define DT$_MC_SPUR 49
#define DT$_PZA_SCSI 50
#define DT$_MCSCA 51                    
#define DT$_SMCI 52                     
#define DT$_KZPCM_SCSI 53
#define DT$_SYM896_SCSI 54
#define DT$_FCP_SCSI 55
#define DT$_LP7000_FC 56
#define DT$_SYM895_SCSI 57
#define DT$_KZPCA_SCSI 58
#define DT$_ADAPTEC7892_SCSI 59
#define DT$_ADAPTEC7895_SCSI 60
#define DT$_ADAPTEC7897_SCSI 61
#define DT$_ADAPTEC7899_SCSI 62
#define DT$_DN11 1                      
#define DT$_PV 2                        
#define DT$_SFUN9 3
#define DT$_USER9 4
#define DT$_GENERIC_SCSI 5
#define DT$_DMA_520 6
#define DT$_T3270 7
 
#endif 
 
