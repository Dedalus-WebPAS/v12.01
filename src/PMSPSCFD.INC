. V12.01.01 15/12/2025 TTI C-0964761 IHCW Service Code                          
. *----------------------------------------------------------------------
. * Include Name  :   PMSPSCFD.INC
. *
. * Function      :   File Def'n Include for Patient System                     
. *                   IHCW Service Code                  
. *
. * File Type     :   SQL
. *
. * File Name     :   pmspscaf.dat
. *
. * Index Values  :   KEY34                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
PMSPSCA1   IFILE    SQL, FIXED=86, KEY="U1-8,9-11,12-14,15-34"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
PMPSCODE  DIM       8      8        1     Program Code (pmsprgaf.pmpgcode)   
PMPSATYP  DIM       3      3        9     Admission Type                     
PMPSHDIP  DIM       3      3        12    Highest Day in Period              
PMPSSRCD  DIM       20     20       15    Service Code                       
PMPSACTV  DIM       1      1        35    Active / Inactive Flag             
.                                         Blank or 0 = Active                  
.                                         1 = Inactive                         
PMPSSPAR  DIM       50     50       36    Spare                              
.
.End of Record                      86   
.
