/**
 * @file can_pic32.h
 * @author Sebastien CAUX (sebcaux)
 * @copyright Robotips 2016-2017
 *
 * @date May 06, 2016, 11:51 AM
 *
 * @brief Uart support for rtprog for PIC32MM, PIC32MK, PIC32MX,
 * PIC32MZDA, PIC32MZEC and PIC32MZEF
 *
 * Implementation based on Microchip document DS61154C :
 *  http://ww1.microchip.com/downloads/en/DeviceDoc/61154C.pdf
 */

#ifndef CAN_PIC32_H
#define CAN_PIC32_H

#if defined(DEVICE_PIC32MX530F128H) || defined(DEVICE_PIC32MX530F128L) || defined(DEVICE_PIC32MX534F064H) \
 || defined(DEVICE_PIC32MX534F064L) || defined(DEVICE_PIC32MX550F256H) || defined(DEVICE_PIC32MX550F256L) \
 || defined(DEVICE_PIC32MX564F064H) || defined(DEVICE_PIC32MX564F064L) || defined(DEVICE_PIC32MX564F128H) \
 || defined(DEVICE_PIC32MX564F128L) || defined(DEVICE_PIC32MX570F512H) || defined(DEVICE_PIC32MX570F512L) \
 || defined(DEVICE_PIC32MX575F256H) || defined(DEVICE_PIC32MX575F256L) || defined(DEVICE_PIC32MX575F512H) \
 || defined(DEVICE_PIC32MX575F512L) || defined(DEVICE_PIC32MX764F128H) || defined(DEVICE_PIC32MX764F128L) \
 || defined(DEVICE_PIC32WK2057GPD132)
 #define CAN_COUNT 1
#elif defined(DEVICE_PIC32MX775F256H) || defined(DEVICE_PIC32MX775F256L) || defined(DEVICE_PIC32MX775F512H) \
 || defined(DEVICE_PIC32MX775F512L) || defined(DEVICE_PIC32MX795F512H) || defined(DEVICE_PIC32MX795F512L) \
 || defined(DEVICE_PIC32MZ0512EFF064) || defined(DEVICE_PIC32MZ0512EFF100) || defined(DEVICE_PIC32MZ0512EFF124) \
 || defined(DEVICE_PIC32MZ0512EFF144) || defined(DEVICE_PIC32MZ0512EFK064) || defined(DEVICE_PIC32MZ0512EFK100) \
 || defined(DEVICE_PIC32MZ0512EFK124) || defined(DEVICE_PIC32MZ0512EFK144) || defined(DEVICE_PIC32MZ1024ECH064) \
 || defined(DEVICE_PIC32MZ1024ECH100) || defined(DEVICE_PIC32MZ1024ECH124) || defined(DEVICE_PIC32MZ1024ECH144) \
 || defined(DEVICE_PIC32MZ1024ECM064) || defined(DEVICE_PIC32MZ1024ECM100) || defined(DEVICE_PIC32MZ1024ECM124) \
 || defined(DEVICE_PIC32MZ1024ECM144) || defined(DEVICE_PIC32MZ1024EFF064) || defined(DEVICE_PIC32MZ1024EFF100) \
 || defined(DEVICE_PIC32MZ1024EFF124) || defined(DEVICE_PIC32MZ1024EFF144) || defined(DEVICE_PIC32MZ1024EFH064) \
 || defined(DEVICE_PIC32MZ1024EFH100) || defined(DEVICE_PIC32MZ1024EFH124) || defined(DEVICE_PIC32MZ1024EFH144) \
 || defined(DEVICE_PIC32MZ1024EFK064) || defined(DEVICE_PIC32MZ1024EFK100) || defined(DEVICE_PIC32MZ1024EFK124) \
 || defined(DEVICE_PIC32MZ1024EFK144) || defined(DEVICE_PIC32MZ1024EFM064) || defined(DEVICE_PIC32MZ1024EFM100) \
 || defined(DEVICE_PIC32MZ1024EFM124) || defined(DEVICE_PIC32MZ1024EFM144) || defined(DEVICE_PIC32MZ1025DAA169) \
 || defined(DEVICE_PIC32MZ1025DAA176) || defined(DEVICE_PIC32MZ1025DAA288) || defined(DEVICE_PIC32MZ1025DAB169) \
 || defined(DEVICE_PIC32MZ1025DAB176) || defined(DEVICE_PIC32MZ1025DAB288) || defined(DEVICE_PIC32MZ1025DAG169) \
 || defined(DEVICE_PIC32MZ1025DAG176) || defined(DEVICE_PIC32MZ1025DAH169) || defined(DEVICE_PIC32MZ1025DAH176) \
 || defined(DEVICE_PIC32MZ1064DAA169) || defined(DEVICE_PIC32MZ1064DAA176) || defined(DEVICE_PIC32MZ1064DAA288) \
 || defined(DEVICE_PIC32MZ1064DAB169) || defined(DEVICE_PIC32MZ1064DAB176) || defined(DEVICE_PIC32MZ1064DAB288) \
 || defined(DEVICE_PIC32MZ1064DAG169) || defined(DEVICE_PIC32MZ1064DAG176) || defined(DEVICE_PIC32MZ1064DAH169) \
 || defined(DEVICE_PIC32MZ1064DAH176) || defined(DEVICE_PIC32MZ2025DAA169) || defined(DEVICE_PIC32MZ2025DAA176) \
 || defined(DEVICE_PIC32MZ2025DAA288) || defined(DEVICE_PIC32MZ2025DAB169) || defined(DEVICE_PIC32MZ2025DAB176) \
 || defined(DEVICE_PIC32MZ2025DAB288) || defined(DEVICE_PIC32MZ2025DAG169) || defined(DEVICE_PIC32MZ2025DAG176) \
 || defined(DEVICE_PIC32MZ2025DAH169) || defined(DEVICE_PIC32MZ2025DAH176) || defined(DEVICE_PIC32MZ2048ECH064) \
 || defined(DEVICE_PIC32MZ2048ECH100) || defined(DEVICE_PIC32MZ2048ECH124) || defined(DEVICE_PIC32MZ2048ECH144) \
 || defined(DEVICE_PIC32MZ2048ECM064) || defined(DEVICE_PIC32MZ2048ECM100) || defined(DEVICE_PIC32MZ2048ECM124) \
 || defined(DEVICE_PIC32MZ2048ECM144) || defined(DEVICE_PIC32MZ2048EFH064) || defined(DEVICE_PIC32MZ2048EFH100) \
 || defined(DEVICE_PIC32MZ2048EFH124) || defined(DEVICE_PIC32MZ2048EFH144) || defined(DEVICE_PIC32MZ2048EFM064) \
 || defined(DEVICE_PIC32MZ2048EFM100) || defined(DEVICE_PIC32MZ2048EFM124) || defined(DEVICE_PIC32MZ2048EFM144) \
 || defined(DEVICE_PIC32MZ2064DAA169) || defined(DEVICE_PIC32MZ2064DAA176) || defined(DEVICE_PIC32MZ2064DAA288) \
 || defined(DEVICE_PIC32MZ2064DAB169) || defined(DEVICE_PIC32MZ2064DAB176) || defined(DEVICE_PIC32MZ2064DAB288) \
 || defined(DEVICE_PIC32MZ2064DAG169) || defined(DEVICE_PIC32MZ2064DAG176) || defined(DEVICE_PIC32MZ2064DAH169) \
 || defined(DEVICE_PIC32MZ2064DAH176)
 #define CAN_COUNT 2
#elif defined(DEVICE_PIC32MK0512GPE064) || defined(DEVICE_PIC32MK0512GPE100) || defined(DEVICE_PIC32MK0512MCF064) \
 || defined(DEVICE_PIC32MK0512MCF100) || defined(DEVICE_PIC32MK1024GPE064) || defined(DEVICE_PIC32MK1024GPE100) \
 || defined(DEVICE_PIC32MK1024MCF064) || defined(DEVICE_PIC32MK1024MCF100)
 #define CAN_COUNT 4
#else
 #define CAN_COUNT 0
#endif

#endif // CAN_PIC32_H