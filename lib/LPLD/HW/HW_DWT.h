/*!
 *     COPYRIGHT NOTICE
 *     Copyright (c) 2013,山外科技
 *     All rights reserved.
 *     技术讨论：山外论坛 http://www.vcan123.com
 *
 *     除注明出处外，以下所有内容版权均属山外科技所有，未经允许，不得用于商业用途，
 *     修改内容时必须保留山外科技的版权声明。
 *
 * @file       MK60_dwt.h
 * @brief      flash函数库
 * @author     山外科技
 * @version    v5.0
 * @date       2013-10-22
 */

#ifndef _MK60_DWT_H_
#define _MK60_DWT_H_

#define DELAY()         dwt_delay_ms(500)
#define DELAY_MS(ms)    dwt_delay_ms(ms)
#define DELAY_US(us)    dwt_delay_us(us)


extern void dwt_delay_us(uint32 us);
extern void dwt_delay_ms(uint32 ms);

#endif