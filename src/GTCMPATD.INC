.---------------------------------------------------------------------
. Get Common System Parameters - Variables used in GTCMPA00
.----------------------------------------------------------------------
. V12.00.01  23/10/2025  Nikitha B      TSK 0958929
.            Added new variable CPARHPID - Hospital Id
. V11.05.01  24/03/2025  Ebon Clements  TSK 0958460
.            Changed CPARUSER to 10 characters
. V11.01.00  23/02/2021  Thanh T       TSK 0891886
.            Initial version
.----------------------------------------------------------------------
.
CPARPARM  DIM       8 (Parameter ID)
CPARMHOS  FORM      1 (Multi Hospital flag)
CPARUSER  DIM       10 (Logon User ID)
.
CPARERRO  FORM      1 (1 - Read failed
.                      0 - Read OK)
CPARHPID  DIM       3 (Hospital Id)

.******************************************************************************
.*        COMPARFD - Hospital Level Parameter definitions                     *
.******************************************************************************
PTCNOLDR  FORM      12       Number of minutes before highlighting Leave Red
