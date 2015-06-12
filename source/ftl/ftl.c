/*
* File Name    : ftl.c
* Discription  : 
* CreateAuthor : Haven Yang
* CreateDate   : 2015.6.11
*===============================================================================
* Modify Record:
*=============================================================================*/

/*============================================================================*/
/* #include region: include std lib & other head file                         */
/*============================================================================*/
#include "disk_config.h"
#include "flash_interface.h"
#include "ftl.h"
#include "table.h"
/*============================================================================*/
/* #define region: constant & MACRO defined here                              */
/*============================================================================*/

/*============================================================================*/
/* extern region: extern global variable & function prototype                 */
/*============================================================================*/

/*============================================================================*/
/* global region: declare global variable                                     */
/*============================================================================*/


/*============================================================================*/
/* local region:  declare local variable & local function prototype           */
/*============================================================================*/

/*============================================================================*/
/* main code region: function implement                                       */
/*============================================================================*/

U32 ftl_llf(void)
{
    table_llf_bbt();
    table_llf_vbt();
    table_llf_pbt();
    table_llf_pmt();
    return 0;
}


/*====================End of this file========================================*/

