. V12.01.01 08/12/2025 TT C-0953127 Coding Audit Comments                       
. *----------------------------------------------------------------------
. * Include Name  :   MRTAUMFD.INC
. *
. * Function      :   File Def'n Include for Medical Records                    
. *                   Coding Audit Comment               
. *
. * File Type     :   SQL
. *
. * File Name     :   mrtaumaf.dat
. *
. * Index Values  :   KEY30                                                  
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
MRTAUMA1   IFILE    SQL, FIXED=284, KEY="U1-8,9-10,11-18,19-21,22-27,28-30"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
MRAMVISN  DIM       8      8        1     Visit Number                       
MRAMEPSN  DIM       2      2        9     Episode Number                     
MRAMADTE  DIM       8      8        11    Audit Date                         
MRAMRTYP  DIM       3      3        19    Record Type                        
.                                         001 - Audit Comment                  
MRAMNOTE  DIM       6      6        22    Note Number                        
MRAMLINE  DIM       3      3        28    Line Number                        
MRAMCOMM  DIM       100    100      31    Comments                           
MRAMACTV  DIM       1      1        131   Active Flag                        
.                                         0=Active                             
.                                         1=Deleted                            
MRAMCUSR  DIM       10     10       132   Web User Id Created (websecaf)     
MRAMCDTE  DIM       8      8        142   Date Record Created (CCYYMMDD)     
MRAMCTIM  DIM       8      8        150   Time Record Created (hh:mm:ss)     
MRAMUUSR  DIM       10     10       158   Web User Id Updated (websecaf)     
MRAMUDTE  DIM       8      8        168   Date Record Updated (CCYYMMDD)     
MRAMUTIM  DIM       8      8        176   Time Record Updated (hh:mm:ss)     
MRAMSPAR  DIM       100    100      184   Spare                              
.
.End of Record                      284  
.
