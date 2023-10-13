/********************************************************************/
/*      SWC     : Macros.c	                                        */
/*      Date    : 8/26/2023                                         */
/*      Authors : Mohamed Mahmoud Masoud (200)                      */
/********************************************************************/
/* =============================================================
 * 							File Guard
 * =============================================================*/
#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/*
 * Boolean datatype
 */
typedef unsigned char boolean;
/*
 * Boolean Values
 */
#ifndef FALSE
#define FALSE 			 (0u)
#endif
#ifndef TRUE
#define TRUE 			 (1u)
#endif
/* =============================================================
 * 							Definitions
 * =============================================================*/
#define LOGIC_HIGH       (1u)
#define LOGIC_LOW        (0u)
#define RT_OK			 (1u)
#define RT_NOK			 (0u)	

#define NULL 0
#define NULL_PTR				 0		
#define NULL_POINTER			 0
typedef unsigned char         uint8;         
typedef signed char           sint8;         
typedef unsigned short        uint16;        
typedef signed short          sint16;        
typedef unsigned long         uint32;        
typedef signed long           sint32;        
typedef unsigned long long    uint64;        
typedef signed long long      sint64;        
typedef float                 float32;
typedef double                float64;


#define STATUS          uint8

#endif /* STD_TYPES_H_ */
