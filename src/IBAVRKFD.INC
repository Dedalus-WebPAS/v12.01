. V12.01.01 16/12/2025 TTI C-0967055 Stationery Variables Keyword               
. *----------------------------------------------------------------------
. * Include Name  :   IBAVRKFD.INC
. *
. * Function      :   File Def'n Include for IBA Software                       
. *                   Stationery Variables Keyword       
. *
. * File Type     :   SQL
. *
. * File Name     :   ibavrkaf.dat
. *
. * Index Values  :   KEY8    KEY33                                          
. *
. *----------------------------------------------------------------------
.
.Data File Definition
.--------------------
IBAVRKA1   IFILE    SQL, FIXED=89, KEY="U1-3,4-8"
IBAVRKA2   IFILE    SQL, FIXED=89, KEY="U1-3,9-38"
.
.Name     Type      Length Physical Start Description
.----     ----      ------ -------- ----- -----------
IBVKRTYP  DIM       3      3        1     Stationery Type                    
.                                          1 = MR3 (O/P)                       
.                                          2 = MR5 (A&E)                       
.                                          3 = MR10 (I/P)                      
.                                          4 = Medical Record Request          
.                                          5 = Health Fund Claim Form          
.                                          6 = Cancer Reg Form                 
.                                          7 = Emergency                       
.                                          8 = ACC Form                        
.                                          9 = PAT Invoice Header              
.                                         10 = PAT Invoice Tail                
.                                         11 = PRI Invoice Header              
.                                         12 = PRI Invoice Tail                
.                                         13 = Debtors Header                  
.                                         14 = Debtors Tail                    
.                                         15 = Cash Receipt Header             
.                                         16 = Cash Receipt Tail               
.                                         17 = Loan Equipment                  
.                                         18 = Theatre Form                    
.                                         19 = Assessment Forms                
.                                         20 = Medical Booking                 
.                                         21 = Reserved                        
.                                         22 = Reserved                        
.                                         23 = Reserved                        
.                                         24 = Reserved                        
.                                         25 = Reserved                        
.                                         26 = Reserved                        
.                                         27 = Reserved                        
.                                         28 = Reserved                        
.                                         29 = Reserved                        
.                                         30 = Reserved                        
.                                         31 = Reserved                        
.                                         32 = Reserved                        
.                                         33 = Reserved                        
.                                         34 = Reserved                        
.                                         35 = Reserved                        
.                                         36 = Reserved                        
.                                         37 = Reserved                        
.                                         38 = Reserved                        
.                                         39 = Reserved                        
.                                         40 = Order Special Services          
.                                         41 = Order Cancellation              
.                                         42 = Medication Order                
.                                         43 = Dis Summ. Req/Incomp Dis        
.                                         44 = Allied Health                   
.                                         45 = Not currently in use            
.                                         46 = Not currently in use            
.                                         47 = Not currently in use            
.                                         48 = Not currently in use            
.                                         49 = Not currently in use            
.                                         50 = Not currently in use            
.                                         51 = Pathology Order
.                                         52 = Pathology Test
.                                         53 = Not currently in use
.                                         54 = Radiology Order
.                                         55 = Radiology Test
.                                         56 = Input Completed Menu
.                                         57 = Modify Completed Menu
.                                         58 = Changes to Diet Code
.                                         59 = Alter to Diet Code
.                                         60 = Order a Printed Menu
.                                         61 = Stock Order
.                                         62 = Stock Order Detail(Ward)
.                                         63 = Stock Order Det.(Stores)
.                                         64 = Order Equipment
.                                         65 = Order Equipment Detail
.                                         66 = Return Equipment
.                                         67 = Accept/Dispatch Med. Rec
.                                         68 = Reserve Medical Record
.                                         69 = Leave Notification
.                                         70 = Return From Leave
.                                         71 = Death Notification
.                                         72 = Discharge Notification
.                                         73 = Bed Transfers
.                                         74 = Theatre Booking
.                                         75 = Request O/P Booking
.                                         76 = Priv. Prac. Form & NHCF
.                                         77 = Not currently in use
.                                         78 = Not currently in use
.                                         79 = Not currently in use
.                                         80 = Change to Order Priority
IBVKRFNM  DIM       5      5        4     Field Number                       
IBVKDESC  DIM       30     30       9     Variable Description               
IBVKSPAR  DIM       50     50       39    Spare                              
.
.End of Record                      89   
.
